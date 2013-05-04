#include"circle.h"
#include"point.h"
#include"line.h"
#include"relation.h"
#include<iostream>
using namespace std;

Circle::Circle( char * lab ){
	label = lab;
	center = 0;
	diameter = 0;
	radius = 1;	/*初始值*/
	psOnCList = 0;
	relList = 0;
	type = Object::CIRCLE;
}
Circle::~Circle(){
	if( psOnCList != 0 )
		psOnCList->clear();
	delete psOnCList;
	if( relList != 0 )
		relList->clear();
	delete relList;
}

Point * Circle::getC(){
	return center;
}

void Circle::setC( Point * c ){
	center = c;
}

Line * Circle::getDiameter(){
	return diameter;
}

void Circle::setDiameter( Line * l ){
	diameter = l;
}

double Circle::getR(){
	return radius;
}

char * Circle::getLabel(){
	return label;
}

void Circle::setRadius( double r ){
	radius = r;
}

void Circle::setLabel( char * l ){
	label = l;
}
List<Point *> * Circle::getPsOnCList(){
	if( psOnCList == 0 )
		psOnCList = new List<Point *>();
	return psOnCList;
}
List<Relation *> * Circle::getRelList(){
	if( relList == 0 )
		relList = new List<Relation *>();
	return relList;
}

bool Circle::isEqual( Circle * c ){
	if( strcmp( label, c->getLabel() ) == 0 )
		return true;
	return false;
}

void Circle::addPoint( Point * p ){
	if( psOnCList == 0 )
		psOnCList = new List<Point *>();
	psOnCList->add( p );
}

void Circle::addRelation( Relation * r ){
	if( relList == 0 )
		relList = new List<Relation *>();
	relList->add( r );
}

void Circle::print(){
	cout << "Circle: ";
	if( label != 0 ) cout << label;
	cout << "center:";
	if( this->center != 0 ) this->center->print();
}

void Circle::prePrintTKZ(){
	if( !isVisited ){
		if( diameter != 0 ){
			diameter->prePrintTKZ(); diameter->setVisit( true );
			isVisited = true;
		}
		if( center == 0 ){	/*若无圆心则定义一个临时圆心*/
			center = new Point( "t" );
			center->prePrintTKZ();
		}
		isVisited = true;
		prePrintRelTKZ();
	}
}

void Circle::printTKZ(){
	if( isDrawed )
		return;
	if( diameter != 0 ){
		diameter->printTKZ(); diameter->setDraw( true );
		cout << "\\tkzCircle*[color=green](" << diameter->getEndP(1)->getLabel()
			<< "," << diameter->getEndP(2)->getLabel() << ")" << endl;
		isDrawed = true;
	}else if( center != 0 && !isDrawed ){
		if( !strcmp( center->getLabel(), "t" ) == 0 )	/*不为临时圆心*/
			center->printTKZ();
		if( radius > 0 )
			cout << "\\tkzCircleR[color=green](" << center->getLabel() << ","
				<< radius << "cm)" << endl;
		else if( psOnCList != 0  ){
			if( psOnCList->getHead() != 0 ){
				if( psOnCList->getHead()->getNext() != 0 )
					cout << "\\tkzCircle[color=green](" << center->getLabel() << ","
					<< ((Point *)(psOnCList->getHead()->getNext()->getEntity()))->getLabel() 
						<< ")" << endl;
			}
		}
		isDrawed = true;
	}
}
void Circle::prePrintRelTKZ(){
	ListNode<Relation *> * p = 0;
	if( relList != 0 && relList->getLength() != 0 ){
		p = relList->getHead()->getNext();
		while( p != 0 ){
			p->getEntity()->prePrintTKZ();
			p = p->getNext();
		}
	}
}
void Circle::printRelTKZ(){
	ListNode<Relation *> * p = 0;
	if( relList != 0 && relList->getLength() != 0 ){
		p = relList->getHead()->getNext();
		while( p != 0 ){
			p->getEntity()->printTKZ();
			p = p->getNext();
		}
	}
}

/*****************************static function*******************************/
double Circle::PI(){
	return 3.141592654;
}