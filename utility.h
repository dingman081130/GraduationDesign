/*��objectList�в���object�����򷵻�list�е�objectָ�룬û���򷵻ؿ�*/
#include"tlist.h"
class Object; class Point; class Lint; class Angle; class Triangle; class Quadrangle; class Arc; class Circle; class Polygon;

void init();	/*��ʼ��*/

Point * findPInL( char * );	/*��object list���ҵ�*/
Line * findLInL( char *, char * );	/*��object list������*/
Angle * findAnInL( char * p1, char * p2, char * );	/*��object list���ҽ�*/
Triangle * findTInL( char *, char *, char * );	/*��object list����������*/
Circle * findCInL( char * );	/*��object list����Բ*/
Quadrangle * findQInL( char *, char *, char *, char * );	/*��object list�����ı���*/

Point * addPIntoL( char * );
Line * addLIntoL( char *, char *, char * );	/*������ı�ż�����*/
Angle * addAnIntoL( char *, char *, char *, char * );	/*������ı�ż�����*/
Triangle * addTIntoL( char *, char *, char *, char * );
Quadrangle * addQIntoL( char *, char *, char *, char *, char * );	/*�ĸ���ı�ż�����*/
Circle * addCIntoL( char * );	/*Բ�ı��*/


double sToD( char * );


void tkzStart();
void tkzEnd();