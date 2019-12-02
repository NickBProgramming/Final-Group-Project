/* @Programmer Name: Nicholas Brown, Patrick Picca
 * @Date: 11/30/19
 * @Program Title: Functions for driver
 * @Program Description: Functions for use by the driver file
 */
#include<iostream>
//#include"Store.cpp"
#include"Functions.h"
using namespace std;

int size = 0;



void Functions :: Menu()
{
	bool exit = false;
	cout << "Welcome to the store inventory system\n";
	do
	{
		cout << "Please select a command: 1(Add Store) , 2(Remove Store) , 3(Add Item) , 4(Remove Item) , 5(Display Stores), 6(Exit)\n";
		cin >> inputCommand;
		
		switch(inputCommand)
		{
			case 1:
			{
				cout << "Please input the store's name.\n";
				cin >> input;
				if(size > 0 && x[size-1].getStoreName() == "null")
				{
					x[size-1] = Store(input);
				}
				else
				{
					bool same = false;
					if(same == false)
					{
						for(int i = 0; i < size; i++)
						{
							if(x[i].getStoreName() == input)
							{
								cout << "Invalid input: Store name already taken\n";
								same = true;
							}
						}
					}
					if(same == false)
					{
						x[size] = Store(input);
						size++;
					}
				}
				break;
			}
			case 2:
			{
				cout << "Please input the name of the store you would like to remove.\n";
				cin >> input;
				bool notFound = true;
				for(int i = 0; i < size; i++)
				{
					if(x[i].getStoreName() == input)
					{
						x[i] = Store();
						cout << "Store \"" << input << "\" removed.\n";
						size--;
						notFound = false;
					}
				}
				if(notFound == true)
				{
					cout << "Store not found.\n";
				}
				break;
			}
			case 3:
			{
				cout << "Input what store you would like to add an item to.\n";
				for(int i = 0; i < size; i++)
				{
					cout << i+1 << ". " << x[i].getStoreName() << "\n";
				}
				cin >> inputCommand;
				cout << "Please input item info: Item Name , Item cost , Item Quantity, Item ID\n";
				
				cin >> name;
				cin >> cost;
				cin >> quantity;
				cin >> ID;
				
				x[inputCommand-1].addItem(name,cost,quantity,ID);
				break;
			}
			case 4:
			{
				cout << "Input what store you would like to remove an item from.\n";
				for(int i = 0; i < size; i++)
				{
					cout << i+1 << ". " << x[i].getStoreName() << "\n";
				}
				cin >> inputCommand;
				cout << "Please input the name of the item you would like to remove.\n";
				cin >> input;
				x[inputCommand-1].removeItem(input);
				break;
			}
			case 5:
			{
				if(size == 0)
				{
					cout << "No Stores Found.\n";
				}
				for(int i = 0; i< size; i++)
				{
					if(x[i].getSize() == 0)
					{
						if(x[i].getStoreName() == "null")
						{
							cout << "Store not Found\n";
						}
						else
						{
							cout << "Store \"" << x[i].getStoreName() << "\" has no stock\n";
						}
					}
					else
					{
						x[i].toString();
					}
				}
				break;
			}
			case 6:
			{
				cout << "Exiting...\n";
				exit = true;
				break;
			}
			default:
			{
				cout <<"Invalid Command\n";
			}
		}
	}
	while(exit == false);
}
