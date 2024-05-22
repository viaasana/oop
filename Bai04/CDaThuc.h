#pragma once
#include"CDonThuc.h"


class CDaThuc
{
private:
	int n;
	CDonThuc* A;
public:
	CDaThuc();
	CDaThuc(int, CDonThuc[]);
	CDaThuc(CDonThuc);

	void Xuat();
	void operator=(CDaThuc);
	friend CDaThuc operator+(CDaThuc&, CDaThuc&);
	friend CDaThuc operator-(CDaThuc, CDaThuc);
	friend CDaThuc operator*(CDaThuc, CDaThuc);
	friend CDaThuc operator/(CDaThuc, CDaThuc);
	void operator+=(const CDaThuc&);
	void operator-=(CDaThuc);
	void operator*=(CDaThuc);
	void operator/=(CDaThuc);

	~CDaThuc();
};

