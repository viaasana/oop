#pragma once
class CPhanSo
{
private:
	int tu, mau;
public:
	CPhanSo();
	CPhanSo(int, int);
	CPhanSo(int);
	void Xuat();
	void operator=(CPhanSo);
	friend CPhanSo operator+(CPhanSo,  CPhanSo);
	friend CPhanSo operator-(CPhanSo, CPhanSo);
	friend CPhanSo operator*(CPhanSo, CPhanSo);
	friend CPhanSo operator/(CPhanSo, CPhanSo);
	void operator+=(const CPhanSo&);
	void operator-=(CPhanSo);
	void operator*=(CPhanSo);
	void operator/=(CPhanSo);
	CPhanSo& operator++();//tien to
	CPhanSo& operator--();//tien to
};

