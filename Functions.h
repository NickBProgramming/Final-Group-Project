#ifndef STORE_H
#define STORE_H
#include"Store.cpp"
using namespace std;
class Store
{
	private:
		int inputCommand;
		string input;
		int size = 0;
		string name;
		double cost;
		int quantity;
		int ID;
		Store x[100];
	public:
		void Menu();
};
#endif
