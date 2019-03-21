#include<iostream>
#include<cmath>
#include<string>
#include<cstdlib>
#include<ctime>

using namespace std;
void cout_hello_world() {
	cout << "Proceding function void cout_hello_world()" << endl;
	cout << "\"Hello world\"" << endl;
	cout << endl << endl << endl;
}
void handler_roundoff_errors() {
	cout << "Proceding function void handler_roundoff_errors()" << endl;
	cout << "We set price 4.35" << endl;
	double price = 4.35;
	cout << "double price = 4.35; Price is " << price << endl;
	int cent = price * 100;
	cout << "int cent = price * 100; cent is " << cent <<" it is not as expected 435"<< endl;
	cout << "Now, we try cent = price*100 + 0.5; " << endl;
	price = 4.35;
	cent = price * 100 + 0.5;
	cout << "Now cent is " << price << endl;
	cout << endl << endl << endl;
}
void solve_equation_ax2_plus_bx_plus_c_equl_to_0() {
	cout << "Proceding function void solve_equation_ax2_plus_bx_plus_c_equl_to_0(double a, double b, double c)" << endl;
	double a, b, c;
	cout << "enter a for term ax2" << endl;
	cin >> a;
	cout << "enter b for term bx" << endl;
	cin >> b;
	cout << "enter c for term c" << endl;
	cin >> c;
	double delta = b*b - 4 * a*c;
	if (delta < 0) { cout << "The equation have no solution" << endl; }
	else if (delta == 0) { cout << "The equation have same solution " << (-b+sqrt(delta))/(2*a) << endl; }
	else { cout << "The equation have two solution x1 = " << (-b + sqrt(delta)) / (2 * a) 
			<< "    x2 = " << (-b - sqrt(delta)) / (2 * a)
			<< endl; }
	cout << endl << endl << endl;
}
void use_epsilon_handle_float_loss() {
	cout << "Proceding function void use_epsilon_handle_float_loss()" << endl;
	double epsilon;
	cout << "Please enter EPSILON you want" << endl;
	cin >> epsilon;
	double r = sqrt(2.0);
	if (fabs(r*r - 2) < epsilon) {
		cout << "sqrt(2.0) squared is approximately to 2" << endl;
	}
	cout << endl << endl << endl;
}
void Dangling_else_problem() {
	/*
	double shipping_charge = 5.00;
	if(country == "USA")
		if(state == "HI")
			shipping_charge = 10.00;
	else // pitfall
		shipping_charge = 20.00;
	// the else is combined with if(state == "HI")
	*/
}
int read_data_until_type_valid() {	
	cout << "Proceding function int read_data_until_type_valid()" << endl;
	int expect_a_int;
	cout << "Please enter a integer" << endl;
	cin >> expect_a_int;
	while (cin.fail()) {
		cout << "Please enter a valid integer" << endl;
		cin.clear();
		cin.ignore();
		cin >> expect_a_int;
	}
	cout << "return value is " << expect_a_int << endl << endl << endl;
	return expect_a_int;
}
char* convert_string_to_char_pointer() {
	cout << "Proceding function char* convert_string_to_char_pointer()" << endl;
	string input_string = "This is a test string";
	char* str = const_cast<char*>(input_string.c_str());
	// why you should define a temp to return 
	// because str point to temporary char*
	// the char* will be deallocate when the function was return 
	// so you should allocate new space and apply deep copy for temp to return char*
	char* temp = new char[strlen(str)];
	strcpy(temp, str);
	cout << "After converting, the string become char*" << endl;
	cout << str << endl << endl << endl;
	return temp;
}
void read_string_letter_by_letter() {
	cout << "Proceding function void read_string_letter_by_letter()" << endl;
	cout << "Please enter a string" << endl;
	string test_string;
	cin >> test_string;
	for (int i = 0; i < test_string.length(); ++i) {
		cout << test_string.substr(i, 1) << " ";
	}
	cout << endl << endl << endl;
}
void calculate_mean_and_average_until_press_enter() {
	cout << "Proceding function void calculate_mean_and_average_until_press_enter()" << endl;
	double input = 0, result = 0;
	int count = 0;
	cout << "Please enter a series of data" << endl;
	while (cin >> input && !cin.fail()) {
		result += input;
		count++;
	}
	cout << "total is " << result;
	if (count) {
		cout << " average is " << result / count << endl << endl << endl;
	}
}
int count_how_many_specific_letter() {
	cout << "Proceding function int count_how_many_specific_letter()" << endl;
	cout << "Please enter a string " << endl;
	string target_string;
	// you can use getline function to cin a string, 
	// general form      getline(cin,name_of_string)
	getline(cin,target_string);
	cout << "Please enter the notation or letter you want to cout" << endl;
	string target_notation_or_letter;
	getline(cin, target_notation_or_letter);
	int count = 0;
	for (int i = 0; i < target_string.length(); ++i) {
		if (target_notation_or_letter == target_string.substr(i, 1)) {
			count++;
		}
	}
	cout << "there are " << count << target_notation_or_letter << " IN " << target_string << endl << endl << endl;
	return count;
}
bool whether_a_letter_or_notation_in_a_string() {
	cout << "Proceding function bool whether_a_letter_or_notation_in_a_string()" << endl;
	cout << "Please enter a string " << endl;
	string target_string;
	getline(cin, target_string);
	cout << "Please enter the notation or letter you want to check" << endl;
	string target_notation_or_letter;
	getline(cin, target_notation_or_letter);
	int position = -1;
	bool found = false;
	for (int i = 0; i < target_string.length(); ++i) {
		if (target_notation_or_letter == target_string.substr(i, 1)) {
			cout << target_notation_or_letter << " was found at position " << i << endl;
			found = true;
		}
	}
	cout << endl << endl << endl;
	return found;
}
double get_largest_form_input() {
	cout << "Proceding function double get_largest_form_input()" << endl;
	double input;
	double largest = -9E10;
	cout << "Please enter number, use Q to end input " << endl;
	while (cin >> input && !cin.fail()) {
		if (input > largest) { largest = input; }
	}
	if (cin.fail()) { cin.clear(); cin.ignore(); }
	cout << endl << endl << endl;
	return largest;
}
double get_smallest_form_input() {
	cout << "Proceding function double get_smallest_form_input()" << endl;
	double input;
	double smallest = 9E10;
	cout << "Please enter number, use Q to end input " << endl;
	while (cin >> input && !cin.fail()) {
		if (input < smallest) { smallest = input; }
	}
	if (cin.fail()) { cin.clear(); cin.ignore();}
	cout << endl << endl << endl;
	return smallest;
}
int generate_random_integer() {
	cout << "Proceding function int generate_random_integer()" << endl;
	srand(unsigned(time(NULL)));
	int left_interval=0, right_interval = 1;
	cout << "Please enter left interval " << endl;
	cin >> left_interval;
	cout << "Please enter right interval " << endl;
	cin >> right_interval;
	cout << endl << endl << endl;
	return rand() % (right_interval - left_interval + 1)+left_interval;
}
double generate_random_float() {
	cout << "Proceding function double generate_random_float()" << endl;
	srand(unsigned(time(NULL)));
	int left_interval = 0, right_interval = 1;
	cout << "Please enter left interval " << endl;
	cin >> left_interval;
	cout << "Please enter right interval " << endl;
	cin >> right_interval;
	cout << endl << endl << endl;
	return ((rand() % 32767)/32767.0)*(right_interval-left_interval)+left_interval;
}
char* getline_to_get_char_array() {
	cout << "Proceding function char* getline_to_get_char_array()" << endl;
	char* char_array = new char[40];
	cout << "Please enter a string less than 40" << endl;
	// cin >> char_array never read space 
	// general form of cin.getline(name_of_char_array,size,end_char_flag)
	cin.getline(char_array, 40, '\n');
	cout << endl << endl << endl;
	return char_array;
}
double Monte_Carlo_Method_to_cal_pi() {
	cout << "Proceding function double Monte_Carlo_Method_to_cal_pi()" << endl;
	double number_of_tries = 10000;
	double test_x, test_y;
	double hits = 0;
	srand(unsigned(time(NULL)));
	for (int i = 0; i < number_of_tries; ++i) {
		test_x = rand()*1.0/RAND_MAX * 2 - 1;
		test_y = rand()*1.0/RAND_MAX * 2 - 1;
		if ((test_x*test_x + test_y*test_y) <= 1) { hits++; }
	}
	cout << endl << endl << endl;
	return 4.0*hits / number_of_tries;
}
void box_string() {
	cout << "Proceding function void box_string()" << endl;
	string original_string;
	cout << "please enter a string" << endl;
	getline(cin, original_string);
	int size = original_string.length();
	for (int i = 0; i < size + 2; ++i) {
		cout << "-";
	}
	cout << endl << "!";
	cout << original_string << "!" << endl;
	for (int i = 0; i < size + 2; ++i) {
		cout << "-";
	}
	cout << endl << endl << endl;
}
int read_int_within_range() {
	int left_interval, right_interval;
	cout << "Please enter left interval" << endl;
	cin >> left_interval;
	cout << "Please enter right interval" << endl;
	cin >> right_interval;
	int input;
	do {
		cout << "Enter a value between " << left_interval << " and " << right_interval << ":" << endl;
		cin >> input;
	} 
	while (input > right_interval || input < left_interval);
	cout << endl << endl << endl;
	return input;
}
// const reference execute a little bit faster

