#pragma once
#include"object.h"
class Point;
class Line;
class Circle;
class Angle;

class Triangle:public Object{
public:
	static const int TRIANGLE = 0, RIGHT = 1, ACUTE = 2, OBTUSE = 3;
	static const int DENGY = 6, DENGB = 7, RDY = 8;	/*可累加*/
private:
	int typeR;
	Point * vertex1, * vertex2, * vertex3;	/*三顶点指针*/
	Line * side1, * side2, * side3;
	Angle * an1, * an2, * an3;
	Point * inCenter, * gCenter, * circumCenter, * orthCenter;	/*内心 重心 外接圆心 垂心*/

	Line * median1, * median2, * median3;	/*三条边上的中线*/
	Line * altitude1, * altitude2, * altitude3;	/*三条边上的高*/

	Circle * circumC, * inC;	/*外接圆 内切圆*/

public:
	Triangle( Point *, Point *, Point * );
	~Triangle();
	
	int getTypeR();
	void setTypeR( int );
	Point * getV( int );
	void setV( Point *, int );
	Line * getSide( int );
	void setSide( Line *, int );
	Angle * getAngle( int );
	void setAngle( Angle *, int );

	void setInCenter( Point * );
	void setGCenter( Point * );
	void setCircumCenter( Point * );
	void setOrthCenter( Point * );
	void setMedian( Line *, int );
	void setAltitude( Line *, int );
	void setCircumC( Circle * );
	void setInC( Circle * );

	bool isEqual( Triangle * );
	void print();
	virtual void printTKZ();
	virtual void prePrintTKZ();
};