#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
using namespace std;

class AAA
{
public:
	AAA()	// 생성자
	{
		cout << "empty object" << endl;
	}
	void ShowYourName()
	{
		cout << "I'm class AAA" << endl;
	}
};

class BBB
{
private:
	//참조연산자. 문법적으로는 참조할 변수가 없어 오류지만 class는 메모리에 올라가기 전이기에 설계는 가능!
	AAA& ref;
	const int& num;

public:
	BBB(AAA& r, const int& n)
		:ref(r), num(n)
	{
	}
	void ShowYourName()
	{
		ref.ShowYourName();
		cout << "and" << endl;
		cout << "I ref num " << num << endl;
	}
};

int main(void)
{
	AAA obj1;
	BBB obj2(obj1, 20);
	obj2.ShowYourName();

	return 0;
}