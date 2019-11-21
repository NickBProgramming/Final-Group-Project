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
	public:
		Store();
		Store(string);
		getSize();
		void setStoreName(string);
		string getStoreName();
		
		double getStoreRevenue();
		
		void addItem(string itemName , double cost, int quantity, int id);
		void removeItem(string);
		
		string toString();
};
#endif
