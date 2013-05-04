#pragma once
#include<iostream>
using namespace std;

template <class type>
class ListNode{
private:
	type entity;
	ListNode * next;
public:
	ListNode(){
		entity = 0; next = 0;
	}
	
	~ListNode(){}

	type getEntity(){	return entity;	}
	ListNode * getNext(){	return next;	}
	void setEntity( type entity ){	this->entity = entity;	}
	void setNext( ListNode * next){	this->next = next;	}
	void clear( ListNode * node ){
		if(node != 0){
			if( node->next != 0 )
				clear( node->next );
			delete node;
		}
	}
};

template <class type>
class List{
private:
	int length;
	int referNum;	/*被引用次数 为0时可消除*/
	ListNode<type> * head, * rear;
public:
	List(){
		length = 0;
		head = rear = new ListNode<type>();;
	}
	~List(){
		clear();
		delete head;
	};
	
	int getLength(){
		return length;
	};

	ListNode<type> * getHead(){
		return head;
	}

	void add(type entity){
		ListNode<type> * p = new ListNode<type>();
		p->setEntity( entity );
		rear->setNext( p );
		rear = p;
		length ++;
	}

	void clear(){
		head->clear( head->getNext() );
		length = 0;
	}

	bool isInList( type entity ){
		ListNode<type> * p = head->getNext();
		while( p != 0 ){
			if( p->getEntity() == entity   )
				return true;
			else
				p = p->getNext();
		}
		return false;
	}
	void prePrint(){
		ListNode<type> * p = head->getNext();
		type tmp;
		while( p != 0 ){
			tmp = p->getEntity();
			if( !strcmp( typeid(tmp).name(), "class Object *" ) )
				(( Object * )tmp)->prePrintTKZ();
			p = p->getNext();
		}
	}

	void print(){
		ListNode<type> * p = head->getNext();
		type tmp;
		while( p != 0 ){
			tmp = p->getEntity();
			if( !strcmp( typeid(tmp).name(), "class Object *" ) ){
				(( Object * )tmp)->printTKZ();
			}
			p = p->getNext();
		}
	}
};