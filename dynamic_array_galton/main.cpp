#include<iostream>
#include<time.h>
#include<cstdlib>
#include<iomanip>
#include<string>
using namespace std;

int main(){
	/*
		this is a galton ball game
	*/
	/*
	const int ROW = 10;
	const int COLUMN = 10;
	int** ArrayPtr = new int*[ROW];
	// initialize array 
	for (int i = 0; i < ROW; ++i) {
		ArrayPtr[i] = new int[i + 1];
		for (int j = 0; j < i + 1; ++j) {
			ArrayPtr[i][j] = 0;
		}
	}
	// display array
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << setw(4) << ArrayPtr[i][j] << " ";
		}
		cout << endl;
	}
	// Galton ball game start
	srand(unsigned(time(nullptr)));
	for (int i = 0; i < 1000; ++i) {
		ArrayPtr[0][0]++;
		int j = 0;
		for (int i = 1; i < ROW; ++i) {
			if (rand() % 2 == 0) {
				j++;
			}
			ArrayPtr[i][j]++;
		}
	}
	// display array
	for (int i = 0; i < ROW; ++i) {
		for (int j = 0; j < i + 1; ++j) {
			cout << setw(4) << ArrayPtr[i][j] << " ";
		}
		cout << endl;
	}
	// recycle memory
	for (int i = 0; i < ROW; ++i) {
		delete ArrayPtr[i];
		ArrayPtr[i] = nullptr;
	}
	delete ArrayPtr;
	ArrayPtr = nullptr;
	*/
	/*
		this is end of galton ball game
	*/
}