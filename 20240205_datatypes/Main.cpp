/*Угадать оператора по коду:
Если МТС (916, 910)
Если Билайн (906, 902, 901, 905)
Если Мегафон (926, 925)
МГТС (499, 498)*/
#include <iostream>
#include <string>
using namespace std;
int main(int arc, char** argv) {
	int num;
	cout << "Enter code: " << endl;
	cin >> num;
	switch (num) {
	    case 916: case 910: cout << "MTS"; break;
	    case 906: case 902: case 901: case 905: cout << "BILAIN"; break;
	    case 926: case 925: cout << "MEGAFON"; break;
	    case 499: case 498: cout << "MGTS";
	} 
}