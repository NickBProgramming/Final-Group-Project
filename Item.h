/* @Programmer Name: Nicholas Brown, Patrick Picca
 * @Date: 11/30/19
 * @Program Title: Item Header File
 * @Program Description: File for creating the layout and prototype of the item class
 */
#ifndef ITEM_H
#define ITEM_H
#include<iostream>
using namespace std;
class Item
{
	private:
		string 	product_Name;
		int 	product_Quantity;
		int 	product_ID;
		double 	product_Cost;
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
		/*---------------------------------------------------------------------------------------
		Function Name: Get Total Cost
		Function Return Type: Double
		Parameters: 
		Description: Method for getting the total cost of that type of item
		-----------------------------------------------------------------------------------------*/
		double getTotalCost();
		
		/*---------------------------------------------------------------------------------------
		Function Name: To String
		Function Return Type: void
		Parameters: 
		Description: Method for displaying information about the item
		-----------------------------------------------------------------------------------------*/
		void toString();
};
#endif
