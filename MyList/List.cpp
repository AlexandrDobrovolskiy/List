#include "stdafx.h"
#include "List.h"


template <class T>
List<T>::List()
{
	count = 0;
	currentIndex = -1;
}

template <class T> 
List<T>::~List()
{
}

template <class T>
void List<T>::add(T item) 
{
	if (count == SIZE)
		throw "The collection is full !";
	items[++currentIndex] = item;
	count++;
}

template <class T>
void List<T>::addLast(T item)
{
	add(item);
}

template <class T>
void List<T>::set(T item, int index)
{
	if (index >= count || index < 0)
		throw "Index is not valid!";
	items[index] = item;
}

template <class T>
void List<T>::clear() 
{
	int startCount = count;
	for (int i = 0; i < startCount; i++)
	{
		remove();
	}
}

template <class T>
void List<T>::remove()
{
	if (isEmpty())
		throw "Can not remove from empty collection";
	currentIndex--;
}

template <class T>
bool List<T>::isEmpty()
{
	return count == 0;
}

template <class T>
T List<T>::get()
{
	if(isEmpty())
		throw "Can not get from empty collection !"
	return items[currentIndex];
}

template <class T>
T List<T>::get(int index) 
{
	if (index < 0 || index > currentIndex || isEmpty())
		throw "Index is not valid !";
	return items[index];
}

template <class T>
int List<T>::getCount() 
{
	return count;
}

/*emplate <class T>
void List<T>::unShiftFrom(int index)
{
	int start = index ;
	int end = count;
	for (int i = index; i < count; i++)
	{
		items[i] = items[i + 1];
	}
}

template <class T>
void List<T>::removeAt(int index) 
{
	if (index < 0 || index > currentIndex || isEmpty())
		throw "Index is not valid !";
	currentIndex--;
	unShiftFrom(index);
}*/
