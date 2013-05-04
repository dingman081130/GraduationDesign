%{
#define YYSTYPE char *
extern YYSTYPE yylval;
#include<iostream>
#include<cstdlib>
#include<string>
using namespace std;
#include "yacc.tab.hpp"

void getVal();

%} 
DIGIT	[0-9]
%%
(\t|" "|\n)+	;	/*过滤白字符*/


"度" |
"分" |
"秒" |
cm	 |
dm   |
m    |
km		{	getVal(); return UNIT;	}

[A-Z]{DIGIT}*	{	getVal(); getVal(); return POINTV;	}
			
"-"?{DIGIT}+ |
"-"?{DIGIT}+"."{DIGIT}*	{	getVal(); return NUM;	}

[a-z][0-9]*	{	getVal(); getVal(); return OBJECTV;	}
			

"点"	{	getVal(); return POINT;	}
"中点"	{	getVal(); return MIDPOINT;	}
"端点"	{	getVal(); return ENDPOINT;	}
"圆心"	{	getVal(); return CCENTER;	}
"交点"	{	getVal(); return INTERSECTPOINT;	}
"切点"	{	getVal(); return TANGENTPOINT;	}
"内心"	{	getVal(); return INCENTER;	}
"外心"	{	getVal(); return OUTCENTER;	}
"重心"	{	getVal(); return GCENTER;	}
"垂心"	{	getVal(); return VCENTER;	}
"弧心"	{	getVal(); return ACENTER;	}

"线" |
"直线"		{	getVal(); getVal(); return LINE;	}
"线段"		{	getVal(); getVal(); return SEGMENT;	}
"射线"		{	getVal(); getVal(); return RAY;	}
"中垂线"	{	getVal(); return PBLINE;	}
"垂线"		{	getVal(); return VERTICALINE;	}
"平分线"	{	getVal(); return EDIVISIONLINE;	}
"平行线"	{	getVal(); return PARALLELINE;	}
"高" |
"高线"		{	getVal(); return HEIGHTLINE;	}
"中线"		{	getVal(); return MIDLINE;	}
"对角线"	{	getVal(); return DIAGONAL;	}
"切线"		{	getVal(); return TANGENTLINE;	}
"公切线"	{	getVal(); return COMMONTANGENTLINE;	}
"内切线"	{	getVal(); return INNERTANGENTLINE;	}
"外切线"	{	getVal(); return OUTERTANGENTLINE;	}
"直径"		{	getVal(); return DIAMETER;	}
"半径"		{	getVal(); return RADIUS;	}
"延长线"	{	getVal(); return EXTENDLINE;	}
"反向延长线"	{	getVal(); return REEXTENDLINE;	}


"角"	{	getVal(); return ANGLE;	}
"直角"	{	getVal(); return RIGHTANGLE;	}
"锐角"	{	getVal(); return ACUTEANGLE;	}
"钝角"	{	getVal(); return OBTUSEANGLE;	}

"三角形"			{	getVal(); return TRIANGLE;	}
"直角三角形"		{	getVal(); return RIGHTTRIANGLE;	}
"锐角三角形"		{	getVal(); return ACUTRIANGLE;	}
"钝角三角形"		{	getVal(); return OBTTRIANGLE;	}
"等腰三角形"		{	getVal(); return ISOTRIANGLE;	}
"等边三角形"		{	getVal(); return EQUTRIANGLE;	}
"内接三角形"		{	getVal(); return INTOUCHTRIANGLE;	}
"外切三角形"		{	getVal(); return OUTANGENTRIANGLE;	}
"等腰直角三角形" |
"直角等腰三角形"	{	getVal(); return RIGHTDTRIANGLE;	}


"四边形"		{	getVal(); return QUADRANGLE;	}
"平行四边形"	{	getVal(); return PARALELLQUADRANGLE;	}
"正方形"		{	getVal(); return  SQUARE;	}
"菱形"			{	getVal(); return DIAMOND;	}
"矩形"			{	getVal(); return RECTANGLE;	}
"梯形"			{	getVal(); return LADDER;	}
"等腰梯形"		{	getVal(); return ISOLADDER;	}
"直角梯形"		{	getVal(); return RIGHTLADDER;	}

"多边形"		{	getVal(); return POLYGON;	}

"弧"		{	getVal(); return ARC;	}

"圆"		{	getVal(); return CIRCLE;	}
"内切圆"	{	getVal(); return INTANGENTCIRCLE;	}
"外接圆"	{	getVal(); return OUTOUCHCIRCLE;	}

"垂直平分"	{	getVal(); return PEBI;	}
"相交"		{	getVal(); return INTERSECT;	}
"垂直"		{	getVal(); return PERPEND;	}
"平分"		{	getVal(); return EDIVISION;	}
"平行"		{	getVal(); return PARALLEL;	}
"相切"		{	getVal(); return TANGENT;	}
"内切"		{	getVal(); return INTANGENT;	}
"内接"		{	getVal(); return INTOUCH;	}
"外接"		{	getVal(); return OUTOUCH;	}
"外切"		{	getVal(); return OUTANGENT;	}
"同心"		{	getVal(); return SAMECENTER;	}
"连接"		{	getVal(); return LINK;	}
"延长"		{	getVal(); return PROLONG;	}

"的"	{	getVal(); return AUXILIARY;	}
"过"	{	getVal(); return PASS;	}
"以"	{	getVal(); return AS;	}
"作"	{	getVal(); return DRAW;	}
"与" |
"和"	{	getVal(); return AND;	}
"为"	|
"是"		{	getVal(); return IS;	}
"于" |
"在"	{	getVal(); return AT;	}
"至" |
"到" |
"达"	{	getVal(); return TO;	}
"上"	{	getVal(); return UP;	}
"中" |
"内"	{	getVal(); return IN;	}
"外"	{	getVal(); return OUT;	}

"等于"	|
"="		{	getVal(); return EQUAL;	}
"小于"	|
"<"		{	getVal(); return SMALLER;	}
"大于"	|
">"		{	getVal(); return GREATER;	}

"+"		{	getVal(); return PLUS;	}
"-"		{	getVal(); return MINUS;	}
"*"		{	getVal(); return MULTI;	}
"/"		{	getVal(); return DIVIDE;	}
"^"		{	getVal(); return POWER;	}
"%"		{	getVal(); return MOD;	}

","	|
"，" |
"." |
"。"	{	getVal(); return END;	}

"、"	{	getVal(); return DOT;	}
\50	{	getVal(); return LP;	}
\51	{	getVal(); return RP;	}


%%
void getVal(){
	char * s = ( char * )malloc( yyleng + 1 );
	strcpy( s, yytext );
	yylval = s;
}
int yywrap()
{ 
	getVal(); return 1;
}
