#pragma once

class Point;
class Line;
class Arc;
class Angle;
class Circle;

class Relation{
public:
	static const int LLR = 0, LAnR = 1, LArR = 2, LCR = 3, LPR = 4, CCR = 5,ArArR = 6;
	static const int NUM = 64;
public:
	int type;
	bool isVisited;
	bool isDrawed;
public:
	Relation();
	~Relation();
	bool isVisit();
	void setVisit( bool );
	bool isDraw();
	void setDraw( bool );

	int getType();
	void setType( int );

	virtual void printTKZ()=0;
	virtual void prePrintTKZ()=0;

};
class NumRelation:public Relation{
public:
	static const int LLNum = 127, AnAnNum = 128;
public:
	double n;	/*比值*/
	int typeR;
public:
	NumRelation();
	~NumRelation();
	
	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	void setN( double );
	double getN();
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;

};

class LLNumRelation:public NumRelation{
public:
	Line * l1, * l2;
	int typeR;
public:
	LLNumRelation( Line *, Line *, double );
	~LLNumRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Line * getLine( int );
	void setLine( Line * , int );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class AnAnNumRelation:public NumRelation{
public:
	Angle * an1, * an2;
	int typeR;
public:
	AnAnNumRelation( Angle *, Angle * );
	~AnAnNumRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Angle * getAngle( int );
	void setAngle( Angle * , int );
	virtual void printTKZ(){};
	virtual void prePrintTKZ(  ){};
};

/*****线线*****/
class LLRelation:public Relation{
public:
	static const int LLInt = 7, LLPara = 8, LLOrth = 9, LLProl = 10;
public:
	Line * l1, * l2;
	int typeR;
public:
	LLRelation();
	~LLRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Line * getLine( int );
	void setLine( Line * , int );
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;
};
/*****线弧*****/
class LArRelation:public Relation{
public:
	static const int LArInt = 11, LArTg = 12;
public:
	Line * l;
	Arc * ar;
	int typeR;
public:
	LArRelation();
	~LArRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Line * getLine();
	Arc * getArc();

	void setLine( Line * );
	void setArc( Arc * );
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;
};
/*****弧弧*****/
class ArArRelation:public Relation{
public:
	static const int ArArInt = 13, ArArTg = 14;
	Arc * ar1, * ar2;
	int typeR;
public:

	ArArRelation();
	~ArArRelation();
	
	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Arc * getArc( int );
	void setArc( Arc * , int );
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;

};
/*****圆圆*****/
class CCRelation:public Relation{
public:
	static const int CCInt = 15, CCTg = 16;
	Circle * c1, * c2;
public:
	int typeR;
	CCRelation();
	~CCRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }
	
	Circle * getC( int );
	void setC( Circle * , int );
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;
};
/*****线圆*****/
class LCRelation:public Relation{
public:
	static const int LCInt = 13, LCTg = 14;
public:
	Line * l;
	Circle * c;
	int typeR;
public:
	LCRelation();
	~LCRelation();

	void setTypeR( int t ){ typeR = t; };
	int getTypeR(){ return typeR; }

	Line * getLine();
	Circle * getCircle();

	void setLine( Line * );
	void setCircle( Circle * );
	virtual void printTKZ()=0;
	virtual void prePrintTKZ(  )=0;
};
/******************************************************  线圆关系  ******************************************************************/
class LCRelationInt:public LCRelation{
public:
	Point * intP1, * intP2;
public:
	LCRelationInt( Line *, Circle *, Point *, Point * );
	~LCRelationInt();

	Point * getIntP( int );
	void setIntP( Point *, int );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class LCRelationTg:public LCRelation{
public:
	Point * tgP;
public:
	LCRelationTg( Line *, Circle *, Point * );
	~LCRelationTg();
	
	Point * getTgP();
	void setTgP( Point * );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};
/******************************************************  线弧关系  ******************************************************************/
class LArRelationInt:public LArRelation{
public:
	Point * intP1, * intP2;
public:
	LArRelationInt( Line *, Arc * );
	~LArRelationInt();

	Point * getIntP( int );
	void setIntP( Point *, int );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class LArRelationTg:public LArRelation{
public:
	Point * tgP1,* tgP2;
public:
	LArRelationTg( Line *, Arc * );
	~LArRelationTg();
	
	Point * getTgP( int );
	void setTgP( Point *, int );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};
/******************************************************  线线关系  ******************************************************************/
class LLRelationInt:public LLRelation{	/*线线相交关系*/
public:
	Point * intP;	/*交点*/
public:
	LLRelationInt( Line *, Line *, Point * );
	~LLRelationInt();
	Point * getIntP();
	void setIntP( Point * );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class LLRelationPara:public LLRelation{	/*线线平行关系*/
public:
	LLRelationPara( Line *, Line * );
	~LLRelationPara();
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class LLRelationOrth:public LLRelation{	/*线线垂直关系*/
public:
	Point * orthP;	/*垂足*/
public:
	LLRelationOrth( Line *, Line *, Point * );/*第一条是垂线 第二条是被垂线*/
	~LLRelationOrth();
	Point * getOrthP();
	void setOrthP( Point * );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class LLRelationProl:public LLRelation{	/*线线延长关系*/
public:
	LLRelationProl( Line *, Line * );
	~LLRelationProl();
	virtual void printTKZ(){};
	virtual void prePrintTKZ(  ){};
};
/******************************************************  弧弧关系  ******************************************************************/
class ArArRelationInt:public ArArRelation{
public:
	Point * intP1, * intP2;
public:
	ArArRelationInt( Arc *, Arc * );
	~ArArRelationInt();
	
	Point * getIntP( int );
	void setIntP( Point *, int );
	virtual void printTKZ(){};
	virtual void prePrintTKZ(  ){};
};
class ArArRelationTg:public ArArRelation{
public:
	Point * tgP;
public:
	ArArRelationTg( Arc *, Arc *, Point * );
	~ArArRelationTg();
	
	Point * getTgP();
	void setTgP( Point * );
	virtual void printTKZ(){};
	virtual void prePrintTKZ(  ){};
};
/******************************************************  圆圆关系  ******************************************************************/

class CCRelationInt:public CCRelation{
public:
	Point * intP1, * intP2;
public:
	CCRelationInt( Circle *, Circle *, Point *, Point * );
	~CCRelationInt();
	
	Point * getIntP( int );
	void setIntP( Point *, int );
	virtual void printTKZ();
	virtual void prePrintTKZ(  );
};

class CCRelationTg:public CCRelation{
public:
	Point * tgP;
public:
	CCRelationTg( Circle *, Circle *, Point * );
	~CCRelationTg();
	
	Point * getTgP();
	void setTgP( Point *);
	virtual void printTKZ(){};
	virtual void prePrintTKZ(  ){};
};