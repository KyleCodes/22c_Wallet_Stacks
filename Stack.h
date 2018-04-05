////////////////////////////////////////////
////////////////////////////////////////////
//            CLASS DEFINITIONS
////////////////////////////////////////////
////////////////////////////////////////////
////////////////////////////////////////////
//	STACK CLASS
////////////////////////////////////////////
// Stack.h
////////////////////////////////////////////

#ifndef STACK_H
#define STACK_H
#include <iostream>
#include <string>
#include "Node.h"
using namespace std;

template <class T>
class Stack: protected LinkedList<T>
{
public:
	Stack();
	//~Stack(); // this destructor deletes everything from the stack
	void push(T);
	void pop(T &);
	bool isStackEmpty();
	void Display();

};

template <class T>
Stack<T>::Stack()
{

}

//template <class T>
//Stack::~Stack()
//{
//	Node *currPtr; // a curr pointer to move through the stack
//	Node *nextNode;// a nextnode to have a value after the curr ptr is delete to keep deleting
//
//	currPtr = head; // sets curr pointer to the top value
//
//	while (currPtr != NULL)
//	{
//		nextNode = currPtr->next; //sets nextnode to the node after top
//		delete currPtr; // deletes the current node
//		currPtr = nextNode; // sets the current node to the node after it
//	}
//}
template <class T>
void Stack<T>::push(T input)
{
	this->insertFirst(input);
}

template <class T>
void Stack<T>::pop(T &input)
{
	this->removeFirst(input);
}
template <class T>

bool Stack<T>::isStackEmpty()
{
	bool status = this->isEmpty();
	return status;
}

template <class T>
void Stack<T>::Display()
{
	Node *currPtr; // to move through the stack by pointing at nodes

	currPtr = head; // sets currptr to head so we can start from the top node in the stack

	while (currPtr != NULL)
	{
		cout << currPtr->data << " "; // displays current values

		currPtr = currPtr->next; // sets curptr to the node that cuurptr points too, thereby moving through the list.  While the node that currptr is pointing to does not = null.
	}
	cout << endl;
}
#endif