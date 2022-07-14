#include<iostream>
#include<cstdlib>
using namespace std;

void swap(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

void swap1(int &num1, int &num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

int main() {
	int a = 10, b = 20;
	swap(a, b);
	cout << a << b << endl;
	swap1(a, b);
	cout << a << b << endl;
	return 0;
}