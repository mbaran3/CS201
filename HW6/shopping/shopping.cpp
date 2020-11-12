#include<map>
#include<iostream>
#include<string>
#include<sstream>
#include<algorithm>

struct Cart {

	double TotalPrice = 0;
	int Units = 0;

};
struct Record {

	double UnitPrice = 0;
	int Units = 0;
	std::string discription;
};


void AddtoCart(std::map < std::string, Record>& Record,
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

			Record[item].Units = Record[item].Units - UnitstoBuy;
			Cart[item].Units = UnitstoBuy;
			Cart[item].TotalPrice = Record[item].UnitPrice * UnitstoBuy;
			
			break;
		}
	}
	std::cout << "You now have " << Cart[item].Units << " of " << "item"
		<< "For a total price of " << Cart[item].TotalPrice << std::endl;
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
			std::cout << "\n";
		});
}
void PrintCart(std::map<std::string, Cart> mapCart) {

	std::cout << "In your cart you have\n";

	std::for_each(mapCart.begin(), mapCart.end(),
		[](const std::pair<std::string, Cart> myCart) {

			std::cout << myCart.second.Units << " " << " For a total of"
				<< " " << myCart.second.TotalPrice << std::endl;
		});
	int carttotal=0;
	std::for_each(mapCart.begin(), mapCart.end(),
		[&](const std::pair<std::string, Cart> myCart) {
			carttotal = myCart.second.TotalPrice + carttotal;
		});
	std::cout << "Your Carts Total is " << carttotal << std::endl;
}


int main() {
	bool run = true;
	std::string commands;
	std::map < std::string, Cart> Cart;
	std::map < std::string, Record> Items;

	Items["Mustard"].Units = 1000, Items["Mustard"].UnitPrice = 3.39,
		Items["Mustard"].discription = "Yellow Mustard";

	Items["Apple"].Units = 10000, Items["Apple"].UnitPrice = 0.99,
		Items["Apple"].discription = "Red Apples";

	Items["Keyboard"].Units = 25, Items["Keyboard"].UnitPrice = 99.99,
		Items["Keyboard"].discription = "RGB Gaming Keyboard";

	Items["Coffee"].Units = 250, Items["Coffee"].UnitPrice = 14.99,
		Items["Coffee"].discription = "A Pound of Coffee Grounds";
		
	
	Items["Soda"].Units = 500, Items["Soda"].UnitPrice = 11.99,
		Items["Soda"].discription = "A Soft Drink";



	
	
	while (run) {
	system("CLS");
	PrintStore(Items);
		std::cout << "Type the name of something if you want to buy it type Cart to view Cart"
		<< " Type Leave to Leave the Store" << std::endl;
	std::getline(std::cin, commands);


	
	if (commands == "Leave")
		return 0;
	else if (commands == "Cart") {
		std::string str;
		PrintCart(Cart);
		std::cout << "Press Enter to Continue\n";
		std::getline(std::cin, str);
	}


	int counter = Items.size();
	std::for_each(Items.begin(), Items.end(),
		[&](const std::pair<std::string, Record> myPair)
		{
			counter--;
			if (commands == myPair.first) {
				std::string str;
				AddtoCart(Items, Cart, commands);
				std::cout << "Press Enter to Continue";
				std::getline(std::cin, str);
			}
			
			if (counter == 0) {
				std::cout << "Invalid Command\n";
				std::cout << "Press Enter to Continue";
			}
				

		});
	}

	return 0;
}