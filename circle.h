#pragma once
#include"tlist.h"
#include"object.h"
class Point;
class Relation;
class Line;

class Circle:public Object{
private:
	Point * center;
	Line * diameter;
	char * label;
	double radius;
	List<Point *> * psOnCList;
	List<Relation *> * relList;
	
public:
	Circle( char * );
	~Circle();

	char * getLabel();
	double getR();

	Line * getDiameter();
	void setDiameter( Line * );

	Point * getC();
	void setC( Point * );

	void setRadius( double );
	void setLabel( char * );

	void addPoint( Point * );
	void addRelation( Relation * );
	
	List<Point *> * getPsOnCList();
	List<Relation *> * getRelList();

	bool isEqual( Circle * );
	void print();
	void printRelTKZ();
	void prePrintRelTKZ();
	virtual void printTKZ();
	virtual void prePrintTKZ();

	static double PI();
};