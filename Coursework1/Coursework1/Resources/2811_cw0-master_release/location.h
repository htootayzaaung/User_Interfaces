#ifndef LOCATION_H
#define LOCATION_H


#include <vector>

#include "thing.h"

class Location
{
public:
    Location()
    {
        ++count;
    }
    ~Location()
    {
        for (auto t : things)
            delete(t);
        --count;
    }

    void add(Thing *t);
    void remove(Thing *t);
    char show();
    bool isBlocking();
    vector<Thing*>* getThings() { return &things; }
    //Location(Location &source);
    static int count; // a count of the number of locations allocated/deleted

private:

    vector<Thing*> things;

};



#endif // LOCATION_H
