#include "CDaThuc.h"


CDaThuc::CDaThuc()
{
	A = nullptr;
}

CDaThuc::CDaThuc(int nn, CDonThuc AA[])
{
	A = nullptr;
	A = new CDonThuc[nn];
	n = nn;
	for (int i = 0; i < n; i++)
		A[i] = AA[i];
	for(int i=0; i<n-1; i++)
		for (int j=i+1; j<n; j++)
			if (A[i].GetMu() == A[j].GetMu())
			{
				A[i] =A[i]+ A[j];
				A[j] = 0;
			}
	for (int i=0; i<n-1; i++)
		for (int j=i; j<n; j++)
			if (A[i].GetMu() < A[j].GetMu())
			{
				CDonThuc t = A[i];
				A[i] = A[j];
				A[j] = t;
			}
	while (A[n - 1].GetHeSo() == 0)
		n--;
}

CDaThuc::CDaThuc(CDonThuc donThuc)
{
	A = nullptr;
	A = new CDonThuc[1];
	n = 1;
	A[0] = donThuc;
}

void CDaThuc::Xuat()
{
	for (int i = 0; i < n; i++)
	{
		A[i].Xuat();
		cout << ' ';
	}
}

void CDaThuc::operator=(CDaThuc orther)
{
	A = nullptr;
	n = orther.n;
	A = new CDonThuc[n];
	for (int i = 0; i < n; i++)
		A[i] = orther.A[i];
}

CDaThuc operator+(CDaThuc &B, CDaThuc &C)
{
	/*CDaThuc kq;
	kq.n=0;
	kq.A = new CDonThuc[B.n + C.n + 1];
	for (int i = 0; i < B.n; i++)
		kq.A[(kq.n)++] = B.A[i];
	for (int i = 0; i < C.n; i++)
		kq.A[(kq.n)++] = C.A[i];
	return kq;
	return CDaThuc(1);*/
}

CDaThuc operator-(CDaThuc B, CDaThuc C)
{
	CDonThuc arr[100];
	int n = 0;
	for (int i = 0; i < B.n; i++)
		for (int j = 0; j < C.n; j++)
		{
			CDonThuc t = C.A[i] - B.A[j];
			if (!(t == 0))
				arr[n++] = t;
		}
	return CDaThuc(n, arr);
}

CDaThuc operator*(CDaThuc B, CDaThuc C)
{
	int n = 0;
	CDonThuc *arr;
	arr = new CDonThuc[B.n * C.n];
	for (int i = 0; i < B.n; i++)
		for (int j = 0; j < C.n; j++)
			arr[n++] = B.A[i] * C.A[j];
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if (arr[i] == arr[j])
			{
				arr[i] =arr[i] + arr[j];
				arr[j] = 0;
			}
	CDaThuc kq(n, arr);
	while (kq.A[n - 1] == 0)
		n--;
	return kq;
}

CDaThuc operator/(CDaThuc, CDaThuc)
{
	return CDaThuc(0);
}

void CDaThuc::operator+=(const CDaThuc&)
{

}

void CDaThuc::operator-=(CDaThuc)
{

}

void CDaThuc::operator*=(CDaThuc)
{

}

void CDaThuc::operator/=(CDaThuc)
{

}


CDaThuc::~CDaThuc()
{
	if(A!= nullptr)
		delete[]A;
}