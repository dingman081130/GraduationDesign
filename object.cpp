#include"object.h"

Object::Object(){
	type=-1;
	isVisited = false;
	isDrawed = false;
}

Object::~Object(){};

bool Object::isVisit(){
	return isVisited;
}
void Object::setVisit( bool b ){
	isVisited = b;
}
bool Object::isDraw(){
	return isDrawed;
}
void Object::setDraw( bool b ){
	isDrawed = b;
}

int Object::getType(){
	return type;
}

void Object::setType( int t ){ 
	type = t; 
}

char * Object::getTypeString( Object * obj ){
	switch( obj->getType() )
	{
		case 0: return "POINT";
		case 1: return "LINE";
		case 2: return "ANGLE";
		case 3: return "ARC";
		case 4: return "TRIANGLE";
		case 5: return "QUADRANGLE";
		case 6: return "CIRCLE";
		default:;
	}
	return "OTHER";
}