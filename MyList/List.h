#pragma 
#include "stdafx.h"
#include <iostream>
#define SIZE 5

using namespace std;

#ifndef List_H
#define List_H

template <class T> class List
{
private:
	//Member variables
	T items[SIZE];
	int count;
	int currentIndex;

public:
	//Defoult constructor
	List();

	//Defoult destructor
	~List();

	//Methods
	void addLast(T);

	void add(T);
		//Add's an item into the list

	void set(T, int);
		//Add's an item to list at specific index

	void remove();
		//Removes the last item

	void removeAt(int);
		//Removes the item at the specific index

	void clear();
		//Clear's the list

	T get();
		//Return's the last item

	T get(int);
		//Return's the item at the specific index

	int getCount();
		//Return's the number of items in the collection

	bool isEmpty();
		//Return's true if the collection is empty

	void unShiftFrom(int);
	//Helper for removeAt(), moves all items by one to the left 	

};
#endif List_H


