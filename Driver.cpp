#include<iostream>
//#include"Item.cpp"
#include"Store.cpp"
using namespace std;
int main()
{
	Store x = Store("Halflings");
	x.addItem("Beans" , 5 , 10, 15);
	
	
	
	x.toString();
	
	cout << "Hi";
}
