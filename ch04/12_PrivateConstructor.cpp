#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

class AAA
{
private:
	int num;

public:
	AAA():num(0){}
	AAA& CreateInitObj(int n) const
	{
		AAA* ptr = new AAA(n); // class �޸� �����Ҵ�
		return *ptr;
	}
	void ShowNum() const { cout << num << endl; }
	~AAA()	// �Ҹ���
	{
		cout << "���� �Ҹ���" << endl;
	}

private:
	AAA(int n) : num(n){}	//class �����Ҵ� ������ �߰�
};


int main(void)
{

	AAA base;
	//base.CreateInitObj(5); //�ȵ�
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;

	return 0;
}