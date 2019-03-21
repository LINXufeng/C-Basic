#include"CashRegister.h"
CashRegister::CashRegister() {
	clear();
}
void display(CashRegister reg) {
	cout << reg.get_count() << " $" << fixed << setprecision(2) << reg.get_total() << endl;
}
void CashRegister::clear() {
	item_count = 0;
	total_price = 0;
}
void CashRegister::add_item(double price) {
	item_count++;
	total_price += price;
}
double CashRegister::get_total() const {
	return total_price;
}
int CashRegister::get_count() const {
	return item_count;
}
