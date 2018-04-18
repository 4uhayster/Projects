#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	ListElement list = nullptr;
	const int N = 10;
	for (int i = 0; i < N; i++)
		AddStringToList(&list, MakeRandomString());
	PrintList(list);
	cout << "***" << endl;

	BSortList(list, AlphabetComparator);
	PrintList(list);
	cout << "***" << endl;

	BSortList(list, SizeComparator);
	PrintList(list);
	DestroyList(&list);


	system("pause");
	return 0;
}
