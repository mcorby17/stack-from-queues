#include <iostream>
#include <string>
#include "stack.cpp"

using namespace std;

int main() {

	stack<string> s;
	char choice;
	string value;

	do {
		cout << "p - Push\nP - Pop\nE - Empty\nQ - Quit\n\n";
		cin >> choice;
		switch (choice) {
		case 'p':
			cout << "Enter a value: ";
			//cin.ignore();
			getline(cin, value);
			cin >> value;
			s.push(value);
			break;
		case 'P':
			cout << s.pop() << endl;
			break;
		case 'E':
			s.empty();
			break;
		case 'Q':
			continue;
		default:
			cout << "Enter a valid command\n";
		}
	} while (choice != 'Q');

	return 0;
}