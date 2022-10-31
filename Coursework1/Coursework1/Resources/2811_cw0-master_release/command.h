#ifndef COMMAND_H
#define COMMAND_H

#include "cave.h"

#include <string>

using namespace std;

// superclass of all user commands.
class Command {

public:
    Command(string triggerWord) : trigger(triggerWord) {}       //Constructor

    virtual bool triggersOn (string userCommand)
    {
        string userTrigger = userCommand;
        int index = userCommand.find(' ');
        if (index > 0)
                userTrigger = userCommand.substr(0, userCommand.find(' '));
        return trigger.compare(userTrigger) == 0;
    }

    virtual void fire(Cave& c, string arguments) =0;

protected:
    string tail(string userCommand) {

        int pos = userCommand.find(' ');                //"pos" stores the index of the user command where its character equals to ' '
        if (pos >= 0)                                   //checks whether there is blank-space present
            return userCommand.substr(userCommand.find(' ')+1, userCommand.length()); //returns the string where the first word is removed.
        else
            return "";                                  //if there are no blank-spaces it returns the single "blank-space".
    }

private:
    string trigger;
};

#endif // COMMAND_H
