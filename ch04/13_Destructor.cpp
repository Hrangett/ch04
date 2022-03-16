#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;

class Person
{
private:
	char* name;
	int age;

public:
	//문자열을 통해 인자를 전달, 상수화를 하여 사전에 변환될 여지를 차단
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;

	}
	
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이; " << age << endl;
	}

	~Person()
	{
		delete[]name;
		cout << "destructor..." << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);

	man1.ShowPersonInfo();
	man2.ShowPersonInfo();

	return 0;

}