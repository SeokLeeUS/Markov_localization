#include <algorithm>
#include <iostream>
#include <vector>
#include "helpers.h"

using namespace std;

float control_stdev = 1.0f;
float movement_per_timestep = 1.0f;
int map_size = 25;

vector <float> landmark_positions{ 5,10,12,20 };
vector <float> pseudo_range_estimator(vector<float> landmark_positions, float pseudo_position);

int main() {

	for (int i = 0; i < map_size; ++i) {
		float pseudo_position = float(i);
		vector<float> pseudo_ranges = pseudo_range_estimator(landmark_positions, pseudo_position);

		if (pseudo_ranges.size() > 0) {
			
			for (size_t s = 0; s < pseudo_ranges.size(); ++s) {
				cout << "x:" << i << "\t" << pseudo_ranges[s] << endl;
			}
			cout << "--------------------" << endl;
			
		}
		
	}
	return 0;
}

vector<float> pseudo_range_estimator(vector<float> landmark_positions, float pseudo_position) {

	vector<float> pseudo_ranges;
	float temp;
	unsigned int j = 0;
	//int i = 0;
	while (j < landmark_positions.size()) {

		temp = float(landmark_positions[j] - pseudo_position);

		if (temp <= 0){
			j++;
		}
		else {
		
			//pseudo_ranges[i] = temp;
			pseudo_ranges.push_back(temp);
			//i++;
			j++;
		}


		}

	sort(pseudo_ranges.begin(), pseudo_ranges.end());

	return pseudo_ranges;
	}




