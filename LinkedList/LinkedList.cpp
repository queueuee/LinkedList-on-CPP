#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{
	size = 0;
	head = nullptr;
}

template<typename T>
LinkedList<T>::~LinkedList()
{
	Clear();
}

template<typename T>
void LinkedList<T>::Push_back(T data)
{
	if (head == nullptr)
	{
		head = new Cell<T>(data);
	}
	else
	{
		Cell<T>* currentCell = head;

		while (currentCell->nextCell != nullptr)
			currentCell = currentCell->nextCell;

		currentCell->nextCell = new Cell<T>(data);
	}
	size++;
}

template<typename T>
int LinkedList<T>::GetSize()
{
	return size;
}

template<typename T>
void LinkedList<T>::Pop_front()
{
	Cell<T>* firstCell = head;
	head = head->nextCell;
	delete firstCell;
	size--;
}

template<typename T>
void LinkedList<T>::Push_front(T data)
{
	head = new Cell<T>(data, head);
	size++;
}

template<typename T>
void LinkedList<T>::Insert(T data, int index)
{
	if (index == 0)
	{
		Push_front(data);
		return;
	}

	Cell<T>* currentCell = head;
	for (int i = 0; i < index-1; i++)
	{
		currentCell = currentCell->nextCell;
	}

	currentCell->nextCell = new Cell<T>(data, currentCell->nextCell);
	size++;
}

template<typename T>
void LinkedList<T>::RemoveAt(int index)
{
	if (index == 0)
	{
		Pop_front();
		return;
	}

	Cell<T>*prevCell = head;
	for (int i = 0; i < index - 1; i++)
	{
		prevCell = prevCell->nextCell;
	}

	Cell<T>* toRemove = prevCell->nextCell;
	prevCell->nextCell = toRemove->nextCell;

	delete toRemove;
	size--;
}

template<typename T>
void LinkedList<T>::Pop_back()
{
	RemoveAt(size - 1);
}

template<typename T>
void LinkedList<T>::Clear()
{
	while (size)
	{
		Pop_front();
	}
}

template<typename T>
T& LinkedList<T>::operator[](const int index)
{
	Cell<T>* currentCell = head;

	for (int counter = 0; counter < index; counter++)
	{
		currentCell = currentCell->nextCell;
	}

	return currentCell->data;
}
