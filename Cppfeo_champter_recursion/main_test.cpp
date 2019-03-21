#include<iostream>
#include<string>
#include<vector>
#define NEWLINE cout<<endl<<endl<<endl
using namespace std;
bool is_palindrome(string test);
bool loop_is_palindrome(string test);
vector<string> generate_permutation(string word);
int fib(int n);
int main(){
	string asdfghjklkjhgfdsa = "asdfghjklkjhgfdsa";
	string qazwsxedgresdfge = "qazwsxedgresdfge";
	cout << "Start testing function bool is_palindrome(string test)" << endl;
	cout << asdfghjklkjhgfdsa << boolalpha << " " << is_palindrome(asdfghjklkjhgfdsa) << endl;
	cout << qazwsxedgresdfge << boolalpha << " " << is_palindrome(qazwsxedgresdfge) << endl;
	cout << "Finish testing function bool is_palindrome(string test)" << endl;
	NEWLINE;

	cout << "Start testing function bool loop_is_palindrome(string test)" << endl;
	cout << asdfghjklkjhgfdsa << boolalpha << " " << loop_is_palindrome(asdfghjklkjhgfdsa) << endl;
	cout << qazwsxedgresdfge << boolalpha << " " << loop_is_palindrome(qazwsxedgresdfge) << endl;
	cout << "Finish testing function bool loop_is_palindrome(string test)" << endl;
	NEWLINE;
	/*
	TIPS:
	sometimes it is easier if you use recursive help function
	example:
	bool substring_is_palindrome(string s,int start, int end){
		if(start>=end){ return true; }
		if(s[start] == s[end]){
			return substring_is_palindrome(s,start+1,end-1);
		}
		else{
			return false;
		}
	}
	// you should supply a function to solve the whole problem
	// the user of your function should not have to know about 
	// the trick with the substring position. Simply call the 
	// helper function with positions that test the entire string
	bool is_palindrome(string s){
		return substring_is_palindrome(s,0,s.length()-1);
	}
	*/
	cout << "Start testing funvtion int fib(int n);" << endl;
	cout << fib(5);
	cout << "Finish testing funvtion int fib(int n);" << endl;
	NEWLINE;

	cout << "Start testing vector<string> generate_permutation(string word)" << endl;
	cout << "Enter a string: ";
	string input;
	getline(cin, input);
	vector<string> v = generate_permutation(input);
	cout << "The are " << v.size() << " permutations" << endl;
	for (int i = 0; i < v.size(); ++i) {
		cout << v[i] << '\t';
	}
	cout << endl;
	cout << "Finish testing vector<string> generate_permutation(string word)" << endl;
	NEWLINE;
	return 0;
}