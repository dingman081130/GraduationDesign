#include"angle.h"
#include"point.h"
#include"line.h"
#include<iostream>
using namespace std;

Angle::Angle(){
	vertex1 = vertex2 = vertex3 = 0;
	bisector = 0;
	degree = -30;	/*初始值*/
	type = Object::ANGLE;
}
Angle::Angle( Point * p1, Point * p2, Point * p3 ){
	bisector = 0;
	degree = -30;	/*初始值*/
	type = Object::ANGLE;
	vertex1 = p1;vertex2 = p2;vertex3 = p3;
}

Angle::~Angle(){}

Line * Angle::getBisector(){
	return bisector;
}
void Angle::setBisector( Line * bi ){
	bisector = bi;
}
Point * Angle::getV( int n ){
	if( n == 1 )
		return vertex1;
	if( n == 2 )
		return vertex2;
	else
		return vertex3;
}
void Angle::setV( Point * p, int n ){
	if( n == 1 )
		vertex1 = p;
	else if( n == 2 )
		vertex2 = p;
	else
		vertex3 = p;
}

double Angle::getD(){
	return degree;
}
void Angle::setD( double d ){
	degree = d;
}

Line * Angle::getSide( int n ){
	if( n == 1 )
		return side1;
	return side2;
}

void Angle::setSide( Line * l, int n ){
	if( n == 1 ) side1 = l;
	else side2 = l;
}

void Angle::print(){
	cout << "Angle: ";
	if( vertex1 != 0 ) vertex1->print();
	if( vertex2 != 0 ) vertex2->print();
	if( vertex3 != 0 ) vertex3->print();
}

bool Angle::isEqual( Angle * an ){
	if( strcmp( an->getV(1)->getLabel(), vertex1->getLabel() ) == 0 &&
		strcmp( an->getV(2)->getLabel(), vertex2->getLabel() ) == 0 &&
		strcmp( an->getV(3)->getLabel(), vertex3->getLabel() ) == 0 )
		return true;
	return false;
}

void Angle::prePrintTKZ(){
	if( !isVisited){
		vertex1->prePrintTKZ();
		vertex2->prePrintTKZ();
		vertex3->prePrintTKZ();
		if( degree >= 0 && degree <= 360 ){
			cout << "\\tkzMathLength(" << vertex2->getLabel() << ","
				<< vertex3->getLabel() << ")" << endl;
			cout << "\\tkzRotate*(" << vertex2->getLabel() <<","
				<< degree << ")( "<< vertex1->getLabel() << "/" 
				<< vertex3->getLabel() << ")" << endl;
			cout << "\\tkzVectorNormalised(" << vertex2->getLabel() << ","
				<< vertex3->getLabel() << "){" << vertex3->getLabel() 
				<< "}" << endl;
			cout << "\\tkzVectorKLinear[k=\\tkzmathLen*2.54/72](" << vertex2->getLabel()
				<< "," << vertex3->getLabel() << "," << vertex2->getLabel() << "){"
				<< vertex3->getLabel() << "}" << endl;
		/*	if( degree = 90 )
				cout << "\\tkzRightAngle(" << vertex1->getLabel() << "/"
					<< vertex2->getLabel() << "/" << vertex3->getLabel() << ")" << endl;*/

		}
		if( bisector != 0 ){
			bisector->setVisit( true );
			cout << "\\tkzBisector*[kl=0](" << vertex1->getLabel()
				<< "," << vertex2->getLabel() << ","
				<< vertex3->getLabel() << "){nonP}" << endl;
			cout << "\\tkzInterLL[color=red](" << vertex1->getLabel() << "," << vertex3->getLabel() << ")"
				<< "(" << vertex2->getLabel() << ",nonP)"
				<< "{" << bisector->getEndP(2)->getLabel() << "}"<< endl;
		}
		isVisited = true;
	}
}

void Angle::printTKZ(){
	if( isDrawed )
		return ;
	vertex1->printTKZ();
	vertex2->printTKZ();
	vertex3->printTKZ();
	if( bisector != 0 ){
		cout << "\\tkzBisector[kl=0,color=blue](" << vertex1->getLabel()
					<< "," << vertex2->getLabel() << ","
					<< vertex3->getLabel() << "){nonP}" << endl; 
		cout << "\\tkzInterLL[color=red](" << vertex1->getLabel() << "," << vertex3->getLabel() << ")"
			<< "(" << vertex2->getLabel() << ",nonP)" 
			<< "{" << bisector->getEndP(2)->getLabel() << "}"<< endl;

	}
	isDrawed = true;
}