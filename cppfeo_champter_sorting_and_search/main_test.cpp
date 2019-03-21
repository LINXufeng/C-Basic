#include<iostream>
#include<cstdlib>
#include<ctime>
#define NEWLINE cout<<endl<<endl<<endl
#define TESTARRAY {54,86,11,6,77,9,2,1,5,44}
using namespace std;
void print_array(const int array[], const int size);
void selection_sort(int array[], const int size);
void bubble_sort(int a[], const int size);
void merge_sort(int a[], int from, int to);
void merge(int a[], int from, int mid, int to);
void merge_sort(int a[], int from, int to);
int binary_search(int a[], int from, int to, int value);
int main() {
	
	int test_array1[] = TESTARRAY;
	int test_array2[] = TESTARRAY;
	int test_array3[] = TESTARRAY;
	// testing selection sort
	cout << "Start testing selection sort" << endl;
	cout << "Before selection sort" << endl;
	print_array(test_array1, sizeof(test_array1) / sizeof(int));
	cout << "After selection sort" << endl;
	selection_sort(test_array1, sizeof(test_array1) / sizeof(int));
	print_array(test_array1, sizeof(test_array1) / sizeof(int));
	cout << "Finish testing selection sort" << endl;
	NEWLINE;
	// testing bubble sort
	cout << "Start testing bubble sort" << endl;
	cout << "Before bubble sort" << endl;
	print_array(test_array2, sizeof(test_array2) / sizeof(int));
	cout << "After bulle sort" << endl;
	bubble_sort(test_array2, sizeof(test_array2) / sizeof(int));
	print_array(test_array2, sizeof(test_array2) / sizeof(int));
	cout << "Finish testing bubble sort" << endl;
	NEWLINE;
	// testing merge sort
	cout << "Start testing merge sort" << endl;
	srand(time(0));
	const int SIZE = 20;
	int value[SIZE];
	for (int i = 0; i < SIZE; i++) {
		value[i] = rand() % 100;
	}
	print_array(value, SIZE);
	merge_sort(value, 0, SIZE - 1);
	print_array(value, SIZE);
	cout << "Finish testing merge sort" << endl;
	NEWLINE;

	return 0;
}
