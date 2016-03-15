#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{
	bool error = 0;
	string line;

	fstream hosts("C:\\Windows\\System32\\drivers\\etc\\hosts", ios_base::app);  //change to C:\\Windows\\System32\\drivers\\etc\\hosts when you've stopped being an idiot


	fstream servers("servers.txt");



	if (hosts.is_open() && servers.is_open())
	{
		while (getline(servers, line))
		{
			hosts << line << '\n';
			cout << line << endl;
		}
		{
			cout << line << '\n';
		}
	}
	else if (!hosts.is_open())
	{
		cout << "Could not open the hosts file." << endl;
		cout << "Please make sure you have run this program as an administrator" << endl;
		error = 1;
	}
	else if (!servers.is_open())
	{
		cout << "Could not open the servers file." << endl;
		cout << "Please make sure the servers file is in the same directory as the .exe file" << endl;
		error = 1;
	}
	else
	{
		cout << "Error, can't open the file" << endl;
		error = 1;
		cout << "Error code 198237" << endl; //make it look like i know why the file won't open
	}


	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	cout << endl;
	if (!error)
		cout << "Welcome to the adfree world" << endl;


	system("PAUSE");
	return 0;

}
