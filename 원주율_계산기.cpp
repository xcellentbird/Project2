#include <iostream>
#include <math.h>
constexpr auto pi = 3.141592;
using namespace std;

int main(void)
{
	int radius;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;

	double area = 2*pi*pow(radius,2);
	cout << "���� ���̴� " << area << "�Դϴ�.";

	return 0;
}