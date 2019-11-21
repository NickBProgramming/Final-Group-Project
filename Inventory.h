#ifndef STORE_H
#define STORE_H
#include<iostream>
#include"Store.cpp"
using namespace std;
class Inventory
{
	public:
		int size;
		Inventory();
		Store store[];
		void addStore(string);
		void removeStore(string);
		void displayStores();
};
#endif
