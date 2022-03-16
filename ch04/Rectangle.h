#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "02_Point.h"

class Rectangle
{
private:
	Point upleft;
	Point lowRight;

public:
	Rectangle(const int& x1, const int& y1, const int& x2, const int& y2);
	void ShowRecINfo() const;

};


#endif // !__RECTANGLE_H_

