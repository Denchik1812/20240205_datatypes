/*����� � ���� � ����������� ��� ���������
�������������� �������� ��������,
�������� �� ����� ����� �������������
��� ������������� ��������� "������" (>),
"������" (<), "�� ������" (>=),
"�� ������" (<=)?*/
#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(int arc, char** argv) {
	setlocale(LC_ALL, "RUS");
	int n;
	cout << "������� �����:" << endl;
	cin >> n;
	string n1 = to_string(n);
	string n2 = to_string(abs(n));
	if (n1.size() == n2.size()) {
		cout << "����� �� �������������";
	}
	else {
		cout << "����� �������������";
	}
}