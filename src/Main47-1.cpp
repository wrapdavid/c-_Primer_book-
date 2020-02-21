//#include"Chapter6.h"
#include<iostream>


int fact(int val) {
	if (val == 0 || val == 1) {
		return 1;
	}
	else
	{
		return val * fact(val - 1);
	}
}
int func() {
	int n, ret = 1;
	std::cout << "please input a number" << std::endl;
	std::cin >> n;
	while (n > 1) ret *= n--;
	return ret;
}