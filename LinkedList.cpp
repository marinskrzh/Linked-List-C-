#include "LinkedList.h"


using namespace std;

template<typename T>
List<T>::List()
{
	Size = 0;
	head = nullptr;
}

template<typename T>
List<T>::~List()
{
	Clear();
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
void List<T>::PushFront(T data)
{
	head = new Node<T>(data, head);

	Size++;
}

template<typename T>
void List<T>::PopFront()
{
	Node<T>* temp = head;
	head = head->pNext;
	delete temp;
	Size--;
}

template<typename T>
void List<T>::PopBack()
{
	Remove(Size - 1);
}

template<typename T>
void List<T>::Insert(T data, int index)
{
	if (index == 0)
	{
		PushFront(data);
	}
	else
	{
		Node<T>* previous = this->head; // Указатель на предыдущий элемент
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}
	 
		previous->pNext = new Node<T>(data, previous->pNext);
		Size++;
	}
}

template<typename T>
void List<T>::Remove(int index)
{
	if (index == 0)
	{
		PopFront();
	}
	else
	{
		Node<T>* previous = this->head; // Указатель на предыдущий элемент

		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->pNext;
		}

		Node<T>* NodeToDelete = previous->pNext;
		previous->pNext = NodeToDelete->pNext;
		delete NodeToDelete;
		Size--;
	}
}

template<typename T>
void List<T>::Clear()
{
	while(Size)
		PopFront();
}

template<typename T>
T& List<T>::operator[](const int index)
{
	Node<T>* curr = this->head;
	int count = 0;
	while (curr != nullptr)
	{
		if (index == count)
			return curr->data;
		curr = curr->pNext;
		count++;
	}
}
