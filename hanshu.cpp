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
/// �����ķ��ļ���д
/// 1��������׺��Ϊ.h��ͷ�ļ�
/// 2��������׺��Ϊ.cpp��ԭ�ļ�
/// 3����ͷ�ļ���д����������
/// 4����Դ�ļ���д�����Ķ���
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