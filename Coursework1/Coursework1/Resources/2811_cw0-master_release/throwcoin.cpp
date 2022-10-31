#include "move.h"
#include "throwcoin.h"

void Throw::fire(Cave &c, string userCommand)
{
    string s = tail(userCommand);                   //removes "move" from userInput

    Location *location;

    int x = c.getTom()->getX();                     //retrieving the present coordinates of x and y
    int y = c.getTom()->getY();

    if (s == "coin south")                          //if the user enters "move coin south"
    {
        if (c.getMap()[x][y + 1] -> isBlocking())   //checks if the one postion towards south is blocked
        {
            cerr << "something is blocking the way" << endl;
        }
        else
        {
            location = c.getMap()[x][y + 1];        //retrieves a location one postition towards south, where the coin will be placed
            location ->add(new Coin());
        }
    }

    else if (s == "coin north")                     //if the user enters "move coin north"
    {
        if(c.getMap()[x][y - 1] -> isBlocking())
        {
            cerr << "something is blocking the way" << endl;
        }
        else
        {
            location = c.getMap()[x][y - 1];        //retrieves a location one postition towards north, where the coin will be placed
            location ->add(new Coin());
        }
    }

    else if (s == "coin east")                      //if the user enters "move coin east"
    {
        if(c.getMap()[x + 1][y] -> isBlocking())    //checks if the one postion towards east is blocked
        {
            cerr << "something is blocking the way" << endl;
        }
        else
        {
            location = c.getMap()[x + 1][y];        //retrieves a location one postition towards east, where the coin will be placed
            location ->add(new Coin());
        }
    }

    else if (s == "coin west")                      //if the user enters "move coin west"
    {
        if(c.getMap()[x - 1][y] -> isBlocking())    //checks if the one position towards west is blocked
        {
            cerr << "something is blocking the way" << endl;
        }
        else
        {
            location = c.getMap()[x - 1][y];        //retrieves a location one position towards west, where the coin will be placed
            location ->add(new Coin());
        }
    }

    else
    {
        cerr << "tom can't "" << s << """ << endl;  //ouputs a text "tom can't " + userCommand
    }
}
