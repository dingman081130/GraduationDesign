#include"point.h"
#include"line.h"
#include"arc.h"
#include"angle.h"
#include"triangle.h"
#include"quadrangle.h"
#include"tlist.h"
#include"circle.h"
#include"random.h"
#include<iostream>
#include<cmath>
using namespace std;

extern List< Object * > * objList;
extern Random * genCM;
extern Coord * crd;
extern List<Point *> * polygon;

void init(){
	objList = new List<Object *>();
	genCM = new Random();
	crd = 0;
	polygon = 0;
}

Point * findPInL( char * p ){	/*在object objList中找点*/
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::POINT )
			if( strcmp( ((Point *)t->getEntity())->getLabel(), p ) == 0 )	/*找到p点*/
				return ((Point *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}
Line * findLInL( char * p1, char * p2 ){	/*在object objList中找线*/
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::LINE )
			if( strcmp( ((Line *)t->getEntity())->getEndP(1)->getLabel(), p1 ) == 0 &&
				strcmp( ((Line *)t->getEntity())->getEndP(2)->getLabel(), p2 ) == 0 )	/*找到p点*/
				return ((Line *)t->getEntity());
			else if( strcmp( ((Line *)t->getEntity())->getEndP(1)->getLabel(), p2 ) == 0 &&
					strcmp( ((Line *)t->getEntity())->getEndP(2)->getLabel(), p1 ) == 0 )	/*找到p点*/
					return ((Line *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}

Angle * findAnInL( char * p1, char * p2, char * p3 ){
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::ANGLE )
			if( strcmp( ((Angle *)t->getEntity())->getV(1)->getLabel(), p1 ) == 0 &&
				strcmp( ((Angle *)t->getEntity())->getV(2)->getLabel(), p2 ) == 0 &&
				strcmp( ((Angle *)t->getEntity())->getV(3)->getLabel(), p3 ) == 0 )
				return ((Angle *)t->getEntity());
			else if( strcmp( ((Angle *)t->getEntity())->getV(1)->getLabel(), p3 ) == 0 &&
				strcmp( ((Angle *)t->getEntity())->getV(2)->getLabel(), p2 ) == 0 &&
				strcmp( ((Angle *)t->getEntity())->getV(3)->getLabel(), p1 ) == 0 )
				return ((Angle *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}

Triangle * findTInL( char * p1, char * p2, char * p3 ){
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::TRIANGLE )
			if( strcmp( ((Triangle *)t->getEntity())->getV(1)->getLabel(), p1 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(2)->getLabel(), p2 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(3)->getLabel(), p3 ) == 0 )
				return ((Triangle *)t->getEntity());
			else if( strcmp( ((Triangle *)t->getEntity())->getV(1)->getLabel(), p2 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(2)->getLabel(), p3 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(3)->getLabel(), p1 ) == 0 )
				return ((Triangle *)t->getEntity());
			else if( strcmp( ((Triangle *)t->getEntity())->getV(1)->getLabel(), p3 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(2)->getLabel(), p1 ) == 0 &&
				strcmp( ((Triangle *)t->getEntity())->getV(3)->getLabel(), p2 ) == 0 )
				return ((Triangle *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}

Circle * findCInL( char * c ){	/*在object list中找圆*/
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::CIRCLE )
			if( strcmp( ((Circle *)t->getEntity())->getLabel(), c ) == 0 )	/*找到c点*/
				return ((Circle *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}

Quadrangle * findQInL( char * p1, char * p2, char * p3, char * p4 ){
	if( objList == 0 || objList->getHead() == 0 || objList->getHead()->getNext() == 0 )
		return 0;
	ListNode<Object *> * t = objList->getHead()->getNext();
	while( t != 0 ){
		if( t->getEntity()->getType() == Object::QUADRANGLE )
			if( strcmp( ((Quadrangle *)t->getEntity())->getV(1)->getLabel(), p1 ) == 0 &&
				strcmp( ((Quadrangle *)t->getEntity())->getV(2)->getLabel(), p2 ) == 0 &&
				strcmp( ((Quadrangle *)t->getEntity())->getV(3)->getLabel(), p3 ) == 0 &&
				strcmp( ((Quadrangle *)t->getEntity())->getV(4)->getLabel(), p4 ) == 0)
				return ((Quadrangle *)t->getEntity());
		t = t->getNext();
	}
	return 0;
}

Point * addPIntoL( char * p ){
	Point * p1 = 0;
	if( ( p1 = findPInL( p ) ) == 0 ){
		p1 = new Point( p );
		objList->add( p1 );
	}
	return p1;
}

Line * addLIntoL( char * p1, char * p2, char * style ){	/*加线要加点*/
	Line * l;Point * pnt1, * pnt2;
	if ((l=findLInL( p1, p2 )) == 0 ){
		pnt1 = addPIntoL( p1 );	/*将标号为p1的点添加到链表中*/
		pnt2 = addPIntoL( p2 );	/*将标号为p2的点添加到链表中*/
		if( strcmp( style, "直线" ) == 0 )
			l = new Line( pnt1, pnt2, Line::LINE );
		else if( strcmp( style, "射线" ) == 0 )
			l = new Line( pnt1, pnt2, Line::RAY );
		else
			l = new Line( pnt1, pnt2, Line::SEGMENT );
		objList->add( l );
	}
	return l;
}

Angle * addAnIntoL( char * p1, char * p2, char * p3, char * style ){
	Angle * an;Point * pnt1, * pnt2, * pnt3;
	Line * l1, * l2;
	if( ( an = findAnInL( p1, p2, p3 ) ) == 0 ){
		l1 = addLIntoL( p2, p1, "线段" );
		l2 = addLIntoL( p2, p3, "线段" );
		pnt1 = findPInL( p1 );pnt2 = findPInL( p2 );pnt3 = findPInL( p3 );
		an = new Angle( pnt1, pnt2, pnt3 );
		an->setSide( l1, 1 ); an->setSide( l2, 2 );
		objList->add( an );
	}
	if( strcmp( style, "直角" ) == 0 )
		an->setD( 90 );
	else if( strcmp( style, "锐角" ) == 0 )
		an->setD( 45 );
	else if( strcmp( style, "顿角" ) == 0 )
		an->setD( 135 );
	else ;
	return an;
}

Triangle * addTIntoL( char * p1, char * p2, char * p3, char * style ){
	Triangle * tri;
	Angle * an1, * an2, * an3;
	if( ( tri = findTInL( p1, p2, p3 ) ) == 0 ){
		an1 = addAnIntoL( p2, p1, p3, "角" );
		an2 = addAnIntoL( p3, p2, p1, "角" );
		an3 = addAnIntoL( p1, p3, p2, "角" );
		tri = new Triangle( an1->getV(2), an2->getV(2), an3->getV(2) );
		tri->setAngle( an1, 1 );tri->setAngle( an2, 2 );tri->setAngle( an3, 3 );
		tri->setSide( an1->getSide(1), 1 );tri->setSide( an1->getSide(2), 2 );tri->setSide( an3->getSide(1), 3 );
		objList->add( tri );
	}
	if( strcmp( style, "直角三角形" ) == 0 ){
		an1->setD(30);an2->setD(90);an3->setD(60);
		tri->setTypeR( Triangle::RIGHT );
	}
	else if( strcmp( style, "锐角三角形" ) == 0 ){
		an1->setD(50);an2->setD(60);an3->setD(70);
		tri->setTypeR( Triangle::ACUTE );
	}
	else if( strcmp( style, "钝角三角形" ) == 0 ){
		an1->setD(20);an2->setD(120);an3->setD(40);
		tri->setTypeR( Triangle::OBTUSE );
	}
	else if( strcmp( style, "等边三角形" ) == 0 ){
		tri->setTypeR( Triangle::DENGB);
	}
	else if( strcmp( style, "等腰直角三角形" ) == 0 ){
		tri->setTypeR( Triangle::RDY );
	}else if( strcmp( style, "直角等腰三角形" ) == 0 ){
		tri->setTypeR( Triangle::RDY );
	}else if( strcmp( style, "等腰三角形" ) == 0 ){
		tri->setTypeR( Triangle::DENGY );
	}
	return tri;
}

Quadrangle * addQIntoL( char * p1, char * p2, char * p3, char * p4, char * style ){
	Quadrangle * q;
	if( ( q = findQInL( p1, p2, p3, p4 ) ) == 0 ){
		Point * v1 = addPIntoL( p1 );
		Point * v2 = addPIntoL( p2 );
		Point * v3 = addPIntoL( p3 );
		Point * v4 = addPIntoL( p4 );
		q = new Quadrangle( v1, v2, v3, v4 );
		objList->add( q );
	}
	if( strcmp( style, "四边形" ) == 0 )
		q->setTypeR( Quadrangle::QUAD );
	else if( strcmp( style, "矩形" ) == 0 )
		q->setTypeR( Quadrangle::RECT );
	else if( strcmp( style, "正方形" ) == 0 )
		q->setTypeR( Quadrangle::SQUA );
	else if( strcmp( style, "平行四边形" ) == 0 )
		q->setTypeR( Quadrangle::PARA );
	else 
		q->setTypeR( Quadrangle::QUAD );
	return q;
}

Circle * addCIntoL( char * c ){	/*圆的标号 圆心的标号 圆的半径*/
	Circle * cir;
	if( ( cir = findCInL( c ) ) == 0 ){
		cir = new Circle( c );
		objList->add( cir );
	}
	return cir;
}

double sToD( char * s ){
	double d = 0;
	int i = 0, j = 1;
	bool flag = true;/*正号*/
	if(s[0] == '-'){
		flag = false;
		i++;
	}
	do
		d = 10*d + s[i++] - 48;/*进位*/
	while( s[i] != '.' && s[i] != '\0' );
	if( s[i++] == '.' )
		do
			d += (s[i++]-48)/(pow((double)10,(double)j++));
		while( s[i] != '\0' );
	return flag == true ? d : 0-d;
}

void tkzStart(){
	cout << "\\documentclass{article}" << endl
			<< "\\usepackage{amsmath}" << endl
			<<	"\\usepackage{tikz,tkz-2d,tkz-base}" << endl
			<<	"\\usetikzlibrary{calc,intersections}" << endl
			<<	"\\usepackage[np,autolanguage]{numprint}"	<< endl
			<<	"\\begin{document}"	<< endl
			<<	"\\begin{tikzpicture}" << endl
			<<	"\\tkzInit[xmin=-5,xmax=5,ymin=-5,ymax=5]" << endl
		/*	<<	"\\tkzX" << endl
			<<	"\\tkzY" << endl
			<<	"\\tkzGrid[sub]" << endl << endl*/
			<< "\\SetUpPoint[color=red]" << endl << endl << endl;
}

void tkzEnd(){
	cout << endl << endl << endl << "\\end{tikzpicture}" << endl
		<< "\\end{document}" << endl;
}