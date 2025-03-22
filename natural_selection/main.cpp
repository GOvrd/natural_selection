#include <iostream>
#include "Field.h"
#include "CCP.h"

int main() {
	Field<int> f(10, 10);
	f.print();
	CCP pointer(10);
	pointer++;
	pointer += 8;
	pointer++;

	return 0;
}