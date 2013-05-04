#include"random.h"
#include"point.h"
#include"ctime"
#include"cstdlib"
using namespace std;

Random::Random(){
	time_t t; 
	srand((unsigned) time(&t)); 
}
Random::~Random(){}

double Random::randDbl( double s=-5, double e=5 ){
	return s + ( e - s ) * rand() / ( RAND_MAX + 1.0 );
}
Coord * Random::randCrdXY( double x1=-5, double x2=5, double y1=-5, double y2=5 ){
	double x = randDbl( x1, x2 );
	double y = randDbl( y1, y2 );
	return new Coord( x, y );
};
Coord * Random::randCrdOnL( double x1, double y1, double x2, double y2 ){
	double x = randDbl( x1, x2 );
	double y;
	if( y1 == y2 )
		y = y1;
	else if( x1 == x2 )
		y = randDbl( y1, y2 );
	else
		y = y1 + ( y2 - y1 )/( x2 - x1 ) * ( x - x1 );
	return new Coord( x, y );
}