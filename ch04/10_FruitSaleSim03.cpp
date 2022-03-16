#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>

using namespace std;

class FruitSeller
{
private:
	const int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	FruitSeller(int price, int num, int money)
		:APPLE_PRICE(price), numOfApples(num), myMoney(myMoney)
	{
		//class �� ������� �ʱ�ȭ
	}

	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;
		numOfApples = num;
		myMoney = money;

		return num;
	}

	void ShowSalesResult() const
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹż���: " << myMoney << endl << endl;
	}

};

class FruitByer
{
private:
	int myMoney;
	int numOfApples;

public:
	FruitByer(int money)
		:myMoney(money), numOfApples(0)
	{
	}

	void BuyApples(FruitSeller& seller, int money)
	{
		numOfApples += seller.SaleApples(money);
		myMoney -= money;
	}
	void ShowBuyResult() const
	{
		cout << "���� �ܾ� :" << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}

};

int main(void)
{

	FruitSeller seller(1000, 20, 0);
	FruitByer buyer(5000);
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSalesResult();

	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();

	return 0;

}