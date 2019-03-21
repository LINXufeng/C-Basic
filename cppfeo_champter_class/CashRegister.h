#include<iostream>
#include<iomanip>
using namespace std;
class CashRegister
{
public:
	CashRegister();
	void clear();
	void add_item(double price);
	double get_total() const;
	int get_count() const;


private:
	int item_count;
	double total_price;
};
