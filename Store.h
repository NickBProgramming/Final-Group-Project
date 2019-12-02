/* @Programmer Name: Nicholas Brown, Patrick Picca
 * @Date: 11/30/19
 * @Program Title: Store Header File
 * @Program Description: File for creating the layout and prototype of the Store class
 */
#ifndef STORE_H
#define STORE_H
#include<iostream>
#include"Item.cpp"
using namespace std;
class Store
{
	private:
		string 	store_Name;
		int 	size;
		Item 	stock[100];
		double 	revenue;
		double total;
	public:
		// Constructors
		//Empty
		Store();
		//Full
		Store(string);
		// Getter for size
		getSize();
		// Getter/Setter for the store's name
		void setStoreName(string);
		string getStoreName();
		
		//Methods
		
		/*---------------------------------------------------------------------------------------
		Function Name: Get Store Value
		Function Return Type:  Double
		Parameters: 
		Description: Method for getting the price of the entire store's stock
		-----------------------------------------------------------------------------------------*/
		double getStoreValue();
		
		/*---------------------------------------------------------------------------------------
		Function Name: Add Item
		Return Type: Void
		Parameters: string Item Name , double Item Cost, int Quantity, int ID
		Method for adding items to the store
		-----------------------------------------------------------------------------------------*/
		void addItem(string itemName , double cost, int quantity, int id);
		
		/*---------------------------------------------------------------------------------------
		Function Name: Remove Item
		Function Return Type: Void
		Parameters: String of the item to remove's name
		Description: Method for removing items from the store
		----------------------------------------------------------------------------------------*/
		void removeItem(string);
		
		/*--------------------------------------------------------------------------------------
		Function Name: To String
		Function Return Type: Void
		Parameters:
		Description: method for displaying all information about the store
		----------------------------------------------------------------------------------------*/
		void toString();
};
#endif
