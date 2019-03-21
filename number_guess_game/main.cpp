#include<iostream>
#include<time.h>
#include<stdlib.h>

using namespace std;

int main() {
	int secret_number = -1;
	srand(unsigned(time(NULL)));
	secret_number = rand() % 101;
	bool correct = false;
	int guess_number;
	
	while (!correct) {
		while (!(cin >> guess_number))
		{
			cin.clear(); cin.ignore(); cout << "Please input a valid integer" << endl;
		}
		if (guess_number > secret_number) {
			cout << "too large" << endl;
		}
		if (guess_number < secret_number) {
			cout << "too small" << endl;
		}
		if (guess_number == secret_number) {
			cout << "correct" << endl;
			correct = true;
		}
	}
	return 0;
}
