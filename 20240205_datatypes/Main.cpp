/*� ���������� �������� �����, ���� �� ������ ����.
����������� ������������� ����� �� ���� ���������.
������� ���������� ��������� �����.*/
#include <iostream>
#include <string>
using namespace std;
int main(int arc, char** argv) {
	setlocale(LC_ALL, "RUS");
	int n;
	int n1 = 0;
	do {
		if (n > n1) {
			n1 = n;
		};
		cin >> n;
	} while (n != 0);
	cout << n1;
}