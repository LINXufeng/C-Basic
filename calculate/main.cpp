#include<math.h>
#include<iostream>
#include <typeinfo>
using namespace std;
#define DEBUG cout<<result<<endl
double string_to_number(char char_input) {
	switch (char_input)
	{
	case '0':return 0;
	case '1':return 1;
	case '2':return 2;
	case '3':return 3;
	case '4':return 4;
	case '5':return 5;
	case '6':return 6;
	case '7':return 7;
	case '8':return 8;
	case '9':return 9;
	default: return 0;
	}
	
}
double Calculator(const char* Input) {	
	if (Input == nullptr) { return 0; }
	double result = string_to_number(*Input);cout << "After assign first value, value is "<<result<<endl; Input++;
	while (*Input != '=') {
		if (*Input == '+') {result += string_to_number(*(++Input)); Input++; }
		else if (*Input == '-') { result -= string_to_number(*(++Input)); Input++; }
		else if (*Input == '*') { result *= string_to_number(*(++Input)); Input++; }
		else if (*Input == '/') { result /= string_to_number(*(++Input)); Input++; }
		else { return result; }
	}
	return result;
}
int main() {
	char* Input = "1+2+3+4+5+6+7+8+9=";
	cout << "result of " << Input << " is " << Calculator(Input) << endl;
	return 0;
}