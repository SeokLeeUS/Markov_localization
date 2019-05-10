#ifndef HELP_FUNCTIONS_H
#define HELP_FUNCTIONS_H
#define _USE_MATH_DEFINES
#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;

class Helpers {
public:

	static const float STATIC_ONE_OVER_SQRT_2PI;


	static float normpdf(float x, float mu, float std) {
		return float((STATIC_ONE_OVER_SQRT_2PI / std) * exp(-0.5 * pow((x - mu) / std, 2)));
	}
};

const float Helpers::STATIC_ONE_OVER_SQRT_2PI = float(1 / sqrt(2 * M_PI));
#endif
