#include "CPhanSo.h"
#include<iostream>

using namespace std;

CPhanSo::CPhanSo(int t, int m)
{
	tu = t;
	if (m == 0)
	{
		cout << "khong the gan mau bang 0, tu dong thay bang 1";
		mau = 1;
	}else
		mau = m;
}

CPhanSo::CPhanSo(int t)
{
	tu = t;
	mau = 1;
}

CPhanSo::CPhanSo(){}

void CPhanSo::Xuat()
{
	cout << tu << "/" << mau;
}

void CPhanSo::operator=(CPhanSo A)
{
	tu = A.tu;
	mau = A.mau;
}

CPhanSo operator+(CPhanSo A, CPhanSo B)
{
	return CPhanSo(A.tu * B.mau + B.tu * A.mau, A.mau * B.mau);
}

CPhanSo operator-(CPhanSo A, CPhanSo B)
{
	return CPhanSo(A.tu * B.mau - B.tu * A.mau, A.mau * B.mau);
}


CPhanSo operator/(CPhanSo A, CPhanSo B)
{
	if (B.tu == 0)
	{
		cout << "loi khi chia cho 0!";
		return 0;
	}

	return CPhanSo(A.tu * B.mau, A.mau * B.tu);
}

CPhanSo operator*(CPhanSo A, CPhanSo B)
{
	return CPhanSo(A.tu * B.tu, A.mau * B.mau);
}

void CPhanSo::operator+=(const CPhanSo& A)
{
	*this = (*this) + A;
}

void CPhanSo::operator-=(CPhanSo A)
{
	*this = (*this) - A;
}

void CPhanSo::operator*=(CPhanSo A)
{
	*this = (*this) * A;
}

void CPhanSo::operator/=(CPhanSo A)
{
	if(A.tu!=0)
		*this = *this / A;
	else
		cout << "Khong th chia cho 0";
}

CPhanSo& CPhanSo::operator++()
{
	*this = (*this) + 1;
	return *this;
}

CPhanSo& CPhanSo::operator--()
{
	*this = (*this) - 1;
	return *this;
}
