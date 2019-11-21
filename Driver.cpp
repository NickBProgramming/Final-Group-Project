#include<iostream>
#include"Store.cpp"
using namespace std;
void Menu();
void ClearScreen();
//Inventory x = Inventory();
int inputCommand;
string input;
int size = 0;

string name;
double cost;
int quantity;
int ID;

Store x[100];

int main()
{
	Item xItem = Item("Beans" , 10 , 5 , 302);
	//cout << xItem.getCost();
	Menu();
}
void Menu()
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
					x[size] = Store(input);
					size++;
				}
				break;
			}
			case 2:
			{
				cout << "Please input the store's name.\n";
				cin >> input;
				int j = 0;
				while(x[j].getStoreName() != "null")
				{
					if(x[j].getStoreName() == input)
					{
						x[j] = x[j+1];
					}
					j++;
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
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				int j = 0;
				
				if(x[j].getSize() == 0)
				{
					if(x[j].getStoreName() == "null")
					{
						cout << "Store not Found\n";
					}
					else
					{
						cout << "Store \"" << x[j].getStoreName() << "\" has no stock\n";
					}
				}
				for(int i = 0; i < x[j].getSize(); i++)
				{
					x[j].toString();
				}
				
				break;
			}
			case 6:
			{
				cout << "Exiting.\n";
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
void ClearScreen()
{
	int n;
	for (n = 0; n < 10; n++)
  		printf( "\n\n\n\n\n\n\n\n\n\n" );
}
