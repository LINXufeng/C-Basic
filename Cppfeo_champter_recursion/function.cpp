#include<iostream>
#include<string>
#include<vector>
using namespace std;
bool is_palindrome(string test) {
	if (test.length() == 1 || test.length() == 0) { return true; }
	if (test.substr(0, 1) != test.substr(test.length() - 1, 1)) { return false; }
	else { return is_palindrome(test.substr(1, test.length() - 2));}
}
bool loop_is_palindrome(string test) {
	int start = 0;
	int end = test.length() - 1;
	while (start < end) {
		if (test[start] != test[end]) { return false; }
		else { ++start; --end; }
	}
	return true;
}
int fib(int n) {
	int f;
	if (n <= 2) { f = 1; }
	else { f = fib(n - 1) + fib(n - 2); }
	cout << "Existing fib: n = " << n << " return value" << f << endl;
	return f;
}
int ite_fib(int n) {
	if (n <= 2) { return 1; }
	int fold = 1;
	int fold2 = 2;
	int fnew;
	for (int i = 3; i <= n; ++i) {
		fnew = fold + fold2;
		fold2 = fold;
		fold = fnew;
	}
	return fnew;
}
vector<string> generate_permutation(string word) {
	vector<string> result;
	if (word.length() == 0) { result.push_back(word); return result; }
	// here we consider a shorter string without a specific char 
	// example "eat" we take "e" away , think about "at" first
	for (int i = 0; i < word.length(); ++i) {
		string shorter_word = word.substr(0, i) + word.substr(i + 1);
		vector<string> shorter_permutations = generate_permutation(shorter_word);
		for (int j = 0; j < shorter_permutations.size();++j) {
			// combine the single character and the permutation of shorter_permuatation
			string longer_word = word[i] + shorter_permutations[j];
			result.push_back(longer_word);
		}
	}
	return result;
}