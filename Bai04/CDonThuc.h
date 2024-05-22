#pragma once
#include<iostream>
using namespace std;

class CDonThuc
{
private:
	double heSo;
	int soMu;
public:
	CDonThuc();
	CDonThuc(double, int);
	CDonThuc(double);
	void Xuat();
	void operator=(CDonThuc);

	friend CDonThuc operator+(CDonThuc, CDonThuc);
	friend CDonThuc operator-(CDonThuc, CDonThuc);
	friend CDonThuc operator*(CDonThuc, CDonThuc);
	friend CDonThuc operator/(CDonThuc, CDonThuc);

	void operator*=(CDonThuc);
	void operator/=(CDonThuc);

	bool operator==(CDonThuc);

	double GetHeSo();
	int GetMu();

};