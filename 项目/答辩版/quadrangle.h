#pragma once
#include"object.h"
class Point;

class Quadrangle:public Object{
public:
	static const int QUAD = 0, PARA = 1, RECT = 2, SQUA = 3;
	static const int RHOM = 4, LAD = 5, RLAD = 6, DYLAD = 7;
private:
	Point * vertex1,* vertex2,* vertex3,* vertex4;
	int typeR;
public:
	Quadrangle( Point *,Point *,Point *,Point * );
	~Quadrangle();

	Point * getV( int );

	void setTypeR( int );
	void print();
	virtual void printTKZ();
	virtual void prePrintTKZ();
	bool isEqual( Quadrangle * );
};