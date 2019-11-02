#include <iostream>
#include <fstream>

using namespace std;

int main() {
	// Placeholder
	string str = "";

	ifstream input;

	input.open("graph1000.txt");
	if (!input)
	{
	    cerr << "Failed opening graph1000.txt" << endl;
	    exit(1);
	}

	int i = 0;
	while(i < 1000)
	{

		cout << "Index " << i + 1 << endl;
		// ignore(<number of characters to ignore until delimiter seen>, <delimiting character>)
	    input.ignore(5, ':');
	    input.ignore(1, ' ');

	    // The third argument ',' is delimiter.  When used, getline stops reading right there
	    getline(input, str, ',');
	    cout << "X: " << str << endl;
	    input.ignore(1);

	    getline(input, str);
	    cout << "Y: " << str << endl;
	    cout << endl;
	    
	    i++;
	}

	return 0;
}