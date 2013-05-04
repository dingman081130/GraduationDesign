#pragma once
#include"object.h"
class Point;
class Line;

class Angle:public Object{
private:
	double degree;
	Point * vertex1, * vertex2, * vertex3;
	Line * side1, * side2;
	Line * bisector;	/*Ω«∑÷œﬂ*/

public:
	Angle();
	Angle( Point *,Point *,Point * );

	~Angle();

	Line * getBisector();
	void setBisector( Line * );
	Point * getV( int );
	void setV( Point *, int );
	double getD();
	void setD( double );
	Line * getSide( int );
	void setSide( Line *, int );

	bool isEqual( Angle * );
	void print();
	virtual void printTKZ();
	virtual void prePrintTKZ();
};