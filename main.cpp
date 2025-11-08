#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
	List<int> lst;
	lst.PushFront(10);
	lst.PushFront(5);
	lst.PushBack(23);
	lst.PushFront(4);

	cout << lst.GetSize() << endl;
	cout << "==============" << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "==============" << endl;
	lst.Insert(100,2);
	cout << lst.GetSize() << endl;
	cout << "==============" << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "==============" << endl;



	lst.Remove(2);
	lst.Remove(2);
	cout << lst.GetSize() << endl;
	cout << "==============" << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "==============" << endl;



	lst.PopBack();
	cout << lst.GetSize() << endl;
	cout << "==============" << endl;
	for (int i = 0; i < lst.GetSize(); i++)
	{
		cout << lst[i] << endl;
	}
	cout << "==============" << endl;

	return 0;
}