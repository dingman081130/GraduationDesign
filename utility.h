/*在objectList中查找object，有则返回list中的object指针，没有则返回空*/
#include"tlist.h"
class Object; class Point; class Lint; class Angle; class Triangle; class Quadrangle; class Arc; class Circle; class Polygon;

void init();	/*初始化*/

Point * findPInL( char * );	/*在object list中找点*/
Line * findLInL( char *, char * );	/*在object list中找线*/
Angle * findAnInL( char * p1, char * p2, char * );	/*在object list中找角*/
Triangle * findTInL( char *, char *, char * );	/*在object list中找三角形*/
Circle * findCInL( char * );	/*在object list中找圆*/
Quadrangle * findQInL( char *, char *, char *, char * );	/*在object list中找四边形*/

Point * addPIntoL( char * );
Line * addLIntoL( char *, char *, char * );	/*两个点的标号加类型*/
Angle * addAnIntoL( char *, char *, char *, char * );	/*三个点的标号加类型*/
Triangle * addTIntoL( char *, char *, char *, char * );
Quadrangle * addQIntoL( char *, char *, char *, char *, char * );	/*四个点的标号加类型*/
Circle * addCIntoL( char * );	/*圆的标号*/


double sToD( char * );


void tkzStart();
void tkzEnd();