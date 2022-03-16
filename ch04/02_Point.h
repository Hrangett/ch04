#ifndef __02_POINT_H_
#define __02_POINT_H_

class Point {
private:
	int x;
	int y;
public:
	Point(const int& xpos, const int& ypos);
	int GetX() const;
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);

};

#endif // !__02POINT_H_
