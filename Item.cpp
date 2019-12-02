/* @Programmer Name: Nicholas Brown, Patrick Picca
 * @Date: 11/30/19
 * @Program Title: Item
 * @Program Description: Object that holds the Item's name, quantity, ID, and cost
 */
#include"Item.h"

Item :: Item()
{
	product_Name = "Null";
	product_Quantity = 0;
	product_ID = -1;
	product_Cost = 0;
}

Item :: Item(string input_Name,int input_Quantity,double input_Cost , int input_ID)
{
	product_Name = input_Name;
	product_Quantity = input_Quantity;
	product_Cost = input_Cost;
	product_ID = input_ID;
}

void 	Item :: setName(string input_Name)
{
	product_Name = input_Name;
}
string 	Item :: getName()
{
	return product_Name;
}
void 	Item :: setID(int input_ID)
{
	product_ID = input_ID;
}
int 	Item :: getID()
{
	return product_ID;
}
void 	Item :: setQuantity(int input_Quantity)
{
	product_Quantity = input_Quantity;
}
int 	Item :: getQuantity()
{
	return product_Quantity;
}
void 	Item :: setCost(double input_Cost)
{
	product_Cost = input_Cost;
}
double 	Item :: getCost()
{
	return product_Cost;
}

double 	Item :: getTotalCost()
{
	double total = product_Cost * product_Quantity;
	
	return total;
}

void 	Item :: toString()
{
	printf("| %-15s | %-15d | $%-15.2f | %-15d |\n" , product_Name.c_str() , product_ID , product_Cost , product_Quantity);
}
