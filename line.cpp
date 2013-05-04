#include"line.h"
#include"point.h"
#include"relation.h"
#include<iostream>
using namespace std;

Line::Line( char * l, int t ){
	label = l;
	endP1 = endP2 = midP = 0;
	type = Object::LINE;
	typeR = t;
	relList = 0;
	psOnLList = 0;
	midOrthL = 0;
	length = -1;
}

Line::Line( Point * p1, Point * p2, int t ){
	endP1 = p1;
	endP2 = p2;
	midP = 0;
	label = 0;
	type = Object::LINE;
	typeR = t;
	relList = 0;
	psOnLList = 0;
	midOrthL = 0;
	length = -1;
}

Line::Line( Point * p1, Point * p2, char * l, int t ){
	endP1 = p1;
	endP2 = p2;
	label = l;
	midP = 0;
	type = Object::LINE;
	typeR = t;
	relList = 0;
	psOnLList = 0;
	midOrthL = 0;
	length = -1;
}

Line::~Line(){
	if( relList != 0 )
		relList->clear();
	delete relList;
	if( psOnLList != 0 )
		psOnLList->clear();
	delete psOnLList;
}

int Line::getTypeR(){
	return typeR;
}
void Line::setTypeR( int t ){
	typeR = t;
}

char * Line::getLabel(){
	return label;
}

void Line::setLabel( char * lab ){
	label = lab;
}

Point * Line::getEndP( int n ){
	if( n==1 )
		return endP1;
	else
		return endP2;
}
void Line::setEndP( Point * p, int n ){
	if( n==1 )
		endP1 = p;
	else
		endP2 = p;
}
Point * Line::getMidP(){
	return midP;
}
void Line::setMidP( Point * p ){
	midP = p;
}
Line * Line::getMidOrthL(){
	return midOrthL;
}
void Line::setMidOrthL( Line * l ){
	midOrthL = l;
}

double Line::getLength(){
	return length;
}
void Line::setLength( double l ){
	length = l;
}

List<Relation *> * Line::getRelationList(){
	if( relList == 0 )
		relList = new List<Relation *>();
	return relList;
}

List<Point *> * Line::getPsOnLList(){
	if( psOnLList == 0 )
		psOnLList = new List<Point *>();
	return psOnLList;
}

void Line::addPoint( Point * p ){
	if( psOnLList == 0 )
		psOnLList = new List<Point *>();
	psOnLList->add( p );
}

void Line::addRelation( Relation * r ){
	if( relList == 0 )
		relList = new List<Relation *>();
	relList->add( r );
}

bool Line::isEqual( Line * l ){
	if( l->getLabel() != 0 && label != 0 && 
		strcmp( l->getLabel(), label ) == 0  )
		return true;
	if( l->getEndP(1) == 0 || l->getEndP(2) == 0 ||
		endP1 == 0 || endP2 == 0 )
		return false;
	if( strcmp( l->getEndP(1)->getLabel(), endP1->getLabel() ) == 0 &&
		strcmp( l->getEndP(2)->getLabel(), endP2->getLabel() ) == 0 )
		return true;
	if( strcmp( l->getEndP(1)->getLabel(), endP2->getLabel() ) == 0 &&
		strcmp( l->getEndP(2)->getLabel(), endP1->getLabel() ) == 0 )
		return true;
	return false;
}

void Line::print(){
	cout << "Line: ";
	if( label != 0 ) cout << label;
	if( endP1 != 0 ) endP1->print();
	if( endP2 != 0 ) endP2->print();
}

void Line::printRelTKZ(){
	ListNode<Relation *> * p = 0;
	if( relList != 0 && relList->getLength() != 0 ){
		p = relList->getHead()->getNext();
		while( p != 0 ){
			p->getEntity()->printTKZ();
			p = p->getNext();
		}
	}
}
void Line::prePrintRelTKZ(){
	ListNode<Relation *> * p = 0;
	if( relList != 0 && relList->getLength() != 0 ){
		p = relList->getHead()->getNext();
		while( p != 0 ){
			p->getEntity()->prePrintTKZ();
			p = p->getNext();
		}
	}
}
void Line::printPsTKZ(){
	ListNode<Point *> * p = 0;
	if( psOnLList != 0 && psOnLList->getLength() != 0 ){
		p = psOnLList->getHead()->getNext();
		while( p != 0 ){
			cout << "\\tkzVectorKLinear[k=0.3,color=red](" << endP1->getLabel() <<","
				<< endP2->getLabel() << "," << endP1->getLabel() << "){" 
				<< p->getEntity()->getLabel() << "}" << endl;
			p = p->getNext();
		}
	}
}
void Line::prePrintPsTKZ(){
	ListNode<Point *> * p = 0;
	if( psOnLList != 0 && psOnLList->getLength() != 0 ){
		p = psOnLList->getHead()->getNext();
		while( p != 0 ){
			cout << "\\tkzVectorKLinear*[k=0.3,color=red](" << endP1->getLabel() <<","
				<< endP2->getLabel() << "," << endP1->getLabel() << "){" 
				<< p->getEntity()->getLabel() << "}" << endl;
			p = p->getNext();
		}
	}

}

void Line::prePrintTKZ(){
	if( !isVisited ){
		endP1->prePrintTKZ();
		endP2->prePrintTKZ();
		isVisited = true;
		
		if( length > 0 ){	/*归一化*/
			cout << "\\tkzVectorNormalised(" << endP1->getLabel() << ","
				<< endP2->getLabel() << "){" << endP2->getLabel() 
				<< "}" << endl;
			cout << "\\tkzVectorKLinear[k=" << length<< "](" << endP1->getLabel()	/*取倍数*/
				<< "," << endP2->getLabel() << "," << endP1->getLabel() << "){"
				<< endP2->getLabel() << "}" << endl;
		}

		if( midP != 0 ){
			midP->setVisit( true );
			cout << "\\tkzMidPoint*(" << endP1->getLabel()
				<< "," << endP2->getLabel() << "){" <<  midP->getLabel()
				<< "}" << endl;
		}
		if( midOrthL != 0 ){
			midOrthL->setVisit( true );
			cout << "\\tkzMediatorLine*[prefix=m1](" << endP1->getLabel()
				<< "," << endP2->getLabel() << ")" << endl;
			cout << "\\tkzGetPointxy(m1l){p}" << endl;
			cout << "\\tkzPoint*(\\px,\\py)" <<"{"<< midOrthL->getEndP(1)->getLabel()
				<< "}" << endl;
			midOrthL->getEndP(2)->setVisit( true );
		}
		prePrintRelTKZ();
		prePrintPsTKZ();
	}
}

void Line::printTKZ(){
	if( isDrawed )
		return ;
	endP1->printTKZ();
	endP2->printTKZ();
	if( typeR == Line::LINE ){
		cout << "\\tkzLine[color=blue]"  << "(" << endP1->getLabel() 
			<< "/" << endP2->getLabel() << ")" << endl;
	}else if( typeR == Line::SEGMENT ){
		cout << "\\tkzSegment[color=blue]"  << "(" << endP1->getLabel() 
			<< "/" << endP2->getLabel() << ")" << endl;
	}else {
		cout << "\\tkzLine[kl=0,color=blue]" << "(" << endP1->getLabel() 
			<< "/" << endP2->getLabel() << ")" << endl;
	}
	if( midP != 0 ){
			cout << "\\tkzMidPoint[color=red](" << endP1->getLabel()
			<< "," << endP2->getLabel() << "){" <<  midP->getLabel()
			<< "}" << endl;
			
	}
	if( midOrthL != 0 ){
		midOrthL->setDraw( true );
		cout << "\\tkzMediatorLine[prefix=m1,color=blue](" << endP1->getLabel()
			<< "," << endP2->getLabel() << ")" << endl;
		cout << "\\tkzGetPointxy(m1l){p}" << endl;
			cout << "\\tkzPoint[color=red](\\px,\\py)" <<"{"<< midOrthL->getEndP(1)->getLabel()
				<< "}" << endl;
		midOrthL->getEndP(2)->setDraw( true );
	}
	isDrawed = true;
	printRelTKZ();
	printPsTKZ();
}