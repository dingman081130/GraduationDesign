#pragma once
#include"object.h"
#include"tlist.h"
class Point;
class Line;
class Relation;

class Line:public Object{
public:
	static const int LINE = 1, SEGMENT = 2, RAY = 3;
	static const int KMAX = 1073741824;
private:
	int typeR;
	char * label;
	double k;	/*б��*/
	double length;
	
	Point * endP1, * endP2, * midP;	/*�е��Ϊ�߶�ӵ��*/
	Line * midOrthL;	/*�д���*/
	List<Point *> * psOnLList;
	List<Relation *> * relList;	/*��ϵ�б�*/

public:
	Line( Point *, Point *, char *, int );
	Line( Point *, Point *, int );
	Line( char *, int );
	~Line();

	int getTypeR();
	void setTypeR( int );
	char * getLabel();
	void setLabel( char * );
	Point * getEndP( int );
	void setEndP( Point *, int );
	Point * getMidP();
	void setMidP( Point * );
	Line * getMidOrthL();
	void setMidOrthL( Line * );
	double getLength();
	void setLength( double );

	void addPoint( Point * );
	void addRelation( Relation * );


	List<Relation *> * getRelationList();
	List<Point *> * getPsOnLList();

	bool isEqual( Line * l );
	void print();

	void printRelTKZ();
	void prePrintRelTKZ();
	void prePrintPsTKZ();
	void printPsTKZ();
	virtual void printTKZ();
	virtual void prePrintTKZ();
};