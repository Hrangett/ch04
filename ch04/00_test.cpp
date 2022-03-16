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
		cout << "나는 디폴트 생성자" << endl;
	}
	Ctime(int ah, int am, int as) : hour(ah),min(am),sec(as) //밖으로 뺐다
	{
		//hour = ah;
		//min = am;
		//sec = as;
	}
	/*캡슐화*/
	void setTime(int ah, int am, int as)
	{
		hour = ah;
		min = am;
		sec = as;
	}
	void getTime() const	//변경할 수 있는 가능성을 사전에 차단?
	{
		printf("현재시간 : %d시 %d분 %d초\n", hour, min, sec);
	}

};

int main()
{

	Ctime t2(02, 59, 15);	//생성자를 만들고, 객채 생성시, 객채에 선언된 매개변수 수에 맞춰 그에맞는 생성자가 호출된다.
	t2.getTime();

	//Ctime t;//class 객체 생성과 동시에 생성자가 호출된다.
	//
	//t.setTime(11, 22, 10);
	//t.getTime();

	return 0;

}