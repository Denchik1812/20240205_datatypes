/*Пользователь вводит с клавиатуры время в секундах, про -
шедшее с начала дня.Вывести на экран текущее время в часах,
минутах и секундах.Посчитать, сколько часов, минут и секунд
осталось до полуночи.*/
#include <iostream>
#include <string>
using namespace std;
int main(int arc, char** argv) {
	int num;
	cout << "Enter your time in seconds" << endl;
	cin >> num;
	int num2 = 86400 - num;
	cout << "How much time is left before midnight: " << endl << num2 / 3600 << ":" << num2 % 3600 / 60 << ":" << num2 % 3600 % 60 % 60;
}