#include"CDaThuc.h"

int main()
{
	CDonThuc A1(2, 1), A2(3, 2), A3(4, 3), B1(4, 2), B2(5, 2), B3(4, 6);
	CDonThuc AA[3] = {A1, A2, A3}, BB[3] = {B1, B2, B3};
	CDaThuc A(3, AA), B(3, BB);

	cout << "A="; A.Xuat();
	cout << "\nB="; B.Xuat();
	A + B;
	/*cout << "\n\nA + B= ";
	( A + B).Xuat();

	cout << "\n\nA - B= ";
	(A - B).Xuat();*/

	

	return 1;
}