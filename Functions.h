/* @Programmer Name: Nicholas Brown, Patrick Picca
 * @Date: 11/30/19
 * @Program Title: Functions Header File
 * @Program Description: The file for prototyping and constructing the functions for the driver
 */
#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include"Store.cpp"
using namespace std;
class Functions
{
	private:
		int inputCommand;
		string input;
		string name;
		double cost;
		int quantity;
		int ID;
		Store x[100];
	public:
		/*---------------------------------------------------------------------------------------
		Function Name: Menu
		Function Return Type: Void
		Parameters: 
		Description: Method for connecting the user to the other classes using a user friendly menu
		-----------------------------------------------------------------------------------------*/
		void Menu();
};
#endif
