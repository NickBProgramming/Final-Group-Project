#include"Store.h"
Store :: Store()
{
	store_Name = "null";
}
Store :: Store(string i)
{
	store_Name = i;
}

void Store :: setStoreName(string i)
{
	store_Name = i;
}
string Store :: getStoreName()
{
	return store_Name;
}
double Store :: getStoreRevenue()
{
	double temp = 0;
	int x = 0;
	do
	{
		temp += stock[x].getTotalCost();
	}
	while(stock[x].getID() != -1);
	return temp;
}

void Store :: addItem(string itemName , double cost, int quantity, int id)
{
	int x = 0;
	while (stock[x].getID() != 0)
	{
		x++;
	}
	stock[x] = Item(itemName,quantity,cost,id);
}
void Store :: removeItem(string name)
{
	int x = 0;
	while (stock[x].getName() != "null")
	{
		if(stock[x].getName() == name)
		{
			stock[x] = Item();
		}
	}
	
}

string Store :: toString()
{
	int x = 0;
	cout << "-----" << store_Name << "-----" << endl;
	do
	{
		stock[x].toString();
	}
	while(stock[x].getID() != -1);

}
