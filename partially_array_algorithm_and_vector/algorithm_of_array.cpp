#include<iostream>
#include<algorithm>
#include"const_and_f_definition.h"
using namespace std;
void initialize_array(double double_array[],int& current_size) {
	cout << "Proceeding function void initialize(double double_array[],int& current_size)" << endl;
	double input;
	while (cin >> input) {
		if (current_size < CAPACITY_OF_ARRAY) {
			double_array[current_size++] = input;
		}
	}
	if (cin.fail()) {
		cin.clear(); cin.ignore();
	}
	cout << "Returning from function void initialize(double double_array[],int& current_size)" << endl;
}
void displace_element(double double_array[],const int& current_size) {
	cout << "Strart displaying element of array" << endl;
	for (int i = 0; i < current_size; ++i) {
		cout << double_array[i] << '\t';
	}
	cout << endl;
	cout << "Finish dispalying elements of array" << endl;
}
void copy_array_dynamically(const int& size, double* dynamic_array,double source_array[]) {
	cout << "Start copying array from source array" << endl;
	for (int i = 0; i < size; ++i) {
		dynamic_array[i] = source_array[i];
	}
	cout << "Finishing copying array from cource array" << endl;
}
double sum_of_array(const int& size, double source_array[]) {
	cout << "Proceeding function double sum_of_array(const int& size, double source_array[])" << endl;
	double result = 0;
	for (int i = 0; i < size; ++i) {
		result += source_array[i];
	}
	cout << "Returning from function double sum_of_array(const int& size, double source_array[])" << endl;
	cout << "Returing value is " << result << endl;
	return result;
}
double sum_of_array_by_ptr(const int& size, double* const ptr_array) {
	double total = 0;
	double* temptr = ptr_array;
	for (int i = 0; i < size; ++i, ++temptr) { total += *temptr; }
}
double average_of_array(const int& size, double source_array[]) {
	cout << "Proceeding function double average_of_array(const int& size, double source_array[])" << endl;
	double result = 0;
	for (int i = 0; i < size; ++i) {
		result += source_array[i];
	}
	
	cout << "Returning from function double average_of_array(const int& size, double source_array[])" << endl;
	cout << "Return value is " << result / size << endl;
	return result / size;
}
double maximum_of_array(const int& size, double source_array[]) {
	cout << "Proceeding function double maximum_of_array(const int& size, double source_array[])" << endl;
	double maximum = -9E10;
	for (int i = 0; i < size; ++i) {
		if (source_array[i] > maximum) {
			maximum = source_array[i];
		}
	}
	cout << "Returning from function double maximum_of_array(const int& size, double source_array[])" << endl;
	cout << "Return value is " << maximum << endl;
	return maximum;
}
double minimum_of_array(const int& size, double source_array[]) {
	cout << "Proceeding function double minimum_of_array(const int& size, double source_array[])" << endl;
	double minimum = 9E10;
	for (int i = 0; i < size; ++i) {
		if (source_array[i] < minimum) {
			minimum = source_array[i];
		}
	}
	cout << "Returning from function double minimum_of_array(const int& size, double source_array[])" << endl;
	cout << "Return value is " << minimum << endl;
	return minimum;
}
bool bool_linear_search(const int& size, double source_array[]) {
	cout << "Proceeding function bool bool_linear_search(const int& size, double source_array[])" << endl;
	bool found = false;
	double target;
	cout << "Please enter target you want to search " << endl;
	cin >> target;
	for (int i = 0; i < size; ++i) {
		if (target == source_array[i]) {
			found = true; break;
		}
	}
	cout << "Returning from bool bool_linear_search(const int& size, double source_array[])" << endl;
	cout << "Return value is " << boolalpha << found << endl;
	return found;
}
int position_linear_search(const int& size, double source_array[]) {
	cout << "Proceeding function int position_linear_search(const int& size, double source_array[])" << endl;
	int position = -1;
	double target;
	cout << "Please enter target you want to search " << endl;
	cin >> target;
	for (int i = 0; i < size; ++i) {
		if (target == source_array[i]) {
			position = i; break;
		}
	}
	cout << "Returning from int position_linear_search(const int& size, double source_array[])" << endl;
	cout << "Return value is positon "  << position << endl;
	return position;
}
void append_a_number(int& current_size, double source_array[]) {
	cout << "Proceding function void append_a_number(int& current_size, double source_array[]) " << endl;
	double append_number;
	cout << "Please enter the number you want to append " << endl;
	cin >> append_number;
	if (current_size < CAPACITY_OF_ARRAY)
	{
		source_array[current_size++] = append_number;
		cout << "The number append successfully" << endl;
	}
	cout << "Finishing funtion void append_a_number(int& current_size, double source_array[])" << endl;
}
void insert_a_number_at_particular_positon(int& current_size, double source_array[]){
	cout << "Proceding function void insert_a_number_at_particular_positon(int& current_size, double source_array[]) " << endl;
	double insert_number;
	cout << "Please enter the number you want to insert " << endl;
	cin >> insert_number;
	int position;
	cout << "Please enter the position you want to insert " << endl;
	cin >> position;
	if (current_size < CAPACITY_OF_ARRAY) { ++current_size; }
	for (int i = current_size-1; i > position; --i) {
		source_array[i] = source_array[i - 1];
	}
	source_array[position] = insert_number;
	cout << "Finishing funtion void insert_a_number_at_particular_positon(int& current_size, double source_array[]) " << endl;
}
void remove_a_number(int& current_size, double source_array[]) {
	cout << "Proceding function void remove_a_number(int& current_size, double source_array[]) " << endl;
	double remove_number;
	cout << "Please enter the number you want to remove" << endl;
	cin >> remove_number;
	bool found = false;
	int remove_index = -1;
	for (int i = 0; i < current_size; ++i) {
		if (source_array[i] == remove_number) {
			remove_index = i;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "The number you want to remove is not found in array " << endl;
	}
	else {
		source_array[remove_index] = source_array[current_size - 1];
		source_array[current_size-1] = 0;
		current_size--;
	}
	cout << "Finishing funtion void remove_a_number(int& current_size, double source_array[]) " << endl;
}
void remove_a_positon_keep_original_sequence(int& current_size, double source_array[]) {
	cout << "Proceding function void remove_a_positon_keep_original_sequence(int& current_size, double source_array[]) " << endl;
	double remove_number;
	cout << "Please enter the number you want to remove" << endl;
	cin >> remove_number;
	bool found = false;
	int remove_index = -1;
	for (int i = 0; i < current_size; ++i) {
		if (source_array[i] == remove_number) {
			remove_index = i;
			found = true;
			break;
		}
	}
	if (!found) {
		cout << "The number you want to remove is not found in array " << endl;
	}
	else {
		for (int i = remove_index + 1; i < current_size; ++i) {
			source_array[i-1] = source_array[i];
		}
		source_array[current_size - 1] = 0;
		current_size--;
	}
	cout << "Finishing funtion void remove_a_positon_keep_original_sequence(int& current_size, double source_array[]) " << endl;
}
void swap_by_index(double source_array[], const int& size) {
	cout << "Please proceding function void swap_by_index(double source_array[], const int& size) " << endl;
	cout << "Please enter first index" << endl;
	int index_i = -1;
	while (index_i < 0 || index_i > size - 1) { cout << "Please enter valid first index" << endl; cin >> index_i; }
	cout << "Please enter second index" << endl;
	int index_j = -1;
	while (index_j < 0 || index_j > size - 1) { cout << "Please enter valid second index" << endl; cin >> index_j; }
	if (index_i == index_j) { cout << "Finish function void swap_by_index(double source_array[], const int& size)" << endl; return; }
	else {
		double temp = 0;
		temp = source_array[index_i];
		source_array[index_i] = source_array[index_j];
		source_array[index_j] = temp;
	}
	cout << "Finish function void swap_by_index(double source_array[], const int& size)" << endl;
}
// std library provide sort function for us 
// for array we have 
// sort(name_of_array,name_of_array + size);
// for vector we have 
// sort(name_of_vector.begin(),name_of_vector.end());
// you should remember #include<algorithm>
bool binary_search(double source_array[],const int& size) {
	sort(source_array, source_array + size);
	cout << "Proceeding function bool binary_search(double source_array[],const int& size)" << endl;
	cout << "Please enter the number you want to search " << endl;
	double target;
	cin >> target;
	bool found = false;
	int low = 0;
	int high = size - 1;
	int middle = 0;
	while (low <= high && !found) {
		middle = (low + high) / 2;
		if (source_array[middle] == target) { found = true; cout << "Target number is found" << endl; }
		else if (source_array[middle] > target) { high = middle-1; }
		else { low = middle+1; }
	}
	cout << "Finish function bool binary_search(double source_array[],const int& size)" << endl;
	return found;
}
// pass a 1D array to a function, do like void print(double values[], int size);
// pass a 2D array to a function, you should specify the number of column
// like   const int COLUMN = 3;		void print(const double table[][COLUMN], int rows);
