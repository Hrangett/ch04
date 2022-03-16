#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

class SinivelCap
{
public:
	void Take()const
	{
		cout << "�๰." << endl;
	}
};

class SneezeCap
{
public:
	void Take() const
	{
		cout << "��ä�Ⱑ �ܽ��ϴ�" << endl;
	}
};

class SnuffleCap
{
public:
	void Take() const
	{
		cout << "�ڰ� �� �ո��ϴ�." << endl;
	}
};

class ColdPatient
{
public:
	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
};

int main(void)
{
	SinivelCap scap;
	SneezeCap zcap;
	SnuffleCap ncap;

	ColdPatient sufferer;
	sufferer.TakeSinivelCap(scap);
	sufferer.TakeSneezeCap(zcap);
	sufferer.TakeSnuffleCap(ncap);

	return 0;

}