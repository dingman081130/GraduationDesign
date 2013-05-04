#pragma once
#include"object.h"
#include"tlist.h"
class Point;
class Relation;

class Arc:public Object{
private:
	Point * endP1, * endP2, *center;
	double degree, radius;	/*-1为无效值*/
	List<Point *> * psOnArc;
	List<Relation *> * relList;
public:
	Arc( Point *, Point *, Point * );
	~Arc();
	double getD();
	void setD( double );
	double getR();
	void setR( double );

	Point * Arc::getC();
	Point * getEndP( int );

	List<Point *> * getPsOnArc();
	List<Relation *> * getRelList();

	bool isEqual( Arc * );
	void print();
	virtual void printTKZ(){  };
	virtual void prePrintTKZ(){};
};