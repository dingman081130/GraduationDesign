#pragma once
#include"object.h"

class Coord{
public:
	double x, y;
public:
	Coord( double, double );
	~Coord();
};

class Point:public Object{
private:
	char * label;
	Coord * coord;

public:
	Point( char *);
	~Point();
	char * getLabel();
	void setLabel( char * );
	void setCoord( Coord * );

	bool isEqual( Point * );
	void print();
	virtual void printTKZ();
	virtual void prePrintTKZ();
};