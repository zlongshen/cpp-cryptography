#include <iostream>

#include "sha256.h"
#include "sha384.h"
#include "sha512.h"

using namespace std;

int main()
{
	string userInput; string output;
	cout << "Enter string: " << endl;

	getline(cin, userInput);
	
	output = sha256(userInput);
	cout << "SHA256 hash of '" << userInput << "' is: " << endl;
	cout << output << endl;

	output = sha384(userInput);
	cout << "SHA384 hash of '" << userInput << "' is: " << endl;
	cout << output << endl;

	output = sha512(userInput);
	cout << "SHA512 hash of '" << userInput << "' is: " << endl;
	cout << output << endl;

	system("pause");
}