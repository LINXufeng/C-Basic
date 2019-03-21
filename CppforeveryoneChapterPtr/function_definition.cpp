#include<iostream>
#include<string>
using namespace std;

string to_upper_case(const string low_case) {
	string result = low_case;
	for (int i = 0; i < low_case.length(); ++i) {
		result[i] = toupper(result[i]);
	}
	return result;
}
