#include "CSoPhuc.h"

int main()
{
	CSoPhuc A(1, 2), B(3, 4);
	cout << "A="; A.Xuat();
	cout << "\nB="; B.Xuat();

	cout << "\n\nA + B= ";
	(A + B).Xuat();

	cout << "\n\nA - B= ";
	(A - B).Xuat();

	cout << "\n\nA * B= ";
	(A * B).Xuat();

	cout << "\n\nA / B= ";
	(A / B).Xuat();

	cout << "\n\nA += B\n";
	A += B;
	cout << "A= ";
	A.Xuat();

	cout << "\n\nA -= B \nA=";
	A -= B;
	A.Xuat();

	cout << "\n\nA *= B \nA=";
	A *= B;
	A.Xuat();

	cout << "\n\nA /= B \nA=";
	A /= B;
	A.Xuat();

	cout << "\n\n++A \nA=";
	++A;
	A.Xuat();

	cout << "\n\n--A \nA=";
	--A;
	A.Xuat();

	return 1;
}