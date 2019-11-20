#include<iostream>
using namespace std;
class Item
{
	private:
		string product_Name;
		int product_Quantity;
		int product_ID;
		double product_Cost;
	public:
		// static int global_ID;

		// Constructors
		Item();
		Item(string,int,double,int);
		
		// Get/Set methods
		void setName(string);
		string getName();
		
		void setID(int);
		int getID();
		
		void setQuantity(int);
		int getQuantity();
		
		void setCost(double);
		double getCost();
		
		// Methods 
		double getTotalCost();
		
		string toString();
};
