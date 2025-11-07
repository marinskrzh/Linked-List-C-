#include "LinkedList.h"


using namespace std;

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}



template<typename T>
void List<T>::PushBack(T data)
{
	if (head == nullptr)
	{
		head = new Node<T>(data); // Инициализируем первый элемент
	}
	else
	{
		Node<T>* curr = this->head;
		while (curr->pNext != nullptr)
		{
			curr = curr->pNext;
		}
		curr->pNext = new Node<T>(data);
	}
	Size++;
}

template<typename T>
T& List<T>::operator[](const int index)
{
	Node<T>* curr = this->head;
	int count = 0;
	while (curr->pNext != nullptr)
	{
		if (index == count)
			return curr->data;
		curr = curr->pNext;
		count++;
	}
}
