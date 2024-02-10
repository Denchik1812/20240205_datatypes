/*ѕользователь вводит с клавиатуры врем€ в секундах, про-
шедшее с начала рабочего дн€. ѕосчитать, сколько целых часов
ему осталось работать если рабочий день Ч 8 часов.*/
#include <iostream>
#include <string>
using namespace std;
int main(int arc, char** argv) {
	int num;
	cout << "Enter your time in seconds" << endl;
	cin >> num;
	int num2 = 8 * 60 * 60 - num;
	cout << "How much time is left: " << endl << num2 / 3600;
}