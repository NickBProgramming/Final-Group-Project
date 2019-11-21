#include"Store.h"
Store :: Store()
{
	store_Name = "null";
	size = 0;
}

Store :: Store(string i)
{
	store_Name = i;
	cout << "Store \"" << i << "\" Created.\n";
	size = 0;
}
int Store :: getSize()
{
	return size;
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
	if(size == 0)
	{
		stock[0] = Item(itemName,quantity,cost,id);
		size++;
	}
	else
	{
		
		int x = 0;
		while (stock[x].getID() != -1)
		{
			x++;
		}
		stock[x] = Item(itemName,quantity,cost,id);
		size++;
		cout << "Item added!\n";
	}
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
	if(size == 0)
	{
		cout <<"No Items in " << store_Name << "\n";
	}
	else
	{
		
		int x = 0;
		cout << "-----" << store_Name << "-----" << endl;
		printf("| %-15s | %-15s | %-15s  | %-15s |\n" , "Name" , "ID" , "Cost" , "Quantity");
		for(int i = 0; i < size; i++)
		{
			stock[x].toString();
		}
	}

}
