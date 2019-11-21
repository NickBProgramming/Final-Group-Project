#include<iostream>
#include"Inventory.cpp"
using namespace std;
void Menu();
Inventory x = Inventory();
int inputCommand;
string input;
int main()
{

	Menu();
}
void Menu()
{
	bool exit = false;
	cout << "Welcome to the store inventory system\n";
	do
	{
		cout << "Please select a command: 1(Add Store) , 2(Remove Store) , 3(Add Item) , 4(Remove Item) ,, 5(Display Stores), 6(Exit)\n";
		cin >> inputCommand;
		switch(inputCommand)
		{
			case 1:
			{
				cout << "Please input the store's name.\n";
				cin >> input;
				x.addStore(input);
				break;
			}
			case 2:
			{
				cout << "Please input the store's name.\n";
				cin >> input;
				x.removeStore(input);
				break;
			}
			case 3:
			{
				break;
			}
			case 4:
			{
				break;
			}
			case 5:
			{
				
			}
			case 6:
			{
				cout << "Exiting.\n";
				exit = true;
				break;
			}
		}
	}
	while(exit == false);
}
