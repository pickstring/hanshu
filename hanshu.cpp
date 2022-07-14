#include<iostream>
#include<cstdlib>
#include "add.h"
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

int max(int a, int b) {
	return a > b ? a : b;
}

int min(int a, int b);

/// <summary>
/// 函数的分文件编写
/// 1、创建后缀名为.h的头文件
/// 2、创建后缀名为.cpp的原文件
/// 3、在头文件中写函数的声明
/// 4、在源文件中写函数的定义
/// </summary>
/// <returns></returns>


int main() {
	int a = 10, b = 20;
	swap(a, b);
	cout << a << b << endl;
	swap1(a, b);
	cout << a << b << endl;
	cout << min(a, b);
	add(a, b);
	return 0;
}

int min(int a, int b) {
	return a < b ? a : b;
}