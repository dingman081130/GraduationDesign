#pragma once
class Coord;

class Random{
public:
	Random();
	~Random();
	double randDbl( double, double );	/*���������double�����һdouble*/
	Coord * randCrdXY( double, double, double, double );	/*�޶�xy�ķ�Χ��������*/
	Coord * randCrdOnL( double, double, double, double );	/*����������߶��ϵ�һ��*/
	Coord * randCrdOnC( double, double, double );	/*�������Բ��һ��*/
};