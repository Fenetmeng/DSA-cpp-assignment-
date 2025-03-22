#include <iostream>


using namespace std;

#define taxRate1 0.15;

int main() {
	cout << "The purpose..." << endl
		<< "C++ is a compiled language" << endl;

	//variables for product details
	string pName;
	int pCategory; 
	int iQuality;
	float pricePerUnit;
	int itemSold=100; //direct initalization

	//vairables for computed values
	int newInventory;
	float totalSalesAmount{};
	string iStatus;

	pCategory = 3; //assignment after declaration
	iQuality = { 4 };//list initalization

	auto totalSalesAmountCopy = totalSalesAmount;
	decltype(iQuality) iQuality2= 4;

	const double taxRate2 = 0.4;

	cout << "write the porduct name" << endl;
	cin >> pName;
	cout << "write the product catagory, it must be between 1 and 5" << endl;
	cin >> pCategory;
	while (pCategory < 1 || pCategory>5) {
		cout << "The value must be between 1 and 5, try again" << endl;
		cin >> pCategory;
	}
	switch (pCategory) {
	case 1:
		cout << "Category 1: electronics\n";
		break;
	case 2:
		cout << " catagory 2: Groceries\n";
		break;
	case 3:
		cout << " catagory 3: Clothing\n";
		break;
	case 4:
		cout << "catagory 4 : Stationary\n";
		break;
	case 5:
		cout << " catagory 5 : Miscellaneous\n";
		break;
	default:
		cout << "Invalid input\n";
		break;
	}
	cout << "write the initial inventory quantity" << endl;
	cin >> iQuality;
	cout << "write the product price" << endl;
	cin >> pricePerUnit;
	cout << "write the number of items sold" << endl;
	cin >> itemSold;

	newInventory = iQuality - itemSold;
	totalSalesAmount = itemSold * pricePerUnit;

	if (newInventory < 10) {
		iStatus = "low Inventory";
	}
	else {
		iStatus = "Sufficinet Inventory";
	}

	newInventory < 10 ? iStatus = "low Inventory" : iStatus = "Sufficient";

	cout << "Product Name " << "\t\t\t" << "Price\n";
	for (int i = 0; i < itemSold; i++) {
		cout << pName << "\t\t\t\t" << pricePerUnit << endl;
	}
	cout << "\t\t\t\t total price: " << totalSalesAmount;

	cout << "Preporcessor constant: " << taxRate1;
	cout << "\nConst Variable: " << taxRate2<<endl;

	cout << "Name of the Product: " << pName << endl;
	cout << "Catagory of the product: " << pCategory << endl;
	cout << "Initial inventory" << iQuality << endl;
	cout << "price of the product " << pricePerUnit << endl;
	cout << " total itrms sold " << itemSold << endl;

	cout << "computed new inventory: " << newInventory << " and total sales amaount: " << totalSalesAmount << endl;
	cout << iStatus;
	cout << "helper variabels are: " << totalSalesAmountCopy << endl << iQuality2;
}