#include <iostream>
#include "help_functions.h"
using namespace std;
float value = 0.5;
float parameter = 1.0;
float stdev = 1.0;

int main() {

	float prob = Helpers::normpdf(value, parameter, stdev);
	cout << prob << endl;
	return 0;
}

