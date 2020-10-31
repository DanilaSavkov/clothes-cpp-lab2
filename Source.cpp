#include "MyClassHierarchy.h"

int main() {
	Overall overall("adidas", "green", 50, false);
	cout << overall.toString();
	cout << endl << "--------------------------" << endl;
	Hoodie hoodie("nike", "gray", 44, false);
	cout << hoodie.toString();
	cout << endl << "--------------------------" << endl;
	TShirt ts("polo", "red", 100, true);
	cout << ts.toString();
	cout << endl << "--------------------------" << endl;
	Pants pants("levi's", "jeans", 32, true);
	cout << pants.toString();
	cout << endl << "--------------------------" << endl;
	Underpants up("boss", "white", "boxers", 12);
	cout << up.toString();
}