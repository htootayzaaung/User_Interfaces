#include <iostream>
#include <string>
using namespace std;

string tail(string uc);

int main()
{
	cout << ">";
	
	string userCommand;

	getline(cin, userCommand);

	int pos = userCommand.find(' ');

	cout << "1st blank-space index: " << pos << endl;

	cout << userCommand.substr(userCommand.find(' ') + 1, userCommand.length()) << endl;

	cout << endl << "************************" << endl;

	cout << "tail(userCommand): " << tail(userCommand) << endl;

	return 0;
}

string tail(string uc)
{
	int pos = uc.find(' ');
	if (pos >= 0)
	{
		return uc.substr(uc.find(' ') + 1, uc.length());
	}
	else
		return "";
}
