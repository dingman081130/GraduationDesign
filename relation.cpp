#include"relation.h"
#include"point.h"
#include"line.h"
#include"arc.h"
#include"angle.h"
#include"circle.h"
/**********************关系*************************/
Relation::Relation(){ 
	type = -1; 
	isVisited = false;
	isDrawed = false;
}
Relation::~Relation(){}

bool Relation::isVisit(){
	return isVisited;
}
void Relation::setVisit(bool b){
	isVisited = b;
}
bool Relation::isDraw(){
	return isDrawed;
}
void Relation::setDraw(bool b){
	isDrawed = b;
}

int Relation::getType(){ 
	return type; 
}
void Relation::setType( int t ){ 
	type = t; 
}

/***********************数量关系************************/
NumRelation::NumRelation(){ 
	n=-1; 
	type = Relation::NUM;
}
NumRelation::~NumRelation(){}

double NumRelation::getN(){ 
	return n; 
}
void NumRelation::setN( double n ){ 
	this->n = n; 
}
LLNumRelation::LLNumRelation( Line * ll1, Line * ll2, double b ){
	l1 = ll1; 
	l2 = ll2;
	n = b;
	typeR = NumRelation::LLNum;
}
LLNumRelation::~LLNumRelation(){}

Line * LLNumRelation::getLine( int n ){
	if( n == 1 )
		return l1;
	return l2;
}
void LLNumRelation::setLine( Line * l, int n ){
	if( n == 1 )
		l1 = l;
	else
		l2 = l;
}
void LLNumRelation::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	l1->prePrintTKZ();l2->prePrintTKZ();
	cout << "\\tkzDuplicateLength(" 
		<< l1->getEndP(1)->getLabel() << ","<< l1->getEndP(2)->getLabel() << ")("
		<< l2->getEndP(1)->getLabel() << ","<< l2->getEndP(2)->getLabel() << ")"
		<< "{" << l2->getEndP(2)->getLabel() << "}" << endl;
}
void LLNumRelation::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
}


/***********************************************/
AnAnNumRelation::AnAnNumRelation( Angle * a1, Angle * a2 ){
	an1 = a1; an2 = a2;
	typeR = NumRelation::AnAnNum;
}
AnAnNumRelation::~AnAnNumRelation(){}
Angle * AnAnNumRelation::getAngle( int n ){
	if( n == 1 )
		return an1;
	return an2;
}
void AnAnNumRelation::setAngle( Angle * an, int n ){
	if( n == 1 )
		an1 = an;
	else
		an2 = an;
}
/************************线线***********************/
LLRelation::LLRelation(){ 
	l1=l2=0;
	type = Relation::LLR;
}
LLRelation::~LLRelation(){}

Line * LLRelation::getLine( int n ){
	if( n == 1 )
		return l1;
	return l2;
}

void LLRelation::setLine( Line * l, int n ){
	if( n == 1 )
		l1 = l;
	else
		l2 = l;
}
/**********************线弧*************************/
LArRelation::LArRelation(){ 
	l=0; ar=0; 
	type = Relation::LArR;
}
LArRelation::~LArRelation(){}
Line * LArRelation::getLine(){ 
	return l; 
}
Arc * LArRelation::getArc(){ 
	return ar; 
}

void LArRelation::setLine( Line * l ){ 
	this->l = l; 
}
void LArRelation::setArc( Arc * ar ){ 
	this->ar = ar; 
}
/*********************线圆**************************/
LCRelation::LCRelation(){ 
	l=0; c=0; 
	type = Relation::LCR;
}
LCRelation::~LCRelation(){}

Line * LCRelation::getLine(){ 
	return l; 
}
Circle * LCRelation::getCircle(){ 
	return c; 
}

void LCRelation::setLine( Line * l ){ 
	this->l = l; 
}
void LCRelation::setCircle( Circle * c ){ 
	this->c = c; 
}
/*********************弧弧**************************/
ArArRelation::ArArRelation(){
	type = Relation::ArArR;
};
ArArRelation::~ArArRelation(){
};
Arc * ArArRelation::getArc( int n ){
	if( n == 1 )
		return ar1;
	else
		return ar2;
}
void ArArRelation::setArc( Arc * ar, int n ){
	if( n == 1 )
		ar1 = ar;
	else
		ar2 = ar;
}
/*********************圆圆***************************/
CCRelation::CCRelation(){
	type = Relation::CCR;
}
CCRelation::~CCRelation(){
}
Circle * CCRelation::getC( int n ){
	if( n == 1 )
		return c1;
	else
		return c2;
}
void CCRelation::setC( Circle * c, int n ){
	if( n == 1 )
		c1 = c;
	else
		c2 = c;
}
/************************************************/
LCRelationInt::LCRelationInt( Line * l1, Circle * c1, Point * p1, Point * p2 ){
	l = l1; c = c1;
	intP1=p1;
	intP2=p2;
	type = Relation::LCR;
	typeR = LCRelation::LCInt;
}
LCRelationInt::~LCRelationInt(){}

Point * LCRelationInt::getIntP( int n ){
	if( n == 1 )
		return intP1;
	return intP2;
}
void LCRelationInt::setIntP( Point * p, int n ){
		if( n == 1 )
			intP1 = p;
		else
			intP2 = p;
}
void LCRelationInt::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	cout << "\\tkzInterLCR(" << l->getEndP(1)->getLabel()
		<< "," << l->getEndP(2)->getLabel() << ")("
		<< c->getC()->getLabel() << "," << c->getR() << "cm){"
		<< intP1->getLabel() << "}{" << intP2->getLabel()
		<< "}" << endl;
	intP1->setVisit( true );intP2->setVisit( true );
}
void LCRelationInt::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
	cout << "\\tkzInterLCR(" << l->getEndP(1)->getLabel()
		<< "," << l->getEndP(2)->getLabel() << ")("
		<< c->getC()->getLabel() << "," << c->getR() << "cm){"
		<< intP1->getLabel() << "}{" << intP2->getLabel()
		<< "}" << endl;
	intP1->setDraw( true );intP2->setDraw( true );
}


/***********************************************/
LCRelationTg::LCRelationTg( Line * l1, Circle * c1, Point * p ){ 
	l = l1; c = c1;
	tgP = p; 
	type = Relation::LCR;
	typeR = LCRelation::LCInt;
}
LCRelationTg::~LCRelationTg(){}
	
Point * LCRelationTg::getTgP(){
	return tgP;
}
void LCRelationTg::setTgP( Point * p ){
		tgP = p;
}
void LCRelationTg::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
}
void LCRelationTg::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	l->prePrintTKZ(); c->prePrintTKZ();
	cout << "\\tkzTgtFromPR(" << c->getC()->getLabel()
		<< "," << c->getR() << "cm)(" << l->getEndP(1)->getLabel() << "){"
		<< tgP->getLabel() << "}{" << "NULL}" << endl;
	cout << "\\tkzVectorKLinear[k=0.3](" << l->getEndP(1)->getLabel() << ","
		<< tgP->getLabel() << "," << tgP->getLabel() << "){" << l->getEndP(2)->getLabel()
		<< "}" << endl;
	l->getEndP(2)->setVisit( true );
	tgP->setVisit( true );
}

/***********************************************/

LArRelationInt::LArRelationInt( Line * l1, Arc * ar1 ){ 
	l = l1; ar = ar1;
	intP1 = intP2 = 0; 
	type = Relation::LArR;
	typeR = LArRelation::LArInt;
}
LArRelationInt::~LArRelationInt(){}

Point * LArRelationInt::getIntP( int n ){
	if( n == 1 )
		return intP1;
	return intP2;
}
void LArRelationInt::setIntP( Point * p, int n ){
	if( n == 1 )
		intP1 = p;
	else
		intP2 = p;
}

void LArRelationInt::printTKZ(){
}
void LArRelationInt::prePrintTKZ(  ){
}
LArRelationTg::LArRelationTg( Line * l1, Arc * ar1 ){
	l = l1; ar = ar1;
	tgP1=tgP2=0; 
	type = Relation::LArR;
	typeR = LArRelation::LArTg;
}
LArRelationTg::~LArRelationTg(){}
	
Point * LArRelationTg::getTgP( int n ){
	if( n == 1 )
		return tgP1;
	return tgP2;
}
void LArRelationTg::setTgP( Point * p, int n ){
	if( n == 1 )
		tgP1 = p;
	else
		tgP2 = p;
}
void LArRelationTg::printTKZ(){
}
void LArRelationTg::prePrintTKZ(){
}
/***********************************************/
LLRelationInt::LLRelationInt( Line * ll1, Line * ll2, Point * p){ 
	l1 = ll1; l2 = ll2;
	intP = p; 
	type = Relation::LLR;
	typeR = LLRelation::LLInt;
}
LLRelationInt::~LLRelationInt(){}
Point * LLRelationInt::getIntP(){
	return intP;
}
void LLRelationInt::setIntP( Point * p ){
	intP = p;
}
void LLRelationInt::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
}
void LLRelationInt::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	l1->prePrintTKZ();l2->prePrintTKZ();
	cout << "\\tkzInterLL[color=red](" << l1->getEndP(1)->getLabel() << ","
		<< l1->getEndP(2)->getLabel() << ")(" << l2->getEndP(1)->getLabel()
		<< "," << l2->getEndP(2)->getLabel() << "){" << intP->getLabel()
		<< "}" << endl;
	intP->setVisit( true );
}

/***********************************************/
LLRelationPara::LLRelationPara( Line * ll1, Line * ll2 ){
	l1 = ll1; l2 = ll2;
	type = Relation::LLR;
	typeR = LLRelation::LLPara;
}
LLRelationPara::~LLRelationPara(){}

void LLRelationPara::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
}
void LLRelationPara::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;

	l2->prePrintTKZ(); l1->prePrintTKZ();
	cout << "\\tkzVectorKLinear[k=0.75](" << l2->getEndP(1)->getLabel() << "," << l2->getEndP(2)->getLabel() << ","
		<< l1->getEndP(1)->getLabel() << "){" << l1->getEndP(2)->getLabel() << "}" << endl;
}

/***********************************************/

LLRelationOrth::LLRelationOrth( Line * ll1, Line * ll2, Point * p ){
	l1 = ll1; l2 = ll2;
	orthP = p;
	type = Relation::LLR;
	typeR = LLRelation::LLOrth;
}
LLRelationOrth::~LLRelationOrth(){}
Point * LLRelationOrth::getOrthP(){
	return orthP;
}
void LLRelationOrth::setOrthP( Point * p ){
	orthP = p;
}

void LLRelationOrth::printTKZ(){
	if( isDrawed )
		return ;
	isDrawed = true;
}
void LLRelationOrth::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	cout << "\\tkzLineOrth[prefix=g,kr=1,kl=1](" << l2->getEndP(1)->getLabel() << "," << l2->getEndP(2)->getLabel() << ")"
		<< "(" << l1->getEndP(1)->getLabel() << ")" << endl;
	cout << "\\tkzGetPointxy(gr){a}" << endl;
	cout << "\\tkzPoint*(\\ax,\\ay){" << l1->getEndP(2)->getLabel() << "}" << endl;
	cout << "\\tkzInterLL(" << l1->getEndP(1)->getLabel() << "," << l1->getEndP(2)->getLabel()
		<< ")(" << l2->getEndP(1)->getLabel() << "," << l2->getEndP(2)->getLabel() << "){" << orthP->getLabel() << "}" << endl;
}

/************************************************/
LLRelationProl::LLRelationProl( Line * ll1, Line * ll2 ){
	l1 = ll1; l2 = ll2;
	type = Relation::LLR;
	typeR = LLRelation::LLProl;
}
LLRelationProl::~LLRelationProl(){}
/************************************************/
ArArRelationInt::ArArRelationInt( Arc * a1, Arc * a2 ){
	ar1 = a1; ar2 = a2;
	type = Relation::ArArR;
}
ArArRelationInt::~ArArRelationInt(){
}
Point * ArArRelationInt::getIntP( int n ){
	if( n == 1 )
		return intP1;
	else
		return intP2;
}
void ArArRelationInt::setIntP( Point * p, int n ){
	if( n == 1 )
		intP1 = p;
	else
		intP2 = p;
}
/************************************************/
ArArRelationTg::ArArRelationTg( Arc *a1, Arc * a2, Point * p ){
	ar1 = a1; ar2 = a2; tgP = p;
	type = Relation::ArArR;
	typeR = ArArRelation::ArArTg;
}
ArArRelationTg::~ArArRelationTg(){
}
Point * ArArRelationTg::getTgP(){
		return tgP;
}
void ArArRelationTg::setTgP( Point * p ){
		tgP = p;
}
/************************************************/
CCRelationInt::CCRelationInt( Circle *cc1, Circle * cc2, Point * p1, Point * p2 ){
	c1 = cc1; c2 = cc2;
	intP1 = p1; intP2 = p2;
	type = Relation::CCR;
	typeR = CCRelation::CCInt;
}
CCRelationInt::~CCRelationInt(){
}
Point * CCRelationInt::getIntP( int n ){
	if( n == 1 )
		return intP1;
	else
		return intP2;
}
void CCRelationInt::setIntP( Point * p, int n ){
	if( n == 1 )
		intP1 = p;
	else
		intP2 = p;
}
void CCRelationInt::printTKZ(){
	if( isDrawed )
		return;
	isDrawed = true;
}
void CCRelationInt::prePrintTKZ(){
	if( isVisited )
		return ;
	isVisited = true;
	c1->prePrintTKZ();c2->prePrintTKZ();
	cout << "\\tkzInterCCR(" << c1->getC()->getLabel() << ","
		<< c1->getR() << "cm)(" << c2->getC()->getLabel() << ","
		<< c2->getR() << "cm){" << intP1->getLabel() << "}{"
		<< intP2->getLabel() << "}" << endl;
	intP1->setVisit( true );intP2->setVisit( true );
}

/************************************************/
CCRelationTg::CCRelationTg( Circle * cc1, Circle *cc2, Point * p ){
	c1 = cc1; c2 = cc2;
	tgP = p;
	type = Relation::CCR;
	typeR = CCRelation::CCTg;
}
CCRelationTg::~CCRelationTg(){
}
Point * CCRelationTg::getTgP(){
		return tgP;
}
void CCRelationTg::setTgP( Point * p ){
		tgP = p;
}