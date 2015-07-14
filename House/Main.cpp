#include <iostream>
#include <string>
#include <Windows.h>
#include "support.h"
#include "definitions.h"
#include "music manager.h"
#include "Intro.h"
#include <math.h>
#include <conio.h>
#include <vector>
#define NOMINMAX

using namespace std;

int main()
{

	audio(); // begin song
	color(); // begin intro
	clear_screen(); 

	while (true)
	{
		//cout << outCost << endl << carpCost1 << endl << carpCost2 << endl << tileCost1 << endl << tileCost2 << endl ;

		cout << "Would you like to remodel inside or outside?(i/o)\n";	// Begin
		cout << "To remove an item from your cart, press r\n";			// Menu
		cout << "(To finish your renovation press \'q\' now) \n\n";		// Tree
		string choice;
		cin >> choice;
		clear_screen();
		if (choice == "q")		// End program sequence
		{
			cout << "You have $" << budget << " left in your budget after all your chosen renovations.\n";
			cout << "Thank you for shopping with the Valda Budget Manager.\n" << endl;
			return 0;
		}

		else if (choice == "r")		// Return the product function
		{							// It is really long
			int temp = 0;			// Like REALLY long


			for (int q = 0; q < 6; ++q) //Check to see if anything is in cart
			{
				if (track[q] == 1)
					temp++;
			}
			if (temp == 0)
			{
				cout << "You did not purchase anything yet!\n\n";
				system("pause");
				clear_screen();
				continue;
			}
			while (1){
				cout << "You currently have the following items in your cart:\n\n";		// Show items in cart
				cout << "#\titem\t\tprice\n";
				cout << "---\t----------\t------\n";
				if (track[1] == 1){
					cout << "1\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "1\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "1\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "1\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "1\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}

				if (track[1] == 1){
					cout << "2\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "2\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "2\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "2\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "2\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}

				if (track[1] == 1){
					cout << "3\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "3\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "3\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "3\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "3\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}
				//cin.clear();				

				cout << "Please select the product you would like to return by line number: ";  //User select product
				cin >> r;
				

				if (r == "1")
				{
					int x = 0;

					for (i = 0; x != 1; ++i)		// Determine which item to return based on user input
					{
						if (track[i] == 2)
						{
							++x;
						}
					}

					if (i == 2)
						budget += outCost;			// Add money back to budget
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;
					i--;
					track[i] = 0;



					cout << "Your remaining budget is now: $" << budget;
					break;
				}


				else if (r == "2")
				{

					int x = 0;
					for (i = 0; x != 2; ++i)		// Determine which item to return based on user input
					{
						if (track[i] == 2)
						{
							x++;
						}
					}

					if (i == 2)						// Return money to budget
						budget += outCost;
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;
					i--;
					track[i] = 0;


					cout << "Your remaining budget is now: $" << budget;
					break;
				}


				else if (r == "3")					// Determine which items to reutrn
				{
					int x = 0;
					for (i = 0; x != 3; ++i)
					{
						if (track[i] == 2)
						{
							x++;
						}

					}
					if (i == 2)					// Return money to budget
						budget += outCost;
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;

					track[i] = 0;


					cout << "Your remaining budget is now: $" << budget;
					break;
				}
				else { 
					cout << "That is not a valid choice! (Hint: choose either \"1\" or \"2\" or \"3\"!)";	// Invalid choice, back to top
					Sleep(2000);
					for (int a = 0; a < 6; ++a)
					{
						if (track[a] == 2)
							track[a] = 1;
						clear_screen();

					}
				}
			}

			string again;

			while (1){
				tempo = 0;						// Determine if there are still things left in the cart
				for (int q = 0; q < 6; ++q)
				{
					if (track[q] != 0)
						tempo++;
				}
				if (tempo == 0)
				{
					cout << "\nYou have successfully returned all of your products!\n";
					system("pause");
					clear_screen();
					break;
				}

				cout << "\n\nWould you like to return another item?(y/n) ";									// Again? sequence
				cin >> again;

				if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
					break;
				else if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
					break;
				else
				{
					cout << "That is not a valid choice, please pick again.";
					continue;
				}
			}
			if (tempo == 0){						
				clear_screen();
				continue;
			}

			if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
			{
				for (int a = 0; a < 6; ++a)		// Set things back to normal
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();

				}
				continue;
			}

			if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
			{
				for (int a = 0; a < 6; ++a)		// Set things back to normal
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();

				}
			}
			while (1){
				clear_screen();
				cout << "You currently have the following items in your cart:\n\n";		//repeat ^^ only actual fix to the bug as of rn
				cout << "#\titem\t\tprice\n";
				cout << "---\t----------\t------\n";
				if (track[1] == 1){
					cout << "1\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "1\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "1\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "1\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "1\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}

				if (track[1] == 1){
					cout << "2\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "2\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "2\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "2\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "2\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}

				cout << "Please select the product you would like to return by line number: ";

				cin >> r;


				if (r == "1")
				{
					int x = 0;

					for (i = 0; x != 1; ++i)
					{
						if (track[i] == 2)
						{
							++x;
						}
					}

					if (i == 2)
						budget += outCost;
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;
					i--;
					track[i] = 0;



					cout << "Your remaining budget is now: $" << budget;
					break;
				}


				else if (r == "2")
				{

					int x = 0;
					for (i = 0; x != 2; ++i)
					{
						if (track[i] == 2)
						{
							x++;
						}
					}

					if (i == 2)
						budget += outCost;
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;
					i--;
					track[i] = 0;


					cout << "Your remaining budget is now: $" << budget;
					break;
				}
				else{
					cout << "That is not a valid choice! (Hint: choose either \"1\" or \"2\"!)";
					Sleep(2000);
					for (int a = 0; a < 6; ++a)
					{
						if (track[a] == 2)
							track[a] = 1;
						clear_screen();

					}

				}
			}

			while (1){
				tempo = 0;
				for (int q = 0; q < 6; ++q)
				{
					if (track[q] != 0)
						tempo++;
				}
				if (tempo == 0)
				{
					cout << "\nYou have successfully returned all of your products!\n";
					system("pause");
					clear_screen();
					break;
				}

				cout << "\n\nWould you like to return another item?(y/n) ";
				cin >> again;

				if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
					break;
				else if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
					break;
				else
				{
					cout << "That is not a valid choice, please pick again.";
					continue;
				}
			}
			if (tempo == 0)
			{
				for (int a = 0; a < 6; ++a)
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();
				}
				continue;
			}
			if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
			{
				for (int a = 0; a < 6; ++a)
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();
				}
			}
			if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
			{
				for (int a = 0; a < 6; ++a)
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();

				}
				continue;
			}

			while (1){
				clear_screen();
				cout << "You currently have the following items in your cart:\n\n";		//repeat ^^ only actual fix to the bug as of rn
				cout << "#\titem\t\tprice\n";
				cout << "---\t----------\t------\n";
				if (track[1] == 1){
					cout << "1\tPaint\t\t" << outCost << endl;
					track[1]++;
				}
				else if (track[2] == 1){
					cout << "1\tCarpet 1\t" << carpCost1 << endl;
					track[2]++;
				}
				else if (track[3] == 1){
					cout << "1\tCarpet 2\t" << carpCost2 << endl;
					track[3]++;
				}
				else if (track[4] == 1){
					cout << "1\tTile 1\t\t" << tileCost1 << endl;
					track[4]++;
				}
				else if (track[5] == 1){
					cout << "1\tTile 2\t\t" << tileCost2 << endl;
					track[5]++;
				}

				cout << "Please select the product you would like to return by line number: ";

				cin >> r;


				if (r == "1")
				{
					int x = 0;

					for (i = 0; x != 1; ++i)
					{
						if (track[i] == 2)
						{
							++x;
						}
					}

					if (i == 2)
						budget += outCost;
					else if (i == 3)
						budget += carpCost1;
					else if (i == 4)
						budget += carpCost2;
					else if (i == 5)
						budget += tileCost1;
					else if (i == 6)
						budget += tileCost2;
					i--;
					track[i] = 0;



					cout << "Your remaining budget is now: $" << budget;
					break;
				}
				else{
					cout << "That is not a valid choice! (Hint: choose \"1\"!)";
					Sleep(2000);
					for (int a = 0; a < 6; ++a)
					{
						if (track[a] == 2)
							track[a] = 1;
						clear_screen();

					}

				}
			}

			while (1){
				tempo = 0;
				for (int q = 0; q < 6; ++q)
				{
					if (track[q] != 0)
						tempo++;
				}
				if (tempo == 0)
				{
					cout << "\nYou have successfully returned all of your products!\n";
					system("pause");
					clear_screen();
					break;
				}

				cout << "\n\nWould you like to return another item?(y/n) ";
				cin >> again;

				if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
					break;
				else if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
					break;
				else
				{
					cout << "That is not a valid choice, please pick again.";
					continue;
				}
			}
			if (tempo == 0){
				for (int a = 0; a < 6; ++a)
				{
					if (track[a] == 2)
						track[a] = 1;
					clear_screen();
				}
				continue;
			}
				if (again == "y" || again == "Y" || again == "yes" || again == "Yes" || again == "YES")
				{
					for (int a = 0; a < 6; ++a)
					{
						if (track[a] == 2)
							track[a] = 1;
						clear_screen();

					}
					cout << "You have returned all the products!\n\n\n";
					clear_screen();
					continue;
				}
				if (again == "n" || again == "N" || again == "no" || again == "No" || again == "nO" || again == "NO")
				{
					for (int a = 0; a < 6; ++a)
					{
						if (track[a] == 2)
							track[a] = 1;
						clear_screen();

					}
					continue;
				}

		}


			/*******************************************************************/
			/***                        Begin Outdoors                       ***/
			/*******************************************************************/


			else if (choice == "o" || choice == "outside" || choice == "Outside" || choice == "O" || choice == "OUTSIDE") //outdoor paint
			{
				clear_screen();
				if (track[1] == 1){
					cout << "You have already purchased this item! To make another selection, please first return it.\n\n";	//Check to see if item already purchased
					system("pause");
					clear_screen();
					continue;
				}
				cout << "You will need to paint " << outPaint << " square feet.\n\n";
				Sleep(1500);
				cout << "To accomplish this you will need " << paintCans << " cans of paint.\n\n";
				Sleep(1500);
				cout << "The cost to paint the house will be $" << outCost << "." << endl << endl;
				Sleep(1500);
				cout << "Would you like to proceed with the purchase?(y/n) ";
				string buy;
				cin >> buy;
				if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")	// Purchase sequence
				{
					clear_screen();
					budget -= outCost;
					if (budget < 0)		// Check to see if over budget
					{
						cout << "You are over your budget!\n\n";
						budget += outCost;
						cout << "You still have $" << budget << " in your budget, however you cannot purchase more.\n\n";
						system("pause");
						clear_screen();
						continue;
					}
					track[1] = 1;
					cout << "Congratulations! \nYou have successfully purchased paint for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
					//cout << "\nPress any key to continue...";
					//cin.ignore('\n'); //clears cache for _kbhit
					system("pause");
					clear_screen();
					continue;
				}
				else
				{
					clear_screen();
					cout << "Are you sure you would like to clear your cart?(y/n) ";	// Empty cart sequence
					cin >> buy;
					if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
					{
						clear_screen();
						cout << "Your cart has been successfuly cleared!" << endl;
						system("pause");
						clear_screen();
						continue;
					}
					else if (buy == "n" || buy == "No" || buy == "N" || buy == "NO" || buy == "no")	//Purchase item if anything but yes
					{
						clear_screen();
						budget -= outCost;
						if (budget < 0)
						{
							cout << "You are over your budget!\n\n";
							budget += outCost;
							cout << "You still have $" << budget << " in your budget.\n\n";
							clear_screen();
							continue;
						}
						track[1] = 1;
						cout << "Congratulations! \nYou have successfully purchased paint for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
						//cout << "\nPress any key to continue...";
						//cin.ignore('\n'); //clears cache for _kbhit
						system("pause");
						clear_screen();
						continue;
					}
					else
					{
						clear_screen();		// Invalid choice sequence
						cout << "Error 13: Invalid Choice!\nPlease enter another choice(Hint: pick either \'y\' or \'n\')\n" << endl;
						Sleep(2000);
						continue;
					}
				}

			}




			/*******************************************************************/
			/***                        Begin Indoors                        ***/
			/*******************************************************************/





			else if (choice == "i" || choice == "I" || choice == "inside" || choice == "Inside" || choice == "INSIDE") //inside renovation
			{
				clear_screen();

				while (1){
					cout << "Would you like to remodel: \nthe living room and bedrooms(carpet) \nor the kitchen and dining room(tiles)\n\n(c/t): ";		// Select carpet or tile
					string floor;
					cin >> floor;
					if (floor == "carpet" || floor == "Carpet" || floor == "c" || floor == "C" || floor == "CARPET")
					{

						clear_screen();

						if (track[2] == 1 || track[3] == 1){		// Check to see if item already purchased
							cout << "You have already purchased an item in this catagory! \nTo make another selection, please first return it.\n\n";
							system("pause");
							clear_screen();
							break;
						}




						cout << "Please select the carpet of your choice for your house by number:\n";		// Display info
						cout << "---\t--------\n";
						cout << "#\tCost/sq.ft\n";
						cout << "1\t$18.25\n2\t$29.95\n\n";
						string carp;
						cin >> carp;
						clear_screen();
						if (carp == "1")
						{
							cout << "The area for the rooms that require carpet is " << carpArea << " square yards\n" << endl;
							Sleep(1700);
							cout << "The carpet comes in rolls of 5 square yards\n\n";
							Sleep(1700);
							cout << "The cost would be $" << carpCost1 << endl << endl;
							Sleep(1700);
							cout << "Would you like to buy this carpet?(y/n) ";
							string buy;
							cin >> buy;
							if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")	// Buy item
							{
								clear_screen();
								budget -= carpCost1;
								if (budget < 0)
								{
									cout << "You are over your budget!\n\n";		// Check to see if over budget
									budget += carpCost1;
									cout << "You still have $" << budget << " in your budget, however you cannot purchase more.\n\n";
									system("pause");
									clear_screen();
									break;
								}
								track[2] = 1;
								cout << "Congratulations! \nYou have successfully purchased carpet for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
								//cout << "\nPress any key to continue...";
								//cin.ignore('\n'); //clears cache for _kbhit
								system("pause");
								clear_screen();
								break;
							}
							else
							{
								clear_screen();
								cout << "Are you sure you would like to clear your cart?(y/n) ";		// Clear cart sequence
								cin >> buy;
								if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
								{
									clear_screen();
									cout << "Your cart has been successfuly cleared!" << endl;
									system("pause");
									clear_screen();
									break;
								}
								else if (buy == "n" || buy == "No" || buy == "N" || buy == "NO" || buy == "no")		// Buy if no is chosen
								{
									clear_screen();
									budget -= carpCost1;
									if (budget < 0)
									{
										cout << "You are over your budget!\n\n";
										budget += carpCost1;
										cout << "You still have $" << budget << " in your budget.\n\n";
										clear_screen();
										break;
									}
									track[2] = 1;
									cout << "Congratulations! \nYou have successfully purchased carpet for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
									//cout << "\nPress any key to continue...";
									//cin.ignore('\n'); //clears cache for _kbhit
									system("pause");
									clear_screen();
									break;
								}
								else
								{
									clear_screen();		// Invalid char - string sequence
									cout << "Error 20: Invalid Choice!\nPlease enter another choice(Hint: pick either \'c\' or \'t\')\n" << endl;
									Sleep(2000);
									clear_screen();
									continue;
								}
							}
						}
						else if (carp == "2")		// Same as above, different values
						{
							cout << "The area for the rooms that require carpet is " << carpArea << " square yards\n" << endl;
							Sleep(1700);
							cout << "The carpet comes in rolls of 5 square yards\n\n";
							Sleep(1700);
							cout << "The cost would be $" << carpCost2 << endl << endl;
							Sleep(1700);
							cout << "Would you like to buy this carpet?(y/n) ";
							string buy;
							cin >> buy;
							if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
							{
								clear_screen();
								budget -= carpCost2;
								if (budget < 0)
								{
									cout << "You are over your budget!\n\n";
									budget += carpCost2;
									cout << "You still have $" << budget << " in your budget, however you cannot purchase more.\n\n";
									system("pause");
									clear_screen();
									break;
								}
								track[3] = 1;
								cout << "Congratulations! \nYou have successfully purchased carpet for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
								//cout << "\nPress any key to continue...";
								//cin.ignore('\n'); //clears cache for _kbhit
								system("pause");
								clear_screen();
								break;
							}
							else
							{
								clear_screen();
								cout << "Are you sure you would like to clear your cart?(y/n) ";
								cin >> buy;
								if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
								{
									clear_screen();
									cout << "Your cart has been successfuly cleared!" << endl;
									system("pause");
									clear_screen();
									break;
								}
								else if (buy == "n" || buy == "No" || buy == "N" || buy == "NO" || buy == "no")
								{
									clear_screen();
									budget -= carpCost2;
									if (budget < 0)
									{
										cout << "You are over your budget!\n\n";
										budget += carpCost2;
										cout << "You still have $" << budget << " in your budget.\n\n";
										clear_screen();
										break;
									}
									track[3] = 1;
									cout << "Congratulations! \nYou have successfully purchased carpet for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
									//cout << "\nPress any key to continue...";
									//cin.ignore('\n'); //clears cache for _kbhit
									system("pause");
									clear_screen();
									break;
								}
								else
								{
									clear_screen();
									cout << "Error 15: Invalid Choice!\nPlease enter another choice(Hint: pick either \'y\' or \'n\')\n" << endl;
									Sleep(2000);
									continue;
								}
							}
						}
						else
						{
							clear_screen();
							cout << "Error 16: Invalid Choice!\nPlease enter another choice(Hint: pick either \'1\' or \'2\')\n" << endl;
							Sleep(2000);
							continue;
						}
					}
					else if (floor == "tiles" || floor == "Tiles" || floor == "t" || floor == "T" || floor == "TILES")		// Same as above, different variables and values
					{
						clear_screen();

						if (track[4] == 1 || track[5] == 1){
							cout << "You have already purchased an item in this catagory! \nTo make another selection, please first return it.\n\n";
							system("pause");
							clear_screen();
							break;
						}

						cout << "Please select the tile of your choice for your house by number:\n";
						cout << "---\t--------\n";
						cout << "#\tCost\n";
						cout << "1\t$29.25\n2\t$38.95\n\n";
						string carp;
						cin >> carp;
						if (carp == "1")
						{
							clear_screen();

							cout << "The area for the rooms that require tiles is " << tileArea << " square feet\n" << endl;
							Sleep(1700);
							cout << "The tiles comes in boxes of 12 one foot by one foot tiles\n\n";
							Sleep(1700);
							cout << "The cost would be $" << tileCost1 << endl << endl;
							Sleep(1700);
							cout << "Would you like to buy this tile?(y/n) ";
							string buy;
							cin >> buy;
							if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
							{
								clear_screen();
								budget -= tileCost1;
								if (budget < 0)
								{
									cout << "You are over your budget!\n\n";
									budget += tileCost1;
									cout << "You still have $" << budget << " in your budget, however you cannot purchase more.\n\n";
									system("pause");
									clear_screen();
									break;
								}
								track[4] = 1;
								cout << "Congratulations! \nYou have successfully purchased tile for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
								//cout << "\nPress any key to continue...";
								//cin.ignore('\n'); //clears cache for _kbhit
								system("pause");
								clear_screen();
								break;
							}
							else
							{
								clear_screen();
								cout << "Are you sure you would like to clear your cart?(y/n) ";
								cin >> buy;
								if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
								{
									clear_screen();
									cout << "Your cart has been successfuly cleared!" << endl;
									system("pause");
									clear_screen();
									break;
								}
								else if (buy == "n" || buy == "No" || buy == "N" || buy == "NO" || buy == "no")
								{
									clear_screen();
									budget -= tileCost1;
									if (budget < 0)
									{
										cout << "You are over your budget!\n\n";
										budget += tileCost1;
										cout << "You still have $" << budget << " in your budget.\n\n";
										clear_screen();
										break;
									}
									track[4] = 1;
									cout << "Congratulations! \nYou have successfully purchased carpet for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
									//cout << "\nPress any key to continue...";
									//cin.ignore('\n'); //clears cache for _kbhit
									system("pause");
									clear_screen();
									break;
								}
								else
								{
									clear_screen();
									cout << "Error 17: Invalid Choice!\nPlease enter another choice(Hint: pick either \'y\' or \'n\')\n" << endl;
									Sleep(2000);
									continue;
								}
							}
						}
						else if (carp == "2")
						{
							cout << "The area for the rooms that require tiles is " << tileArea << " square feet\n" << endl;
							Sleep(1700);
							cout << "The carpet comes in boxes of 12 one by one tiles\n\n";
							Sleep(1700);
							cout << "The cost would be $" << tileCost2 << endl << endl;
							Sleep(1700);
							cout << "Would you like to buy this tile?(y/n) ";
							string buy;
							cin >> buy;
							if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
							{
								clear_screen();
								budget -= tileCost2;
								if (budget < 0)
								{
									cout << "You are over your budget!\n\n";
									budget += tileCost2;
									cout << "You still have $" << budget << " in your budget, however you cannot purchase more.\n\n";
									system("pause");
									clear_screen();
									break;
								}
								track[5] = 1;
								cout << "Congratulations! \nYou have successfully purchased tiles for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
								//cout << "\nPress any key to continue...";
								//cin.ignore('\n'); //clears cache for _kbhit
								system("pause");
								clear_screen();
								break;
							}
							else
							{
								clear_screen();
								cout << "Are you sure you would like to clear your cart?(y/n) ";
								cin >> buy;
								if (buy == "y" || buy == "Yes" || buy == "Y" || buy == "YEs" || buy == "YES" || buy == "YeS" || buy == "yEs" || buy == "yES")
								{
									clear_screen();
									cout << "Your cart has been successfuly cleared!" << endl;
									system("pause");
									clear_screen();
									break;
								}
								else if (buy == "n" || buy == "No" || buy == "N" || buy == "NO" || buy == "no")
								{
									clear_screen();
									budget -= tileCost2;
									if (budget < 0)
									{
										cout << "You are over your budget!\n\n";
										budget += tileCost2;
										cout << "You still have $" << budget << " in your budget.\n\n";
										clear_screen();
										break;
									}
									track[5] = 1;
									cout << "Congratulations! \nYou have successfully purchased tiles for your renovation!\nYou now have $" << budget << " left in your budget.\n\n";
									//cout << "\nPress any key to continue...";
									//cin.ignore('\n'); //clears cache for _kbhit
									system("pause");
									clear_screen();
									break;
								}
								else
								{
									clear_screen();
									cout << "Error 18: Invalid Choice!\nPlease enter another choice(Hint: pick either \'y\' or \'n\')\n" << endl;
									Sleep(2000);
									continue;
								}
							}
						}
						else	// Possible error messages to display
						{
							clear_screen();
							cout << "Error 19: Invalid Choice!\nPlease enter another choice(Hint: pick either \'1\' or \'2\')\n" << endl;
							Sleep(2000);
							continue;
						}
					}
					else
					{
						clear_screen();
						cout << "Error 12: Invalid Choice!\nPlease enter another choice(Hint: pick either \'c\' or \'t\')\n" << endl;
						Sleep(2000);
						clear_screen();
						continue;
					}
				}
			}
			else
			{
				clear_screen();
				cout << "Error 11: Invalid Choice!\nPlease enter another choice(Hint: pick either \'i\' or \'o\')\n" << endl;
				Sleep(2000);
				clear_screen();
				continue;
			}

		}



		return 0;
	}
