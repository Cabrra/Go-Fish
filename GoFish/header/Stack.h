#pragma once
#include "stdafx.h"
#include "Card.h"
/*
	Stacks use FILO (First In, Last Out) ordering
			   LIFO (Last In, First Out)

	Examples: call stack, an ammo magazine/clip, plates at a buffet,
				PEZ, Pringles, deck of Items, toilet paper

*/

// A stack is a data structure
// a linked list is a data structure
//
// Both of these could be referred to as "containers"

// A simple way to keep our code generic
template<typename Item>	// Allows you to provide an alias for a datatype


// A stack implemented using a singly linked list
class Stack
{
private:

	// The most essential part of a linked list
	struct Node
	{
		Item m_data;		// The thing we're storing
		Node* m_next;	// The next node in the list

		Node(const Item& _info);
	};

	Node* m_top;		// The most recently-added thing
	int m_currSize;		// Current number of nodes allocated
	int m_maxSize;

	// Copy ctor
	Stack(const Stack&) : m_maxSize(0) { }

	// Assignment operator
	Stack& operator=(const Stack&) { return *this; }
public:

	// Def ctor
	// Creates an empty stack
	Stack(int _maxSize = 0);

	// Dtor
	~Stack();

	// Add something to the top of the stack
	// In:	_info		The data to add
	//
	// Return: True, if the add was successful
	bool Push(const Item& _info);

	// Remove the top-most thing from the stack
	// In:	_info		A "blank" Item
	//
	// Out: _info		The value that was at the top
	// Return: True, if there was something to remove
	bool Pop(Item& _info);

	// Current number of things allocated
	int GetCurrSize() const
	{
		return m_currSize; 
	}

	// Empty out the stack for re-use
	void Clear();

	// Look at the top-most Item without removing it.
	const Item* Peek() const;
};


// Def ctor
// Creates an empty stack
template<typename Item>
Stack<Item>::Stack(int _maxSize)
{
	m_top = NULL;
	m_currSize = 0;
	m_maxSize = _maxSize;
}

// Dtor
template<typename Item>
Stack<Item>::~Stack()
{
	Clear();
}

// Node ctor
template<typename Item>
Stack<Item>::Node::Node(const Item& _info)
{
	m_data = _info;
	m_next = NULL;		// Every node you create is going to go
	// to the end
}

// Add something to the top of the stack
// In:	_info		The data to add
//
// Return: True, if the add was successful
template<typename Item>
bool Stack<Item>::Push(const Item& _info)

{
	// Every time you add something to a list, the space
	// for that object needs to be dynamically allocated
	Node* newTop = new Node (_info);

	// Did new fail?
	if (NULL == newTop)
		return false;

	// Fill in the node
	newTop->m_data = _info;
	// Link it into the existing list
	newTop->m_next = m_top;
	// Update the top pointer because it's not pointing at the correct
	// address anymore
	m_top = newTop;

	// Great success!
	++m_currSize;
	return true;
}

// Remove the top-most thing from the stack
// In:	_info		A "blank" Item
//
// Out: _info		The value that was at the top
// Return: True, if there was something to remove
template<typename Item>
bool Stack<Item>::Pop(Item& _info)
{
	// If the list is empty, GTFO.
	if (!m_top)	// if (NULL == m_top)
		return false;

	// Copy the value over
	_info = m_top->m_data;

	// Modify the stack to remove this node
	Node* oldTop = m_top;
	m_top = m_top->m_next;
	delete oldTop;

	// Success
	--m_currSize;
	return true;


}

// Empty out the stack for re-use
template<typename Item>
void Stack<Item>::Clear()
{
	Node* oldTop;
	// Keep deleting nodes until there's no nodes left
	for (; m_currSize; --m_currSize)
	{
		oldTop = m_top;
		m_top = m_top->m_next;
		delete oldTop;
	}
}

// Look at the top-most Item without removing it.
template<typename Item>
const Item* Stack<Item>::Peek() const
{
	// Send back the address of the Item at the top, or NULL
	// if the list is empty.
	return (m_top ? &m_top->m_data : NULL);
}