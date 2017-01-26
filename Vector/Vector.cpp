#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
	//Build Vector and sort
	std::vector<int>v = { 1, 6, 4, 2, 2, 6, 10, 6, 1 };
	sort(v.begin(), v.end());

	//set min to first element
	int min = v.front();
	//set max to last element
	int max = v.back();
	//holds previous number in vector
	int prev = max;
	int mode;
	//max count for given variable
	int maxCount = 0;
	//current count for given variable
	int currentCount = 0;

	//loop to determine to most repetitive val
	for (const auto a : v) {
		if (a == prev) {
			++currentCount;
			if (currentCount > maxCount) {
				maxCount = currentCount;
				mode = a;
			}
		}
		else {
			currentCount = 1;
		}
		prev = a;
	}
	//output variables
	std::cout << "Calculating Results for the " << v.size()<<" elements given. \n";
	std::cout << "Min: " << min <<"\n";
	std::cout << "Max: " << max <<"\n";
	std::cout << "Mode: " << mode <<"\n";;
	system("pause");
}