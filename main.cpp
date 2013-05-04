#include"point.h"
#include"line.h"
#include"arc.h"
#include"angle.h"
#include"triangle.h"
#include"quadrangle.h"
#include"tlist.h"
#include"relation.h"
#include"circle.h"
#include"random.h"
#include<iostream>
using namespace std;

/*查找在objectList是否有与obj相同的object，有则返回list中的object指针*/
/*static Object * getObjInL( Object * obj, List<Object *> * objList ){
	ListNode<Object *> * p = objList->getHead()->getNext();
	Object * t = obj; int type = t->getType();
	while( p != 0 ){
		if( type == p->getEntity()->getType() ){
			switch( type ){
				case 0: if( ((Point *)t)->isEqual( (( Point *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 1: if( ((Line *)t)->isEqual( (( Line *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 2: if( ((Angle *)t)->isEqual( (( Angle *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 3: if( ((Arc *)t)->isEqual( (( Arc *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 4: if( ((Triangle *)t)->isEqual( (( Triangle *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 5: if( ((Quadrangle *)t)->isEqual( (( Quadrangle *)p->getEntity() ) ) )
							return p->getEntity();break;
				case 6: if( ((Circle *)t)->isEqual( (( Circle *)p->getEntity() ) ) )
							return p->getEntity();break;
				default:;
			}
		}
		p = p->getNext();
	}
	return t;
}

static bool isObjInL( Object * obj, List<Object *> * objList ){
	if( obj == getObjInL( obj, objList ) )
		return false;
	return true;
}*/

void start(){
	cout << "\\documentclass{article}" << endl
			<< "\\usepackage{amsmath}" << endl
			<<	"\\usepackage{tikz,tkz-2d,tkz-base}" << endl
			<<	"\\usetikzlibrary{calc,intersections}" << endl
			<<	"\\usepackage[np,autolanguage]{numprint}"	<< endl
			<<	"\\begin{document}"	<< endl
			<<	"\\begin{tikzpicture}" << endl
			<<	"\\tkzInit" << endl << endl << endl;
}

void end(){
	cout << endl << endl << endl << "\\end{tikzpicture}" << endl
		<< "\\end{document}" << endl;
}

void main(){
	List<Object *> * objList = new List<Object *>();
	Point * A = new Point( "A" );
	Point * B = new Point( "B" );
	Line * AB = new Line( A, B, Line::SEGMENT );
	AB->setLength( 6.3 );
	
	objList->add( A );
	objList->add( B );
	objList->add( AB );
	
	start();
	objList->prePrint();
	objList->print();
	end();
 }