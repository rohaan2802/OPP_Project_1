#include "Cart.h"

Cart::Cart() 
{
	cart_size = 0;
	total_bill = 0;
}

void Cart::AddItems()
{
	Items item;
	Display(item);
	my_cart[cart_size] = item;
	cart_size++;
	cout << "\nItem Added to Cart Successfuly!\n\n";
	system("pause");
}
void Cart::DisplayItems()
{
	cout << "\nCART\n\n";
	if (cart_size == 0)
	{
		cout << "Your Cart is Empty!\n\n";
		system("pause");
	}
	else
		cout << "NO.\t\tSKU\t\tNAME\t\tCATEGORY\t\tPRICE\n\n";
	for (int i = 0; i < cart_size; i++)
	{
		cout << i + 1 << "\t\t" << my_cart[i].SKU << "\t\t" << my_cart[i].name << "\t\t" << my_cart[i].category << "\t\t" << my_cart[i].s_price << endl;
	}
	system("pause");
}
void Cart::RemoveItems()
{
	int x;
	cout << "\n\nREMOVE AN ITEM\n\n";
	cout << "NO.\t\tSKU\t\tNAME\t\tCATEGORY\t\tPRICE\n\n";
	for (int i = 0; i < cart_size; i++)
	{
		cout << i + 1 << "\t\t" << my_cart[i].SKU << "\t\t" << my_cart[i].name << "\t\t" << my_cart[i].category << "\t\t" << my_cart[i].s_price << endl;
	}
	cout << "\nWhich item do you want to remove? ";
	cin >> x;

	if (x >= 1 && x <= cart_size)
	{
		for (int i = x - 1; i < cart_size; i++)
		{
			my_cart[i] = my_cart[i + 1];
		}

		cart_size--;

		cout << "Item removed successfully.\n";
	}
	else
	{
		cout << "\nInvalid item number. Removal failed.\n\n";
	}
	system("pause");
}
void Cart::TotalPrice()
{
	float tt=0;
	for (int i = 0; i < cart_size; i++)
	{
		tt += my_cart[i].s_price;
	}
	total_bill = tt;
	cout << "\nYour total Bill is: " << tt << endl << endl;
	system("pause");
}
void Cart::Search()
{
	string prod;
	int x;
	cout << "\nWhich category of product you want to search in ?\n";
	cout << "\nCATEGORIES\n\n";
	cout << "[1] FISH & MEAT\n";
	cout << "[2] FROZEN FOOD\n";
	cout << "[3] LIQUOR & TOBACCO\n";
	cout << "[4] BAKERY\n";
	cout << "[5] BABY & TODDLER\n";
	cout << "[6] FRESH PRODUCE\n";
	cout << "[7] GROCERIES\n";
	cout << "[8] HOUSEHOLD & HOMECARE\n";
	cout << "[9] PERSONAL CARE\n";
	cout << "[10] PHARMA & WELLNESS\n\n";
	cout << "Choose a Category: ";
	cin >> x;
	if (x >= 1 && x <= 10)
	{
		cout << "Enter the product name: ";
		cin >> prod;
		if (x == 1)
		{

		}
	}
	else
	{
		cout << "\nInvalid Selection. Choose Again.\n\n";
	}
}
void Cart::PlaceOrder()
{
	if (cart_size != 0)
	{
		cout << "\nOrder Placed!!!\n";
		cout << "Invoice Generated\n\n";
		ofstream z1("Invoice.txt", ios::app);
        cout << "NO.\t\tSKU\t\tNAME\t\tCATEGORY\t\tPRICE\n\n";
			for (int i = 0; i < cart_size; i++)
			{
				cout << i + 1 << "\t\t" << my_cart[i].SKU << "\t\t" << my_cart[i].name << "\t\t" << my_cart[i].category << "\t\t" << my_cart[i].s_price << endl;
				z1 << i + 1 << ',' << my_cart[i].SKU << ',' << my_cart[i].name << ',' << my_cart[i].category << ',' << my_cart[i].s_price << ',';
			}
			TotalPrice();
			z1 << total_bill << endl;
	}
	else
	{
		cout << "\nYour Cart is empty!\n\n";
	}
	system("pause");
}
Cart::~Cart(){}