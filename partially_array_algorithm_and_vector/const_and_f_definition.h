#define CAPACITY_OF_ARRAY 100
#define NEWLINE cout<<endl<<endl<<endl
#include<vector>
// when you #include<vector> you should add using namespace std; to solve C2605 vector undefined
using namespace std;
void initialize_array(double double_array[], int &current_size);
void displace_element(double double_array[], const int& current_size);
void copy_array_dynamically(const int& size,double* dynamic_array,double source_array[]);
double sum_of_array(const int& size, double source_array[]);
double average_of_array(const int& size, double source_array[]);
double maximum_of_array(const int& size, double source_array[]);
double minimum_of_array(const int& size, double source_array[]);
bool bool_linear_search(const int& size, double source_array[]);
int position_linear_search(const int& size, double source_array[]);
void append_a_number(int& current_size, double source_array[]);
void insert_a_number_at_particular_positon(int& current_size, double source_array[]);
void remove_a_number(int& current_size, double source_array[]);
void remove_a_positon_keep_original_sequence(int& current_size, double source_array[]);
void swap_by_index(double source_array[], const int& size);
bool binary_search(double source_array[], const int& size);
vector<double> initialize_vector();
void display_vector(vector<double> value);
double sum_of_vector(vector<double> value);
vector<double> find_match(vector<double> value);
