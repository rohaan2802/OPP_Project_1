#include<iostream>
#include"Cart.h"
#include"Items.h"
#include<string>

using namespace std;

int main()
{
	Cart obj;
	int choice = 1;
	while (choice != 0)
	{
		cout << "What do y want to do ?\n";
		cout << " [1] Place Order\n";
		cout << " [2] Add item to cart\n";
		cout << " [3] Display cart\n";
		cout << " [4] Search Item\n";
		cout << " [5] Remove an item from cart\n";
		cout << " [6] See your total bill\n";
		cout << " [0] Exit\n\n";
		cout << "Select an option: ";
		cin >> choice;
		switch (choice)
		{
		case 1:
			obj.PlaceOrder();
			system("cls");
			break;
		case 2:
			obj.AddItems();
			system("cls");
			break;
		case 3:
			obj.DisplayItems();
			system("cls");
			break;
		case 4:
			obj.Search();
			system("cls");
			break;
		case 5:
			obj.RemoveItems();
			system("cls");
			break;
		case 6:
			obj.TotalPrice();
			system("cls");
			break;
		}
	}
}