//
// Do not change this file - but you might edit the arguments passed to main:
//  - Projects (spanner on right)
//  - Under "Build and Run", select "Run" (small green arrow)
//  - Edit "Command line arguments" (main panel)
//
// v1: initial release
// v2: removed std:: from some strings & allowed students to edit the Location class
//

#include <string>
#include <iostream>

#include "cave.h"
#include "test.cpp"

using namespace std;


int main(int argc, char** argv)
{

    int width = 8, height = 8; // provided code only works for these values(!)

    if (argc == 3) {                //if the argument-count equals 3: width = argv[1], height = argv[2]
        width  = stoi (argv[1]);
        height = stoi (argv[2]);
    }

    if (argc != 2) {    //if the argument-count does not equals 2, it creates a new object "c" from the class "Cave", which is defined in "cave.h"

        Cave c(width, height);

        string input;
        while (true) {

            c.show();

            cout << ">";
            getline(cin, input);                    //assigns the input from the prompt to the variable input.

            if (input.compare("exit") == 0)         //the program exits upon typing "exit"
                break;
            c.command(input);
        }
    }
    else test();        //at the end of the program flow a function "test" will be called from "test.cpp"
}

/*
"show()" and "command(input)" will be in "cave.h"
*/
