#include<iostream>
#include<vector>
using namespace std;

vector<double> initialize_vector() {
	cout << "Proceeding function void initialize_vector(vector<double> vector_name)" << endl;
	int number_of_element = 0;
	cout << "Please enter the size of vector" << endl;
	cin >> number_of_element;
	vector<double> value;
	for (int i = 0; i < number_of_element; ++i) {
		cout << "Please enter number for element with index " << i << endl;
		double input;
		cin >> input;
		value.push_back(input);
	}	
	cout << "Finish function void initialize_vector(vector<double> vector_name)" << endl;
	return value;
}
void display_vector(vector<double> value) {
	cout << "Proceeding function void display_vector(vector<double> vector_name)" << endl;
	for (int i = 0; i < value.size(); ++i) {
		cout << value[i] << '\t';
	}
	cout << endl;
	cout << "Finish function void display_vector(vector<double> vector_name)" << endl;
}
double sum_of_vector(vector<double> value) {
	cout << "Proceeding function double sum_of_vector(vector<double> value)" << endl;
	double sum = 0;
	for (int i = 0; i < value.size(); ++i) {
		sum += value[i];
	}
	cout << "Finish function double sum_of_vector(vector<double> value)" << endl;
	return sum;
}
/* Copying: you can simply assign one vector to another vector
*	vector<int> square;
*	for(int i = 0; i < 5; ++i) { squares.push_back(i*i); }
*	vector<int> lucky_numbers;
*	lucky_numbers = squares;
* vectors are no difference from any other values in this regard, you can use return or
* other operator, and if you want to modify it inside a function, you have to use 
* reference parameter like other value type
*/
vector<double> find_match(vector<double> value) {
	vector<double> matched;
	for (int i = 0; i < value.size(); ++i) {
		if (value[i] > 0) { matched.push_back(value[i]); }
	}
	return matched;
}
void remove_element_simply_from_vector(vector<double> value) {
	//int last_pos = value.size() - 1;
	//value[pos] = value[last_pos];
	//value.pop_back();
}
void remove_element_without_changing_order(vector<double> value) {
	//for (int i = pos + 1; i < value.size(); ++i) {
	//	value[i - 1] = value[i];
	//}
	//value.pop_back();
}
void insert_element_to_vector(vector<double> value) {
	//int last_pos = value.size() - 1;
	//value.push_back(value[last_pos]);
	//for (int i = last_pos; i > pos; ++i) {
	//	value[i] = value[i - 1];
	//}
	//value[pos] = new_element;
}
