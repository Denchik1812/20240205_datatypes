/* Пусть пользователя просят выбрать из нескольких пунктов меню.Например:
Чтобы проверить ваш баланс, нажмите 1
Чтобы оплатить счет, нажмите 2
Чтобы узнать задолженность, нажмите 3
Чтобы позвать оператора, нажмите ноль или оставайтеь на линии
Задание  Написать функцию, возвращающую выбор пользователя в виде целого числа*/

#include <iostream>
#include <string>
using namespace std;

string Choice(int num) {
    string result;
    const int balance = 1;
    const int pay = 2;
    const int dolg = 3;
    const int op = 0;
    switch (num) {
    case balance:
        result = "balance";
        break;
    case pay:
        result = "pay";
        break;
    case dolg:
        result = "dolg";
        break;
    case op:
        result = "waiting an operator";
        break;
    }
    return result;
}
int main(int argc, char** argv) {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << Choice(int(num));
}