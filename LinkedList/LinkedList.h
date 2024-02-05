#pragma once

template<typename T>
class LinkedList
{
public:
	LinkedList();
	~LinkedList();

	void Push_back(T);
	int GetSize();
	void Pop_front();
	void Push_front(T);
	void Insert(T, int);
	void RemoveAt(int);
	void Pop_back();
	void Clear();
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

	int size;
	Cell<T>* head;
};