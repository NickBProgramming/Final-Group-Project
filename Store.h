#include<iostream>
#include"Item.cpp"
using namespace std;
class Store
{
	private:
		string store_Name;
		int size;
		Item stock[];
		double revenue;
	public:
		Store();
		Store(string);
		
		void setStoreName(string);
		string getStoreName();
		
		double getStoreRevenue();
		
		void addItem(string itemName , double cost, int quantity, int id);
		void removeItem(string);
		
		string toString();
};
