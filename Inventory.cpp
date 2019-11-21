#include"Inventory.h"
using namespace std;

Inventory :: Inventory()
{
	size = 0;
}
void Inventory :: addStore(string i)
{
	if(size == 0)
	{
		cout << "Debug: 1\n";
		store[size] = Store(i);
		cout << "Test\n";
		size++;
		cout << "Debug: 2\n";
	}
	else
	{
		store[size] = Store(i);
		size++;
	}
}
void Inventory :: removeStore(string input)
{
	int x = 0;
	while(store[x].getStoreName() != "null")
	{
		if(store[x].getStoreName() == input)
		{
			store[x] = store[x+1];
		}
		x++;
	}
}
void Inventory :: 
