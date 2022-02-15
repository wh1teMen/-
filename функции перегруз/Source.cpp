// персональный шаблон C++
#include<iostream>
using namespace std;

int func(int num1,int num2) {
	cout << "Целые числа\n";
	return (num1 > num2 ? num1 : num2);
}
double func(double num1, double num2) {
	cout << "Дробные числа\n";
	return (num1 > num2 ? num1 : num2);
}

//Шаблонная функция
template<typename T1,typename T2> T1 maxFunc(T num1, T2 num2) {
	return num1 > num2 ? num1 : num2;
}
int main() {
	setlocale(LC_ALL, "ru");
	float n,m;
	cout << "введите число: ";
	cin >> n>>m;/*
	cout << func(n,m)<<endl;//cout<<(n>m?n:m)
	cout << func(5.5,9.5)<<endl;*/

	cout<<maxFunc(n, m);




	return 0;
}