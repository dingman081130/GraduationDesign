#include"arc.h"
#include"point.h"
#include"relation.h"
Arc::Arc( Point * c, Point * p1, Point * p2 ){
	center = c; endP1 = p1; endP2  = p2;
	degree = radius = -1;	/*ÎÞÐ§Öµ*/
	type = Object::ARC;
}
Arc::~Arc(){}

double Arc::getD(){
	return degree; 
}
void Arc::setD( double d ){
	degree = d;
}
double Arc::getR(){ 
	return radius; 
}
void Arc::setR( double r ){
	radius = r;
}
Point * Arc::getC(){
	return center; 
}
Point * Arc::getEndP( int n ){
	if( n == 1 )
		return endP1;
	return endP2;
}
List<Point *> * Arc::getPsOnArc(){
	if( psOnArc == 0 )
		psOnArc = new List<Point *>();
	return psOnArc;
}

List<Relation *> * Arc::getRelList(){
	if( relList == 0 )
		relList = new List<Relation *>();
	return relList;
}

void Arc::print(){
	cout << "Arc: ";
	if( center != 0 ) center->print();
	if( endP1 != 0 ) endP1->print();
	if( endP2 != 0 ) endP2->print();
}

bool Arc::isEqual( Arc * ar ){
	if( strcmp( ar->getC()->getLabel(), center->getLabel() ) != 0 )
		return false;
	if( strcmp( ar->getEndP(1)->getLabel(), endP1->getLabel() ) == 0 && 
		strcmp( ar->getEndP(2)->getLabel(), endP2->getLabel() ) == 0 )
		return true;
	if( strcmp( ar->getEndP(1)->getLabel(), endP2->getLabel() ) == 0 && 
		strcmp( ar->getEndP(2)->getLabel(), endP1->getLabel() ) == 0 )
		return true;
	return false;
}