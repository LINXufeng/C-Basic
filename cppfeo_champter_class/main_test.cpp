#include"CashRegister.h"
using namespace std;
void display(CashRegister reg);
int main() {
	CashRegister register1;
	register1.clear();
	register1.add_item(1.95);
	display(register1);
	register1.add_item(0.95);
	display(register1);
	register1.add_item(2.50);
	display(register1);
	return 0;
}