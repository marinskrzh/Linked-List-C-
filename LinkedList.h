#pragma once

#include <iostream>

template<typename T>
class List
{
public:
	List();
	//~List();
	void PushBack(T data);
	int GetSize() {return Size;};
	T& operator[](const int index);

private:

	template<typename T>
	class Node
	{
	public:
		Node *pNext; // Указатель на следующий узел
		T data;
		Node(T data = T(), Node* pNext = nullptr)
		{
			this->data = data;
			this->pNext = pNext;
		}
		;
		//~Node();

	};

	int Size;
	Node<T> *head; // Первый узел

};


