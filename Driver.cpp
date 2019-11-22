#include "Functions.cpp"
using namespace std;
void debug();
int main()
{
	
	debug();
	//Menu();
}
void debug()
{
	Store b = Store("Jerries");
	b.addItem("Cherries" , 20 , 20 , 50);
	b.addItem("Berries" , 12 , 40 , 16);
	b.toString();
	
	b.removeItem("Cherries");
	b.toString();
	b.getStoreValue();
}
