#include "stdafx.h"
#include <iostream>
#include "windows.h"

using namespace std;
volatile int i;

DWORD WINAPI thread2(LPVOID);

int _tmain()
{
	cout << "First thread\n";
	HANDLE thread = CreateThread(NULL,0,thread2,NULL, 0, NULL);
	cout << "More data from first thread\n";
	i=1;
	while (true)
	{
		i *=-1;
	}
	cout << "More data from first thread\n";
	return 0;
}
DWORD WINAPI thread2(LPVOID t)
{
	cout << "Second thread\n";
	
	while (true)
	{
		printf("i=%i", i);
	}
	return 0;
}


