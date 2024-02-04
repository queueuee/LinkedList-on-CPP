#include "LinkedList.h"

template<typename T>
LinkedList<T>::LinkedList()
{
	size = 0;
	head = nullptr;
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
unsigned int LinkedList<T>::GetSize()
{
	return size;
}
