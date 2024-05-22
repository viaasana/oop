#include"CDonThuc.h"

int main()
{
	CDonThuc A(2, 3), B(4, 3);

	cout << "A="; A.Xuat();
	cout << "\nB="; B.Xuat();

	cout << "\n\nA * B= ";
	(A * B).Xuat();

	cout << "\n\nA / B= ";
	(A / B).Xuat();

	cout << "\n\nA *= B \nA=";
	A *= B;
	A.Xuat();

	cout << "\n\nA /= B \nA=";
	A /= B;
	A.Xuat();

	return 1;
}