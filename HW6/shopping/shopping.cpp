#include<map>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>


struct Record {

	double UnitPrice;
	int Units;
	std::string discription;
};
struct Cart {

	double TotalPrice;
	int Units;

};

void AddtoCart(std::map < std::string, Record> Record,
	std::map<std::string, Cart>& Cart, std::string item) {

	bool check = false;

	while (!check) {
		int UnitstoBuy;
		std::string str;
		std::cout << "How many " << item << " would you like to buy\n";
		std::getline(std::cin, str);
		std::stringstream in(str);
		in >> UnitstoBuy;
		if (!in)
			std::cout << "Please Enter a Number";
		else {
			Cart[item].Units = UnitstoBuy;
			Cart[item].TotalPrice = Record[item].UnitPrice * UnitstoBuy;
			break;
		}
	}
	std::cout << "You now have " << Cart[item].Units << " of " << "item"
		<< "For a total price of " << Cart[item].TotalPrice;
	return;
}

void AddtoRecord(std::string itemname, std::map<std::string, Record>& Items) {
	bool check = false;

	std::cout << "Enter the Unit Price\n";
	while (!check) {

		double UnitPrice;
		std::string str;
		std::getline(std::cin, str);
		std::stringstream in(str);
		in >> UnitPrice;
		if (!in)
			std::cout << "Please Enter a Number\n";
		else {
			Items[itemname].UnitPrice = UnitPrice;
			break;
		}
	}

	std::cout << "Enter the number of Units on hand\n";
	while (!check) {

		int Units;
		std::string str;
		std::getline(std::cin, str);
		std::stringstream in(str);
		in >> Units;
		if (!in)
			std::cout << "Please Enter a Number\n";
		else {
			Items[itemname].Units = Units;
			break;
		}
	}

	while (!check) {

		std::string str;
		std::cout << "Enter a short Discription\n";
		std::getline(std::cin, str);
		Items[itemname].discription = str;
		break;
	}
	return;
}

void PrintStore(std::map< std::string, Record>& Store) {

	std::for_each(Store.begin(), Store.end(),
		[](const std::pair<std::string, Record> myStore) {
			std::cout << myStore.first << " There are " << myStore.second.Units << " in stock"
				<< " for " << myStore.second.UnitPrice << "\n";
			std::cout << "Item discription: ";
			std::cout << myStore.second.discription << std::endl;
		});
}


int main() {
	
	std::map < int, Cart> Cart;
	std::map < std::string, Record> Items;
	AddtoRecord("Mustard", Items);
	PrintStore(Items);
	std::cout << "Type the name of something if you want to buy it"
		<< "Type Leave to Leave the Store";

	return 0;
}