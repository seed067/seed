#include <iostream>
using namespace std; 

int main()

{
	setlocale(LC_ALL, "RU");
	srand(time(NULL));
	int rand_num = 1 + rand() % 15;
	bool stop = false;
	int user_input;

	do {
		cout << "input num, pls" << endl;
		cin >> user_input;
		if (user_input != rand_num)
			cout << "LLL" << endl;
		else
			stop = true;
	} while (!stop);
	cout << "oh, you win...";

	return 0;
}