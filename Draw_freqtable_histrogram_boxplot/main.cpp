#include<iostream>
using namespace std;

int main(){
	cout << "Please enter the size of data" << endl;
	int v_size_of_data_array = 0;
	cin >> v_size_of_data_array;

	double* ptr_to_data_array = new double[v_size_of_data_array];
	for (int i = 0; i < v_size_of_data_array; ++i) {
		*(ptr_to_data_array + i) = 0;
	}
	for (int i = 0; i < v_size_of_data_array; ++i) {
		cout << *(ptr_to_data_array + i) << '\t';
	}
	cout << endl;
	delete ptr_to_data_array;
	ptr_to_data_array = nullptr;

	int number_of_row;
	int number_of_column;
	cout << "Please enter the number of row for dynamic 2D array" << endl;
	cin >> number_of_row;
	cout << "Please enter the number of column for dynamic 2D array" << endl;
	cin >> number_of_column;
	double** ptr_to_2d_array = new double*[number_of_row];
	for (int i = 1; i <= number_of_row; ++i) {
		*(ptr_to_2d_array + i) = new double[i];
	}
	for (int i = 0; i < number_of_row; ++i) {
		for (int j = 0; j < i; ++j) {
			ptr_to_2d_array[i][j] = 0;
		}
	}
	for (int i = 0; i < number_of_row; ++i) {
		for (int j = 0; j < i; ++j) {
			cout << ptr_to_2d_array[i][j] <<'\t';
		}
		cout << endl;
	}
	
	return 0;	

}