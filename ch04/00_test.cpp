#include <stdio.h>
#include <iostream>

using namespace std;

/*Cass*/
class Ctime {
private:
	int hour;
	int min;
	int sec;

public:
	Ctime()
	{
		cout << "���� ����Ʈ ������" << endl;
	}
	Ctime(int ah, int am, int as) : hour(ah),min(am),sec(as) //������ ����
	{
		//hour = ah;
		//min = am;
		//sec = as;
	}
	/*ĸ��ȭ*/
	void setTime(int ah, int am, int as)
	{
		hour = ah;
		min = am;
		sec = as;
	}
	void getTime() const	//������ �� �ִ� ���ɼ��� ������ ����?
	{
		printf("����ð� : %d�� %d�� %d��\n", hour, min, sec);
	}

};

int main()
{

	Ctime t2(02, 59, 15);	//�����ڸ� �����, ��ä ������, ��ä�� ����� �Ű����� ���� ���� �׿��´� �����ڰ� ȣ��ȴ�.
	t2.getTime();

	//Ctime t;//class ��ü ������ ���ÿ� �����ڰ� ȣ��ȴ�.
	//
	//t.setTime(11, 22, 10);
	//t.getTime();

	return 0;

}