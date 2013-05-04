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
(\t|" "|\n)+	;	/*���˰��ַ�*/


"��" |
"��" |
"��" |
cm	 |
dm   |
m    |
km		{	getVal(); return UNIT;	}

[A-Z]{DIGIT}*	{	getVal(); getVal(); return POINTV;	}
			
"-"?{DIGIT}+ |
"-"?{DIGIT}+"."{DIGIT}*	{	getVal(); return NUM;	}

[a-z][0-9]*	{	getVal(); getVal(); return OBJECTV;	}
			

"��"	{	getVal(); return POINT;	}
"�е�"	{	getVal(); return MIDPOINT;	}
"�˵�"	{	getVal(); return ENDPOINT;	}
"Բ��"	{	getVal(); return CCENTER;	}
"����"	{	getVal(); return INTERSECTPOINT;	}
"�е�"	{	getVal(); return TANGENTPOINT;	}
"����"	{	getVal(); return INCENTER;	}
"����"	{	getVal(); return OUTCENTER;	}
"����"	{	getVal(); return GCENTER;	}
"����"	{	getVal(); return VCENTER;	}
"����"	{	getVal(); return ACENTER;	}

"��" |
"ֱ��"		{	getVal(); getVal(); return LINE;	}
"�߶�"		{	getVal(); getVal(); return SEGMENT;	}
"����"		{	getVal(); getVal(); return RAY;	}
"�д���"	{	getVal(); return PBLINE;	}
"����"		{	getVal(); return VERTICALINE;	}
"ƽ����"	{	getVal(); return EDIVISIONLINE;	}
"ƽ����"	{	getVal(); return PARALLELINE;	}
"��" |
"����"		{	getVal(); return HEIGHTLINE;	}
"����"		{	getVal(); return MIDLINE;	}
"�Խ���"	{	getVal(); return DIAGONAL;	}
"����"		{	getVal(); return TANGENTLINE;	}
"������"	{	getVal(); return COMMONTANGENTLINE;	}
"������"	{	getVal(); return INNERTANGENTLINE;	}
"������"	{	getVal(); return OUTERTANGENTLINE;	}
"ֱ��"		{	getVal(); return DIAMETER;	}
"�뾶"		{	getVal(); return RADIUS;	}
"�ӳ���"	{	getVal(); return EXTENDLINE;	}
"�����ӳ���"	{	getVal(); return REEXTENDLINE;	}


"��"	{	getVal(); return ANGLE;	}
"ֱ��"	{	getVal(); return RIGHTANGLE;	}
"���"	{	getVal(); return ACUTEANGLE;	}
"�۽�"	{	getVal(); return OBTUSEANGLE;	}

"������"			{	getVal(); return TRIANGLE;	}
"ֱ��������"		{	getVal(); return RIGHTTRIANGLE;	}
"���������"		{	getVal(); return ACUTRIANGLE;	}
"�۽�������"		{	getVal(); return OBTTRIANGLE;	}
"����������"		{	getVal(); return ISOTRIANGLE;	}
"�ȱ�������"		{	getVal(); return EQUTRIANGLE;	}
"�ڽ�������"		{	getVal(); return INTOUCHTRIANGLE;	}
"����������"		{	getVal(); return OUTANGENTRIANGLE;	}
"����ֱ��������" |
"ֱ�ǵ���������"	{	getVal(); return RIGHTDTRIANGLE;	}


"�ı���"		{	getVal(); return QUADRANGLE;	}
"ƽ���ı���"	{	getVal(); return PARALELLQUADRANGLE;	}
"������"		{	getVal(); return  SQUARE;	}
"����"			{	getVal(); return DIAMOND;	}
"����"			{	getVal(); return RECTANGLE;	}
"����"			{	getVal(); return LADDER;	}
"��������"		{	getVal(); return ISOLADDER;	}
"ֱ������"		{	getVal(); return RIGHTLADDER;	}

"�����"		{	getVal(); return POLYGON;	}

"��"		{	getVal(); return ARC;	}

"Բ"		{	getVal(); return CIRCLE;	}
"����Բ"	{	getVal(); return INTANGENTCIRCLE;	}
"���Բ"	{	getVal(); return OUTOUCHCIRCLE;	}

"��ֱƽ��"	{	getVal(); return PEBI;	}
"�ཻ"		{	getVal(); return INTERSECT;	}
"��ֱ"		{	getVal(); return PERPEND;	}
"ƽ��"		{	getVal(); return EDIVISION;	}
"ƽ��"		{	getVal(); return PARALLEL;	}
"����"		{	getVal(); return TANGENT;	}
"����"		{	getVal(); return INTANGENT;	}
"�ڽ�"		{	getVal(); return INTOUCH;	}
"���"		{	getVal(); return OUTOUCH;	}
"����"		{	getVal(); return OUTANGENT;	}
"ͬ��"		{	getVal(); return SAMECENTER;	}
"����"		{	getVal(); return LINK;	}
"�ӳ�"		{	getVal(); return PROLONG;	}

"��"	{	getVal(); return AUXILIARY;	}
"��"	{	getVal(); return PASS;	}
"��"	{	getVal(); return AS;	}
"��"	{	getVal(); return DRAW;	}
"��" |
"��"	{	getVal(); return AND;	}
"Ϊ"	|
"��"		{	getVal(); return IS;	}
"��" |
"��"	{	getVal(); return AT;	}
"��" |
"��" |
"��"	{	getVal(); return TO;	}
"��"	{	getVal(); return UP;	}
"��" |
"��"	{	getVal(); return IN;	}
"��"	{	getVal(); return OUT;	}

"����"	|
"="		{	getVal(); return EQUAL;	}
"С��"	|
"<"		{	getVal(); return SMALLER;	}
"����"	|
">"		{	getVal(); return GREATER;	}

"+"		{	getVal(); return PLUS;	}
"-"		{	getVal(); return MINUS;	}
"*"		{	getVal(); return MULTI;	}
"/"		{	getVal(); return DIVIDE;	}
"^"		{	getVal(); return POWER;	}
"%"		{	getVal(); return MOD;	}

","	|
"��" |
"." |
"��"	{	getVal(); return END;	}

"��"	{	getVal(); return DOT;	}
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