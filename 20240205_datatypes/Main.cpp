/*Найти в сети и реализовать или придумать
самостоятельно алгоритм проверки,
является ли целое число отрицательным
без использования оператора "больше" (>),
"меньше" (<), "не меньше" (>=),
"не больше" (<=)?*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int arc, char** argv) {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "Введите число:" << endl;
	cin >> n;
	string n1 = to_string(n);
	string n2 = to_string(abs(n));
	if (n1.size() == n2.size()) {
		cout << "Число не отрицательное";
	}
	else {
		cout << "Число отрицательное";
	}
}