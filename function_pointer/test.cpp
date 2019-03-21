#include<iostream>
using namespace std;
double sum(const double a, const double b) {
	cout << a << "+" << b << "is";
	return a + b;
}
double abstrct(const double a, const double b) {
	cout << a << "x" << b << "is";
	if (a > b) return a - b;
	if (a < b) return b - a;
	return 0;
}

int main() {
	// you should learn how to define a function pointer array here 
	double(*FunctionPtr[2])(const double, const double) = { sum,abstrct };
	double a = 3, b = 2;
	cout << FunctionPtr[0](a, b);
	cout << FunctionPtr[1](a, b);
	return 0;
}