#pragma once
class Coord;

class Random{
public:
	Random();
	~Random();
	double randDbl( double, double );	/*随机生成两double间的任一double*/
	Coord * randCrdXY( double, double, double, double );	/*限定xy的范围生成坐标*/
	Coord * randCrdOnL( double, double, double, double );	/*随机生成在线段上的一点*/
	Coord * randCrdOnC( double, double, double );	/*随机生成圆上一点*/
};