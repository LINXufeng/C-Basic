#include<iostream>
#include<vector>
#include"const_and_f_definition.h"
using namespace std;
int main(){

	// BEGIN OF TEST FOR ARRAY

	/*
	int current_size = 0;
	double double_array[CAPACITY_OF_ARRAY] = { 0 };
	initialize_array(double_array, current_size);
	NEWLINE;
	displace_element(double_array, current_size);
	*/
	/*NEWLINE;
	double* dynamic_array = new double[current_size];
	copy_array_dynamically(current_size,dynamic_array,double_array);
	NEWLINE;
	displace_element(dynamic_array, current_size);
	delete dynamic_array;
	dynamic_array = nullptr;
	NEWLINE;
	int return_value_of_sum_of_array = sum_of_array(current_size, double_array);
	NEWLINE;
	int return_value_of_average_of_array = average_of_array(current_size, double_array);
	NEWLINE;
	int return_value_of_maximum = maximum_of_array(current_size,double_array);
	NEWLINE;
	int return_value_of_minimum = minimum_of_array(current_size,double_array);
	NEWLINE;
	bool exist = bool_linear_search(current_size,double_array);
	NEWLINE;
	int exist_position = position_linear_search(current_size,double_array);
	NEWLINE; 
	append_a_number(current_size, double_array);
	displace_element(double_array, current_size);
	NEWLINE;
	insert_a_number_at_particular_positon(current_size, double_array);
	displace_element(double_array, current_size);
	NEWLINE;
	remove_a_number(current_size, double_array);
	displace_element(double_array, current_size);
	NEWLINE;
	remove_a_positon_keep_original_sequence(current_size, double_array);
	displace_element(double_array, current_size);
	NEWLINE;
	swap_by_index(double_array, current_size);
	displace_element(double_array, current_size);
	NEWLINE;
	bool return_value_of_binary_search = binary_search(double_array, current_size);
	NEWLINE;

	END OF TEST FOR ARRAY

	*/

	/*
	BEGIN OF TEST FOR VECTOR
	*/
	//vector<double> value; // initialize a vector without element
	//vector<double> values(10); // initialize a vector with ten element
	vector<double> value = initialize_vector();
	NEWLINE;
	display_vector(value);
	NEWLINE;
	double sum = sum_of_vector(value);
	cout << "The return value of double sum_of_vector(vector<double> value) is " << sum << endl;
	NEWLINE;







	/*
	END OF TEST FOR VECTOR
	*/
	return 0;
}