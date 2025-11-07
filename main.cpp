#include <iostream>
#include "LinkedList.cpp"

using namespace std;

int main()
{
	List<int> lst;
	lst.PushBack(10);
	lst.PushBack(5);
	lst.PushBack(23);
	cout << lst.GetSize()<< endl;
	lst.PushBack(33);
	cout << lst.GetSize() << endl;
	cout << lst[2] << endl;
	return 0;
}