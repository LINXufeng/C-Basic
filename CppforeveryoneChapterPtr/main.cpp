#include<iostream>
#include<string>
#include<cstdlib>
using namespace std;
string to_upper_case(const string low_case);
int main() {
	/*
		conert between C strings and string objects
		<cstdlib>
		int atoi(const char s[])
		atoi function converts a character array containing digits into its integer value
	*/
	/*
	char* month = "12";
	int m = atoi(month);
	string year = "2012";
	int y = atoi(year.c_str());
	//	the c_str member function yields a char* pointer from a string object
	string low_case = "low case";
	string upper_case = to_upper_case(low_case);
	cout << upper_case << endl;
	const int NAME_SIZE = 40;
	char name[NAME_SIZE];
	// the array hold string with a lenght of at most 39, because one character is required for
	// the null terminor 
	char* first = "Lam";
	char* last = "Huifung";
	strncpy(name, first, NAME_SIZE - 1);
	// you should add a space and last name
	int length = strlen(name);
	if (length < NAME_SIZE - 1) {
		strcat(name, " ");
		int n = NAME_SIZE - 2 - length;
		if (n > 0) { strncat(name, last, n); }
	}
	cout << name << endl;
	*/
	/*
	C string function

	strlen(s)	// return the length of s
	strcpy(t,s)		// copies the characters from s into t
	strncpy(t,s,n)		// copies at most n character from s into t
	strcat(t,s)		// append the character from s after the end of the character in t
	strncat(t,s,n)		// append at most n characters from s after the end of the character in t
	strcmp(s,t)		// return 0 if s and t have the same contents, a negative integer if s comes
					// before t in lexicographic order, a positive integer otherwise
					 
	*/
}