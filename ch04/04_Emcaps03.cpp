#include <iostream>
using namespace std;

class SnivelCap
{
public:
	void Take()const { cout << "콧물용" << endl; }
};

class SneezeCap
{
public:
	void Take()const { cout << "재채기용" << endl; }
};

class SnuffleCap
{
public:
	void Take()const { cout << "코막힘용" << endl; }
};

class CONTAC600
{
private:
	SnivelCap sin;
	SneezeCap sne;
	SnuffleCap snu;

public:
	void Take() const
	{
		sin.Take();
		sne.Take();
		snu.Take();
	}
};

class ColdPatient
{
public:
	void TakeCONTAC600(const CONTAC600& cap)const { cap.Take(); }

};

int main(void)
{

	CONTAC600 cap;
	ColdPatient sufferer;
	sufferer.TakeCONTAC600(cap);

	return 0;

}