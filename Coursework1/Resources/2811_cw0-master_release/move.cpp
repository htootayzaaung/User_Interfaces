#include "move.h"

void Move::fire(Cave& c, string userCommand)
{
    string s = tail(userCommand); //Where is this tail coming from? "move.h"

    int newTomX = c.getTom()->getX(),  newTomY = c.getTom()->getY();

    if ((s[0] == 'w') && (s[1] == 'e') && (s[2] == 's') && (s[3] == 't'))                               //checks if precisely "move west" is entered
        newTomX--;
    else if  ((s[0] == 'n') && (s[1] == 'o') && (s[2] == 'r') && (s[3] == 't') && (s[4] == 'h'))        //checks if precisely "move south" is entered
        newTomY--;
    else if ((s[0] == 'e') && (s[1] == 'a') && (s[2] == 's') && (s[3] == 't'))                          //checks if precisely "move east" is entered
        newTomX++;
    else if ((s[0] == 's') && (s[1] == 'o') && (s[2] == 'u') && (s[3] == 't') && (s[4] == 'h'))         //checks if precisely "move south" is entered
        newTomY++;
    else
    {
        cerr << "tom can't \"" << s << "\"" << endl;
        return;
    }


    if (newTomX < 0 || newTomY < 0 || newTomX >= c.getHeight() ||newTomY >= c.getHeight())
    {
        cerr << "can't walk into the void" << endl;
        return;
    }
    else if ( c.getMap()[newTomX][newTomY] -> isBlocking() )
    {
        cerr << "something is blocking the way" << endl;
        return;
    }
    else if (newTomX != c.getTom()->getX() || newTomY != c.getTom()->getY())
    {
        c.getTom() -> setLocation (&c, newTomX, newTomY);
        cerr << "tom shuffles through the dank cave" << endl;
        return;
    }
}
