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
		// Method for getting the price of the entire store's stock
		double getStoreValue();
		
		//Method for adding items to the store
		void addItem(string itemName , double cost, int quantity, int id);
		
		//Method for removing items from the store
		void removeItem(string);
		
		//method for displaying all information about the store
		void toString();
};
#endif
