/*������� ��������� �� ����:
���� ��� (916, 910)
���� ������ (906, 902, 901, 905)
���� ������� (926, 925)
���� (499, 498)*/
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