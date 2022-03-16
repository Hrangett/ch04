#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

class SimpleClass
{
private:
	int num1;
	int num2;
public:

	SimpleClass(int n1 = 0, int n2 = 2)
	{
		num1 = n1;
		num2 = n2;
	}

	void ShowData() const
	{
		cout << num1 << ' ' << num2 << endl;
	}

};

int main()
{

	SimpleClass sc1();			//함수 원형 선언

	SimpleClass mysc = sc1();	//객체선언
	mysc.ShowData();
	
	return 0;

}

SimpleClass sc1()
{
	SimpleClass sc(20, 30);
	return sc;
}