#include"point.h"
#include"random.h"
#include<iostream>
using namespace std;

extern Random *genCM;

Coord::Coord( double x1, double y1 ){
	x = x1; y = y1;
}
Coord::~Coord(){}

Point::Point(char * label){
	this->label = label;
	type = Object::POINT;
	coord = 0;	/*无坐标*/
}

Point::~Point(){}

char * Point::getLabel(){
	return label;
}

void Point::setLabel(char * label){
	this->label = label;
}

void Point::setCoord( Coord * c ){
	coord = c;
}

void Point::print(){
	cout << label;
	if( coord != 0 )
		cout << "(" << coord->x << "," << coord->y << ") ";
	cout << " ";
}

bool Point::isEqual( Point * p ){
	if( strcmp( p->getLabel(), label ) == 0 )
		return true;
	return false;
}

void Point::prePrintTKZ(){
	if( !isVisited ){
		if( coord == 0 )
			coord =genCM->randCrdXY( -4.5, 4.5, -4.5, 4.5 );
		cout << "\\tkzPoint*";
		cout << "(" << coord->x << "," << coord->y << ")";
		cout << "{" << label << "}" << endl;
		isVisited = true;	/*已经定义*/
	}
}

void Point::printTKZ(){
	if( !isDrawed ){
		cout << "\\tkzDrawPoint[color=red](" << label << ")" << endl;
		isDrawed = true;
	}
}