#include "CSoPhuc.h"


CSoPhuc::CSoPhuc(double t, double a)
{
	thuc = t;
	ao = a;
}

CSoPhuc::CSoPhuc(double t)
{
	thuc = t;
	ao = 0;
}

CSoPhuc::CSoPhuc() {}

void CSoPhuc::Xuat()
{
	cout << thuc << "+(" << ao <<")i";
}

void CSoPhuc::operator=(CSoPhuc A)
{
	thuc = A.thuc;
	ao = A.ao;
}

CSoPhuc operator+(CSoPhuc A, CSoPhuc B)
{
	return CSoPhuc(A.thuc+B.thuc, A.ao+B.ao);
}

CSoPhuc operator-(CSoPhuc A, CSoPhuc B)
{
	return CSoPhuc(A.thuc - B.thuc, A.ao - B.ao);
}


CSoPhuc operator/(CSoPhuc A, CSoPhuc B)
{
	CSoPhuc kq;
	kq = A * CSoPhuc(B.thuc, -B.ao);
	kq.thuc /= B.thuc * B.thuc + B.ao * B.ao;
	kq.ao /= B.thuc * B.thuc + B.ao * B.ao;
	return kq;
}

CSoPhuc operator*(CSoPhuc A, CSoPhuc B)
{
	return CSoPhuc(A.thuc * B.thuc - A.ao * B.ao, A.thuc * B.ao + A.ao * B.thuc);
}

void CSoPhuc::operator+=(const CSoPhuc& A)
{
	*this = (*this) + A;
}

void CSoPhuc::operator-=(CSoPhuc A)
{
	*this = (*this) - A;
}

void CSoPhuc::operator*=(CSoPhuc A)
{
	*this = (*this) * A;
}

void CSoPhuc::operator/=(CSoPhuc A)
{

}

CSoPhuc& CSoPhuc::operator++()
{
	*this = (*this) + 1;
	return *this;
}

CSoPhuc& CSoPhuc::operator--()
{
	*this = (*this) - 1;
	return *this;
}
