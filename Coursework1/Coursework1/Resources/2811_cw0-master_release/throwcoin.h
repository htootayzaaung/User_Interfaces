
#ifndef THROWCOIN_H
#define THROWCOIN_H

#include "coin.h"
#include "command.h"
#include "mushroom.h"
#include "rock.h"
#include <iostream>

using namespace std;
class cave;

class Throw : public Command
{
    public:
        Throw() : Command("throw") {};                 //Constructor initialization-list with default argument "throw coin"

        void fire(Cave& c, string userCommand);
};

#endif // THROWCOIN_H
