#include "quadrangle.h"
#include "line.h"
#include "point.h"
#include<iostream>
using namespace std;

Quadrangle::Quadrangle( Point * p1, Point * p2, Point * p3, Point * p4 ){
	vertex1=p1; vertex2=p2; vertex3=p3; vertex4=p4;
	type = Object::QUADRANGLE;
	typeR = Quadrangle::QUAD;
}

Quadrangle::~Quadrangle(){};
Point * Quadrangle::getV( int n ){
	if( n == 1 )
		return vertex1;
	if( n == 2 )
		return vertex2;
	if( n == 3 )
		return vertex3;
	return vertex4;
}

void Quadrangle::setTypeR( int t ){
	typeR = t;
}

void Quadrangle::print(){
	cout << "Quadrangle: ";
	if( vertex1 != 0 ) vertex1->print();
	if( vertex2 != 0 ) vertex2->print();
	if( vertex3 != 0 ) vertex3->print();
	if( vertex4 != 0 ) vertex4->print();
}

bool Quadrangle::isEqual( Quadrangle * quad ){
	if( strcmp( quad->getV(1)->getLabel(), vertex1->getLabel() ) == 0 &&
		strcmp( quad->getV(2)->getLabel(), vertex2->getLabel() ) == 0 && 
		strcmp( quad->getV(3)->getLabel(), vertex3->getLabel() ) == 0 &&
		strcmp( quad->getV(4)->getLabel(), vertex4->getLabel() ) == 0 )
		return true;
	if( strcmp( quad->getV(1)->getLabel(), vertex2->getLabel() ) == 0 &&
		strcmp( quad->getV(2)->getLabel(), vertex3->getLabel() ) == 0 && 
		strcmp( quad->getV(3)->getLabel(), vertex4->getLabel() ) == 0 &&
		strcmp( quad->getV(4)->getLabel(), vertex1->getLabel() ) == 0 )
		return true;
	if( strcmp( quad->getV(1)->getLabel(), vertex3->getLabel() ) == 0 &&
		strcmp( quad->getV(2)->getLabel(), vertex4->getLabel() ) == 0 && 
		strcmp( quad->getV(3)->getLabel(), vertex1->getLabel() ) == 0 &&
		strcmp( quad->getV(4)->getLabel(), vertex2->getLabel() ) == 0 )
		return true;
	if( strcmp( quad->getV(1)->getLabel(), vertex4->getLabel() ) == 0 &&
		strcmp( quad->getV(2)->getLabel(), vertex1->getLabel() ) == 0 && 
		strcmp( quad->getV(3)->getLabel(), vertex2->getLabel() ) == 0 &&
		strcmp( quad->getV(4)->getLabel(), vertex3->getLabel() ) == 0 )
		return true;
	return false;
}

void Quadrangle::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
/*	if( typeR == Quadrangle::QUAD )	/*普通四边形*
		cout << "\\tkzPolygon[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel() << ","
			<< vertex4->getLabel() << ")" << endl;
	else if( typeR == Quadrangle::RECT )	/*矩形*
		cout << "\\tkzSquare[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "){"	<< vertex3->getLabel() << "}{"
			<< vertex4->getLabel() << "}" << endl;
	else if( typeR == Quadrangle::PARA )	/*平行四边形*
		cout << "\\tkzLLgram[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel() <<"){"
			<< vertex4->getLabel() << "}" << endl;
	else if( typeR == Quadrangle::SQUA )	/*正方形*
		cout << "\\tkzSquare[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "){"	<< vertex3->getLabel() << "}{"
			<< vertex4->getLabel() << "}" << endl;
	else ;*/
	
	cout << "\\tkzPolygon[color=blue](" << vertex1->getLabel() << ","
		<< vertex2->getLabel() << "," << vertex3->getLabel() << ","
		<< vertex4->getLabel() << ")" << endl;
	vertex1->printTKZ();
	vertex2->printTKZ();
	vertex3->printTKZ();
	vertex4->printTKZ();
}
void Quadrangle::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	vertex1->prePrintTKZ();
	vertex2->prePrintTKZ();
	vertex3->prePrintTKZ();
	vertex4->prePrintTKZ();
	if( typeR == Quadrangle::QUAD )	/*普通四边形*/
	/*	cout << "\\tkzPolygon[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel() << ","
			<< vertex4->getLabel() << ")" << endl*/;
	else if( typeR == Quadrangle::RECT )	/*矩形*/
		;
	else if( typeR == Quadrangle::PARA )	/*平行四边形*/
		cout << "\\tkzLLgram*(" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel() <<"){"
			<< vertex4->getLabel() << "}" << endl;
	else if( typeR == Quadrangle::SQUA )	/*正方形*/
		cout << "\\tkzSquare*(" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "){"	<< vertex3->getLabel() << "}{"
			<< vertex4->getLabel() << "}" << endl;
	else ;
}