#include "CDonThuc.h"


CDonThuc::CDonThuc(double t, int a)
{
	heSo = t;
	soMu = a;
}

CDonThuc::CDonThuc(double t)
{
	heSo = t;
	soMu = 0;
}

CDonThuc::CDonThuc() {}

void CDonThuc::Xuat()
{
	if (heSo < 0)
		cout << heSo << "x^" << soMu;
	else
		cout << '+'<<heSo << "x^" << soMu;
}

void CDonThuc::operator=(CDonThuc A)
{
	heSo = A.heSo;
	soMu = A.soMu;
}


CDonThuc operator/(CDonThuc A, CDonThuc B)
{
	if (B.heSo != 0)
		return CDonThuc(A.heSo / B.heSo, A.soMu - B.soMu);
	return 0;
}

CDonThuc operator*(CDonThuc A, CDonThuc B)
{
	return CDonThuc(A.heSo * B.heSo, A.soMu + B.soMu);
}



void CDonThuc::operator*=(CDonThuc A)
{
	*this = (*this) * A;
}

void CDonThuc::operator/=(CDonThuc A)
{
	*this = (*this) / A;
}

