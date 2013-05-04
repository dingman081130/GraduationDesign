#pragma once

class Object{
public:
	static const int POINT = 0, LINE = 1, ANGLE = 2, ARC = 3;
	static const int TRIANGLE = 4, QUADRANGLE = 5, CIRCLE = 6;
public:
	int type;
	bool isVisited;	/*�����Ƿ�Ԥ����*/
	bool isDrawed;
public:
	Object();
	~Object();

	int getType();
	void setType( int );
	bool isVisit();
	void setVisit( bool );
	bool isDraw();
	void setDraw( bool );

	virtual bool isEqual( Object * ){ return false; };	/*��������*/
	virtual void print()=0;	/*��������*/
	virtual void printTKZ()=0;	/*��������*/
	virtual void prePrintTKZ()=0;

	static char * getTypeString( Object * );
};