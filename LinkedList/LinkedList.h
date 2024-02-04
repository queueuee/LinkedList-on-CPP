#pragma once

template<typename T>
class LinkedList
{
public:
	LinkedList();
	void Push_back(T);
	unsigned int GetSize();
	T& operator[](const int index);

private:
	// €чейка списка
	template<typename T>
	class Cell
	{
	public:
		Cell* nextCell;
		T data;

		Cell(T data, Cell* nextCell = nullptr)
		{
			this->data = data;
			this->nextCell = nextCell;
		}
	};

	unsigned int size;
	Cell<T>* head;
};