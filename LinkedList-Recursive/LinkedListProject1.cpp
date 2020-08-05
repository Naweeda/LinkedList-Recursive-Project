//============================================================================
// Name        : LinkedListProject1.cpp
// Author      : Naweeda
// Version     : Windows
// Copyright   : Your copyright notice
// Description : LinkedList With Different Functions
//============================================================================

#include <iostream>
#include "LinkedList.hpp"
#include "utilities.hpp"
#include "Bagel.hpp"
#include "iomanip"
using namespace std;

int main() {
	char userOption;
	bool goOn = true;
	LinkedList myList;

	while(goOn)
	{
		cout << "Here is the menu, choose one of them: " << endl;
		cout << "1: Random Bagels." << endl;
		cout << "2: Printing all the Bagels. " << endl;
		cout <<	"3: Deleting all the Bagels. " << endl;
		cout << "4: Printing the Total Bagel Inventory." << endl;
		cout << "5: Finding Last Node." << endl;
		cout << "6: Exiting." << endl;


		cout << "Select One Of Them:" << endl;
		cin >> userOption;
		cin.clear();
		cin.ignore(32768, '\n');

		//Switch Statement
		switch(userOption)
		{
		case '1': {

			Bagel *aBagel = new Bagel();
			aBagel->setFlavor(getRandomString(2, 8));
			aBagel->setOnHand(getRandomInt(2, 3));
			aBagel->setCost(getRandomDouble(9, 4, 4));
			aBagel->setPrice(getRandomDouble(1, 3, 2));
			myList.push_back(aBagel);

			Bagel *bBagel = new Bagel();
			bBagel->setFlavor(getRandomString(2, 8));
			bBagel->setOnHand(getRandomInt(2, 3));
			bBagel->setCost(getRandomDouble(9, 4, 4));
			bBagel->setPrice(getRandomDouble(1, 3, 2));
			myList.push_back(bBagel);

			Bagel *cBagel = new Bagel();
			cBagel->setFlavor(getRandomString(2, 8));
			cBagel->setOnHand(getRandomInt(2, 3));
			cBagel->setCost(getRandomDouble(9, 4, 4));
			cBagel->setPrice(getRandomDouble(1, 3, 2));
			myList.push_back(cBagel);

			Bagel *dBagel = new Bagel();
			dBagel->setFlavor(getRandomString(2, 8));
			dBagel->setOnHand(getRandomInt(2, 3));
			dBagel->setCost(getRandomDouble(9, 4, 4));
			dBagel->setPrice(getRandomDouble(1, 3, 2));
			myList.push_back(dBagel);

			Bagel *eBagel = new Bagel();
			eBagel->setFlavor(getRandomString(2, 8));
			eBagel->setOnHand(getRandomInt(2, 3));
			eBagel->setCost(getRandomDouble(9, 4, 4));
			eBagel->setPrice(getRandomDouble(1, 3, 2));
			myList.push_back(eBagel);

			cout << endl << "There are some Bagels are created, Enter Option 2 to print the Bagels." << endl;

			break;

		}
		case '2': {
			if(myList.getHead() == nullptr)
			{
				cout << "Error, try again there are no bagel to print." << endl;
			}
			else
			{
				cout << "Here are the Bagels: " << endl;
				cout << left << setw(15) << "Flavor"
						     << setw(19) << " Inventory:"
							 << setw(14) << " Cost: "
							 << setw(10) << " Price " << endl;

				myList.PrintListR(myList.getHead());
			}
			break;
		}
		case '3': {
			cout << "Deleting all the Dounts from the List." << endl;
			myList.delete_list();
			break;
		}
		case '4': {

			cout << "The total inventory is: " << myList.CountInventory(myList.getHead()) << endl;
			if(myList.getHead() == nullptr)
			{
				cout << "There are no Bagels in the List." << endl;
			}
			else
			{}
			break;

		}
		case '5': {
			if(myList.getHead() == nullptr)
			{
				cout << "There are no Bagels in the list." << endl;
			}
			else
			{
				cout << "The Flavor of the bagel at the end of the list is: " << myList.FindLastNode(myList.getHead())->data->getFlavor() << endl;
			}
			break;

		}
		case '6': {
			cout << endl << "Program ending, Have a nice day." << endl;
			return 0;

			goOn = false;
			break;

		}
		default: {
			cout << "Error, not valid." << endl;

		}// default

		}// swith
	}//while

}//main
