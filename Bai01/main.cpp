#include<iostream>
#include"CPhanSo.h"

using namespace std;

int main()
{
	CPhanSo A(1, 2), B(2, 3), kq;
	cout << "\nA= ";
	A.Xuat();
	cout << "\nB= ";
	B.Xuat();

	cout << "\nA + B = ";
	kq = A + B;

	cout << "\nA - B = ";
	kq = A - B;
	kq.Xuat();

	cout << "\nA * B = ";
	kq = A * B;
	kq.Xuat();

	cout << "\nA / B = ";
	kq = A / B;
	kq.Xuat();


	cout << "\nA += B\n";
	A += B;
	cout << "\nA= ";
	A.Xuat();

	cout << "\nA -= B \nA=";
	A -= B;
	A.Xuat();

	cout << "\nA *= B \nA=";
	A *= B;
	A.Xuat();

	cout << "\nA /= B \nA=";
	A /= B;
	A.Xuat();

	cout << "\n++A \nA=";
	++A;
	A.Xuat();

	cout << "\n--A \nA=";
	--A;
	A.Xuat();

	return 1;
}
