#include <iostream>
#include "date_.h"
#include "Product.h"
#include "OfficeSupplies.h"

using namespace std;

void main() {

	OfficeSupplies o("Pen", 1234, "red", 20, 11, 2018, 12);
	o.info();

	
	system("pause");
}