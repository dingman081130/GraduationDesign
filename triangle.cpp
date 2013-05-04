#include"point.h"
#include"line.h"
#include"angle.h"
#include"circle.h"
#include"triangle.h"
#include<iostream>
using namespace std;

Triangle::Triangle( Point * p1, Point * p2, Point * p3 ){
	vertex1 = p1;vertex2 = p2;vertex3 = p3;
	inCenter = gCenter = circumCenter = orthCenter = 0;
	side1 = side2 = side3 = 0;
	an1 = an2 = an3 = 0;
	median1 = median2 = median3 = 0;
	altitude1 = altitude2 = altitude3 = 0;
	circumC = inC = 0;
	type = Object::TRIANGLE;
	typeR = Triangle::TRIANGLE;
}

Triangle::~Triangle(){}

int Triangle::getTypeR(){
	return typeR;
}
void Triangle::setTypeR( int t ){
	typeR = t;
}

Point * Triangle::getV( int n ){
	if( n == 1 ) return vertex1;
	if( n == 2 ) return vertex2;
	return vertex3;
}
void Triangle::setV( Point * p, int n ){
	if( n == 1 ) vertex1 = p;
	else if( n == 2 ) vertex2 = p;
	else vertex3 = p;
}

Line * Triangle::getSide( int n ){
	if( n == 1 ) return side1;
	if( n == 2 ) return side2;
	return side3;
}

void Triangle::setSide( Line * l, int n ){
	if( n == 1 ) side1 = l;
	else if( n == 2 ) side2 = l;
	else side3 = l;
}

Angle * Triangle::getAngle( int n ){
	if( n == 1 ) return an1;
	if( n == 2 ) return an2;
	return an3;
}

void Triangle::setAngle( Angle * an, int n ){
	if( n == 1 ) an1 = an;
	else if( n == 2 ) an2 = an;
	else an3 = an;
}

void Triangle::setInCenter( Point * p ){
	inCenter = p;
}
void Triangle::setGCenter( Point * p ){
	gCenter = p;
}
void Triangle::setCircumCenter( Point * p ){
	circumCenter = p;
}
void Triangle::setOrthCenter( Point * p ){
	orthCenter = p;
}
void Triangle::setMedian( Line * l, int n ){
	if( n == 1 ) median1 = l;
	else if( n == 2 ) median2 = l;
	else median3 = l;
}
void Triangle::setAltitude( Line * l, int n ){
	if( n == 1 ) altitude1 = l;
	else if( n == 2 ) altitude2 = l;
	else altitude3 = l;
}
void Triangle::setCircumC( Circle * c ){
	circumC = c;
}
void Triangle::setInC( Circle * c ){
	inC = c;
}

bool Triangle::isEqual( Triangle * tri ){
	if( strcmp( tri->getV(1)->getLabel(), vertex1->getLabel() ) == 0 &&
		strcmp( tri->getV(2)->getLabel(), vertex2->getLabel() ) == 0 && 
		strcmp( tri->getV(3)->getLabel(), vertex3->getLabel() ) == 0 )
		return true;
	if( strcmp( tri->getV(1)->getLabel(), vertex2->getLabel() ) == 0 &&
		strcmp( tri->getV(2)->getLabel(), vertex3->getLabel() ) == 0 && 
		strcmp( tri->getV(3)->getLabel(), vertex1->getLabel() ) == 0 )
		return true;
	if( strcmp( tri->getV(1)->getLabel(), vertex3->getLabel() ) == 0 &&
		strcmp( tri->getV(2)->getLabel(), vertex1->getLabel() ) == 0 && 
		strcmp( tri->getV(3)->getLabel(), vertex2->getLabel() ) == 0 )
		return true;
	return false;
}

void Triangle::print(){
	cout << "Triangle: ";
	if( vertex1 != 0 ) vertex1->print();
	if( vertex2 != 0 ) vertex2->print();
	if( vertex3 != 0 ) vertex3->print();
}

void Triangle::prePrintTKZ(){
	if( !isVisited ){
		vertex1->prePrintTKZ();
		vertex2->prePrintTKZ();
		vertex3->prePrintTKZ();
		isVisited = true;
	}
	if( typeR == Triangle::DENGB ){		/*µÈ±ß*/
		cout << "\\tkzTrEqui*(" << vertex1->getLabel() << "," 
			<<  vertex2->getLabel() << "){" << vertex3->getLabel() << "}" << endl;
	}else if( typeR == Triangle::RDY ){	/*µÈÑüÖ±½Ç*/
		cout << "\\tkzSquare*(" << vertex1->getLabel() << "," 
			<<  vertex2->getLabel() << "){" << vertex3->getLabel() << "}{NULL}" << endl;
	}else if( typeR == Triangle::DENGY ){
	}
	else ;
	if( median1 != 0 ){
		median1->setVisit( true );
	}
	if( median2 != 0 ){
		median2->setVisit( true );
	}
	if( median3 != 0 ){
		median3->setVisit( true );
	}
	if( altitude1 != 0 ){
		cout<< "\\tkzProjection*(" << vertex2->getLabel() << ","
			<< vertex3->getLabel() << ")(" << vertex1->getLabel()
			<< "/" << altitude1->getEndP(2)->getLabel() << ")" << endl;
		altitude1->getEndP(2)->setVisit( true );
	}
	if( altitude2 != 0 ){
		cout << "\\tkzProjection*(" << vertex1->getLabel() << ","
			<< vertex3->getLabel() << ")(" << vertex2->getLabel()
			<< "/" << altitude2->getEndP(2)->getLabel() << ")" << endl;
		altitude2->getEndP(2)->setVisit( true );
	}
	if( altitude3 != 0 ){
		cout << "\\tkzProjection*(" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << ")(" << vertex3->getLabel()
			<< "/" << altitude3->getEndP(2)->getLabel() << ")" << endl;
		altitude3->getEndP(2)->setVisit( true );
	}
	if( inCenter != 0 ){
		inCenter->setVisit( true );
		cout << "\\tkzInCenter*(" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< "){" << inCenter->getLabel() << "}" << endl;
	}
	if( gCenter != 0 ){
		gCenter->setVisit( true );
		cout << "\\tkzGravityCenter*(" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< "){" << gCenter->getLabel() << "}" << endl;
	}
}
void Triangle::printTKZ(){
	vertex1->printTKZ();
	vertex2->printTKZ();
	vertex3->printTKZ();
		
		
	if( median1 != 0 ){
		cout << "\\tkzMedian[color=blue](" << vertex2->getLabel() << ","
			<< vertex3->getLabel() << ")(" 
			<< vertex1->getLabel() << ")" << endl;
		median1->setDraw( true );
	}
	if( median2 != 0 ){;
		cout << "\\tkzMedian[color=blue](" << vertex1->getLabel() << ","
			<< vertex3->getLabel() << ")(" 
			<< vertex2->getLabel() << ")" << endl;
		median2->setDraw( true );
	}
	if( median3 != 0 ){
		cout << "\\tkzMedian[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << ")(" 
			<< vertex3->getLabel() << ")" << endl;
		median3->setDraw( true );
	}
	if( altitude1 != 0 ){
	/*	cout<< "\\tkzAltitude[color=blue](" << vertex2->getLabel() << ","
			<< vertex3->getLabel() << ")(" << vertex1->getLabel()
			<< "/" << altitude1->getEndP(2)->getLabel() << ")" << endl;
		altitude1->setDraw( true );
		altitude1->getEndP(2)->setDraw( true );*/
		cout << "\\tkzRightAngle[color=orange](" << vertex2->getLabel() << "/"
			<< altitude1->getEndP(2)->getLabel() << "/" 
			<< altitude1->getEndP(1)->getLabel() << ")" << endl;
	}
	if( altitude2 != 0 ){
	/*	cout << "\\tkzAltitude[color=blue](" << vertex1->getLabel() << ","
			<< vertex3->getLabel() << ")(" << vertex2->getLabel()
			<< "/" << altitude2->getEndP(2)->getLabel() << ")" << endl;
		altitude2->setDraw( true );
		altitude2->getEndP(2)->setDraw( true );*/
		cout << "\\tkzRightAngle[color=orange](" << vertex3->getLabel() << "/"
			<< altitude2->getEndP(2)->getLabel() << "/" 
			<< altitude2->getEndP(1)->getLabel() << ")" << endl;
	}
	if( altitude3 != 0 ){
	/*	cout << "\\tkzAltitude[color=blue](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << ")(" << vertex3->getLabel()
			<< "/" << altitude3->getEndP(2)->getLabel() << ")" << endl;
		altitude3->setDraw( true );
		altitude3->getEndP(2)->setDraw( true );*/
		cout << "\\tkzRightAngle[color=orange](" << vertex1->getLabel() << "/"
			<< altitude3->getEndP(2)->getLabel() << "/" 
			<< altitude3->getEndP(1)->getLabel() << ")" << endl;
	}
	if( inCenter != 0 ){
		cout << "\\tkzInCenter[color=red](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< "){" << inCenter->getLabel() << "}" << endl;
		inCenter->setDraw( true );
	}
	if( gCenter != 0 ){
		cout << "\\tkzGravityCenter[color=red](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< "){" << gCenter->getLabel() << "}" << endl;
		gCenter->setDraw( true );
	}
	if( circumCenter != 0 ){
		cout << "\\tkzCircumCenter[color=red](" << vertex1->getLabel() << "," << vertex2->getLabel() << "," << vertex3->getLabel()
			<< "){" << circumCenter->getLabel() << "}" << endl;
		circumCenter->setDraw( true );
	}
	if( orthCenter != 0 ){
			orthCenter->setVisit( true );
			cout << "\\tkzOrthoCenter[color=green](" << vertex1->getLabel() << ","
				<< vertex2->getLabel() << "," << vertex3->getLabel()
				<< "){" << orthCenter->getLabel() << "}" << endl;
		}
	if( circumC != 0 ){
		cout << "\\tkzCircumCircle[color=green](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< ")" << endl;
		circumC->setDraw( true );
	}
	if( inC != 0 ){
		cout << "\\tkzInCircle[color=green](" << vertex1->getLabel() << ","
			<< vertex2->getLabel() << "," << vertex3->getLabel()
			<< ")" << endl;
		inC->setDraw( true );
	}
}