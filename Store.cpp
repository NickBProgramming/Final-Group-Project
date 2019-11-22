#include"Store.h"
Store :: Store()
{
	store_Name = "null";
	size = 0;
	total = 0;
}

Store :: Store(string i)
{
	store_Name = i;
	cout << "Store \"" << i << "\" Created.\n";
	size = 0;
	total = 0;
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

double Store :: getStoreValue()
{
	total = 0;
	for(int i = 0; i < 100; i++)
	{
		total += stock[i].getTotalCost();
	}
	return total;
}

void Store :: addItem(string itemName , double cost, int quantity, int id)
{
	if(size == 0)
	{
		stock[0] = Item(itemName,quantity,cost,id);
		size++;
		cout << "First Item added!\n";
	}
	else
	{
		
		int x = 0;
		while (stock[x].getID() != -1)
		{
			x++;
		}
		stock[size] = Item(itemName,quantity,cost,id);
		size++;
		cout << "Item added!\n";
	}
}
void Store :: removeItem(string name)
{	
	int i = 0;
	do
	{
		if(stock[i].getName() == name)
		{
			total = total - stock[i].getTotalCost();
			stock[i] = Item();
			cout << "Item \"" << name << "\" removed.\n";
			size--;
			
			return;
		}
	}
	while(stock[i].getName() != "Null");
	cout << "No such item found.\n";
	
}

void Store :: toString()
{
	if(size == 0)
	{
		cout <<"No Items in " << store_Name << "\n";
	}
	else
	{
		getStoreValue();
		int x = 0;
		cout << "----------|Store Name: " << store_Name  << "|Store Value: " << total << "|----------" << endl;
		printf("| %-15s | %-15s | %-15s  | %-15s |\n" , "Name" , "ID" , "Cost" , "Quantity");
		for(int i = 0; i < 100; i++)
		{
			if(stock[i].getName() == "Null")
			{
				// Do Nothing
			}
			else
			{
				stock[i].toString();
			}
		}
	}

}
