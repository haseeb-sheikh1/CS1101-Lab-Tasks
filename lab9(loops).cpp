#include<iostream>
#include<iomanip>
#include<windows.h>
#include<conio.h>
#include<cstdlib>
#include<string>
using namespace std;
int main (){
	//                                                        13, JANUAURY 2025
	//                                                              LAB 9
	//                                                       TASKS OF WHILE LOOP
    //                                         PROGRAM NUMBER 1 (TO PRINT NUMBERS FROM 1 TO N)
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    /*
	int i=1; // COUNTER.
	int n;
    cout << "Please Enter Any Number: ";
    cin >> n;
    while (i<=n){
    	cout <<setfill(' ') << setw(2)<<i;
    	i++; // COUNTER INCREMENT.
	}
	
	//                             PROGRAM # 2 (MULTIPLICATION TABLE OF A NUMBER ENTERED BY THE USER)
	int num;
	int i =1;// COUNTER.
	cout << "Please Enter Any Number of Your Choice: ";
	cin >> num;
	while (i <= 10){ // THE PROGRAM RUNS UNTIL COUNTER REACHES 10.
		cout <<setfill(' ')<<setw(5) << num <<" * "<<i<<" = "<<num*i<<endl;
		i++; // COUNTER INCREMENT.
	}
	
	//                            PROGRAM # 3 (TO REPEATEDLY ASK THE USER TO INPUT A POSITIVE NUMBER)
	int num;
	cout << "Enter any positive number! :";
	cin >> num;
	while (num<0){ // WHILE RUNS ONLY IF NUMBER IS LESS THAN ZERO.
		SetConsoleTextAttribute(h,4); // TO CHANGE THE FONT COLOUR ON CONSOLE.
		cout << "Error! You entered a negative numeber. Please Enter a Positive Number:";
		cin >> num;
	}
	SetConsoleTextAttribute(h,7);
	cout << "You entered " << num ;// EXITS THE LOOP IF THE NUMBER IS POSITIVE.
    
    
    //                                 PROGRAM # 4 (SUM OF FIRST FIVE NATURAL NUMBERS.)
    int sum =0; // INITIALIZED TO AVOID MAXIMUM PRECISION.
    int i=1; // COUNTER.
    while (i<=5){
 	 sum+=i; // ADD THE CURRENT NUMBER TO SUM.
	  i++;  // INCREMENT THE SUM.
    } 
    cout <<"The sum of first five natural numbers is: "<<sum;
*/

	//                                  PROGRAM # 5 (MENU DRIVEN PROGRAM FOR A BANKING SYSTEM)
	// PREDEFINED PASSWORD AND BALANCE.
    int builtInPassword = 1234;
	const int balance=1000;
	int password; // VARIABLE DECLARATION.
	double deposit,withdraw;
	int choice;
	jump_here : // FOR GOTO STATEMENT.
	cout << setfill(' ')<<right<<setw(67)<<"CONSOLE BANKING APP"<<endl;
    cout << "Please Enter Your 4 Digit Password: " ; // ACCESS AUTHENTICATIOM
	cin >> password;
	if(password == builtInPassword){ // IF THE PASSWORD IS CORRECT.
		SetConsoleTextAttribute(h,2);
		cout << "Access Granted!"<<endl;
        while (true){
	     SetConsoleTextAttribute(h,7); // TO CHANGE THE FONT COLOUR ON CONSOLE.
	     cout <<setfill(' ') <<right<<setw(62)<< "MAIN MENU" <<endl;
	     cout << "Press the number to access the required service from the options given below."<< endl;
	     cout << "Press 1 to deposit money"<< endl; // GIVEN CHOICES.
	     cout << "press 2 to check balance"<< endl;
	     cout << "press 3 to withdraw money" << endl;
	     cout << "press 4 to exit" << endl;
		 cout << "which service do you want:";	
	     cin >> choice;
       
	        switch (choice){
	         case 1:
		       cout << "You choose to deposit money. Now Enter how much you want to deposit ";
		       cin >> deposit;
		       system("cls");  // TO CLEAR THE SCREEN.
		       cout << setfill(' ')<<right<<setw(67)<<"CONSOLE BANKING APP"<<endl;
		       cout << "Your new balance is $" <<balance+deposit<<endl;
		       cout << "Press any key to clear Screen: ";
		       getch(); // TO CLEAR SCREEN INCASE USER WANTS TO ACCESS AGAIN.
		       system("cls");
	           break;
	        
	         case 2:
	           system("cls");
	           cout << setfill(' ')<<right<<setw(67)<<"CONSOLE BANKING APP"<<endl;
	           cout << "Your balance is "<<"$" << balance<<endl;
	           cout << "Press any key to clear Screen: ";
		       getch();
		       system("cls");
		       break; 
	         case 3:
	           system("cls");
	           cout << setfill(' ')<<right<<setw(67)<<"CONSOLE BANKING APP"<<endl;
	           cout << "How much money do you want to withdraw?";
		       cin >> withdraw;	
		       if (withdraw<=balance){
		          cout << "Your reamaining balance is" << balance-withdraw<<endl;
		          cout << "Press any key to clear Screen: ";
		          getch();
		          system("cls");
	            }
		       else {
		       	  system("cls");
		       	  cout << setfill(' ')<<right<<setw(67)<<"CONSOLE BANKING APP"<<endl;
		 	      cout << "You Have insufficient balance!" << endl;
		 	      cout << "Press any key to clear Screen: ";
		          getch();
		          system("cls");
		        }
		        break;
	         case 4 :
	   	        cout << "Thank you for using our ATM" << endl;
	            return 0; 
			}
	    }
    }
    else { // INCASE THE INPUT PASSWORD IS NOT CORRECT.
    	SetConsoleTextAttribute(h,4); // TO CHANGE THE COLOUR OF ERROR ON CONSOLE.
    	cout << "Access Denied. incorrect Password" << endl;
    	SetConsoleTextAttribute(h,7);
    	cout <<"Press Any Key To Try Again: ";
    	getch();
    	system("cls"); // TO CLEAR THE SCREEN.
    	goto jump_here; // GOTO STATMENT TO JUMP ON A SPECIFIC LINE OF CODE.
	}
	/*
   //                                                    TASKS OF DO-WHILE LOOP
   //                  PROGRAM # 1 ( REPEATEDLY ASKS FOR PASSWORD IF THE PASSWORD IS WRONG UNTIL THE USER CORRECTS IT.)
   // PRE-DEFINED PASSWORD.
   int built_in_password = 1234;
   // VARIABLE DECLARATION.
   int i = 0; // COUNTER.
   int password;
   do {
  	  // USER-INPUT.
  	  i++; // COUNTER JUST TO PRINT TRY AGAIN IN MORE THAN ONE ITERATIONS.
  	  if (i>=2){
	      cout << setfill(' ') << right << setw(69) << "LOGIN SYSTEM" << endl;
	      cout << "Try Again!" << endl; 
          cout << "Enter Password: ";
	      cin >> password;
	      system("cls"); // TO CLEAR SCREEN.
	   }
	   else { // IF THERE IS ONLY ONE ITERATION. 
	   	  cout << setfill(' ') << right << setw(69) << "LOGIN SYSTEM" << endl;
	      cout << "Enter Password: ";
	      cin >> password;
	      system("cls");
	   	}
    }
    while (password != built_in_password);
    
    
    //                                          PROGRAM # 2 ( RESTURANT'S MENU.)
	// PREDEFINED ITEM PRICES.
	  // BREAKFAST.
      double RsAndaParatha = 40;
      double RsNanChanay = 60;
      double RsSiriPaye = 150;
      double RsTea = 15;
      // LUNCH.
      double RsChickenKarahi = 1050;
      double RsMuttonKarahi = 1800;
      double RsEggFriedRice = 450;
      double RsBBQ = 1050;
      // DINNER.
      
      double RsSaji = 800;
    // VARIABLE DECLARATION.
    string name;
	int menu, subMenu;
	// QUANTITY OF ITEMS.
	double purchase,quantityOfAndaParatha,quantityOfNanChanay,quantityOfSiriPaye,quantityOfTea;
    double quantityOfChickenKarahi,quantityOfMuttonKarahi,quantityOfEggFriedRice,quantityOfBBQ,quantityOfSaji;
    double toBePaid=purchase, discountRate=0.0, discountAmount=0.0; // INITIALIZED FOR MAXIMUM PRECISION.
	// USER  INPUT.	
    cout << setfill(' ')<<right<<setw(67)<<"SHEIKH KI DAWAT"<<endl;
    cout << "Please Enter Your Name:" ; // NAME REQUIRED FOR THE SHOPPING INVOICE.
    getline(cin,name); // TO GET THE NAME WITH SPACES.
    cout <<setfill(' ') <<right<<setw(65)<< "MENU" << endl;
    cout << "1 - Breakfast." << endl; // THREE CATEGORIES
    cout << "2 - Lunch." << endl;
    cout << "3 - Dinner." << endl;
    cout << "Selected Choice: ";
    cin  >> menu;
    switch (menu) {
    	case 1:// FOR BREAKFAST
    	   
    	   cout <<  setfill(' ')<<right<<setw(67)<< "\nSUB-MENU {BREAKFAST}" << endl; // FURTHER SUB-MENU.
		   cout << "1 - Anda Paratha." << endl; 
           cout << "2 - Nan Chanay." << endl;
           cout << "3 - Siri Paye." << endl;
           cout << "4 - Tea." << endl;
           cout << "Selected Choice: ";
		   cin  >> subMenu;
		   switch (subMenu){ 
		        case 1:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfAndaParatha;
				   purchase = RsAndaParatha * quantityOfAndaParatha;
				   break;
				    
		        case 2:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfNanChanay;
		        	purchase = RsNanChanay * quantityOfNanChanay;
		        	break;
					 
		        case 3:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfSiriPaye;
		        	purchase = RsSiriPaye * quantityOfSiriPaye;
					break;
					
				case 4:
					cout << "\nEnter Quantity: ";
		        	cin >> quantityOfTea;
		        	purchase = RsTea * quantityOfTea;
					break;
			}
		break;
	    case 2:// FOR CLOTHING.
		   cout <<  setfill(' ')<<right<<setw(67)<< "\nSUB-MENU {LUNCH}" << endl; // FURTHER SUB-MENU.
		   cout << "1 - Chicken Karahi." << endl; 
           cout << "2 - Mutton Karahi." << endl;
           cout << "3 - Egg Fried Rice." << endl;
           cout << "4 - BBQ." << endl;
           cout << "Selected Choice: ";
		   cin  >> subMenu;
		   switch (subMenu){ 
		        case 1:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfChickenKarahi;
				   purchase = RsChickenKarahi * quantityOfChickenKarahi;
				   break;
				    
		        case 2:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfMuttonKarahi;
				    purchase = RsMuttonKarahi * quantityOfMuttonKarahi;
		        	break;
					 
		        case 3:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfEggFriedRice;
		        	purchase = RsEggFriedRice * quantityOfEggFriedRice;
					break;
					
				case 4:
					cout << "\nEnter Quantity: ";
		        	cin >> quantityOfBBQ;
		        	purchase = RsBBQ * quantityOfBBQ;
					break;
			}
		break;    
        case 3:
		   cout <<  setfill(' ')<<right<<setw(67)<< "\nSUB-MENU {DINNER}" << endl; // FURTHER SUB-MENU.
		   cout << "1 - Chicken Karahi." << endl; 
           cout << "2 - Mutton Karahi." << endl;
           cout << "3 - Egg Fried Rice." << endl;
           cout << "4 - BBQ." << endl;
           cout << "5 - Sajji" << endl;
		   cout << "Selected Choice: ";
		   cin  >> subMenu;
		   switch (subMenu){ 
		        case 1:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfChickenKarahi;
				   purchase = RsChickenKarahi * quantityOfChickenKarahi;
				   break;
				    
		        case 2:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfMuttonKarahi;
				    purchase = RsMuttonKarahi * quantityOfMuttonKarahi;
		        	break;
					 
		        case 3:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfEggFriedRice;
		        	purchase = RsEggFriedRice * quantityOfEggFriedRice;
					break;
					
				case 4:
					cout << "\nEnter Quantity: ";
		        	cin >> quantityOfBBQ;
		        	purchase = RsBBQ * quantityOfBBQ;
					break;
									
				case 5:
					cout << "\nEnter Quantity: ";
		        	cin >> quantityOfSaji;
		        	purchase = RsSaji * quantityOfSaji;
					break;
			}
        break;
	    default: // INCASE NO GIVEN OPTION IS SELECTED FROM THE MENU.
	    	SetConsoleTextAttribute(h,4); 
	    	cout <<"Invalid Selection." <<endl;
	    	SetConsoleTextAttribute(h,7);
			return 0; 
	    	
    }
	// DISCOUNT CALCULATION.
	if (purchase < 100){
	  discountAmount=0;// NO DISCOUNT.
	  toBePaid=purchase;
	}
	else if (purchase>=100 && purchase<=500){
	  discountRate = 10;
	  discountAmount=purchase*(discountRate/100);// 10% DISCOUNT.
	  toBePaid = purchase-discountAmount;
	} 
	else if (purchase> 500){
	  discountRate = 20;
	  discountAmount=purchase*(discountRate/100); // 20% DISCOUNT.
	  toBePaid = purchase-discountAmount;
	}
  // TO GENERATE SHOPPING INVOICE IN FORM OF A WELL ORGANIZED TABLE.
    system("cls"); // TO CLEAR THE SCREEN.
 	cout <<setfill(' ') <<right<<setw(69)<<"SHOPPING STORE INVOICE"<< endl;
    cout <<"\nStore Name: Sheikh Ki Dawat" <<endl;
    cout << "Address: Centre Plate Near Diners." <<endl;
    cout << "Customer Name: " << name << endl;
    cout << "Date: January 18, 2025\n" <<endl;  
    cout << fixed << setprecision(2); // SET PRICISION FOR FLOATING POINT NUMBERS. 
    
    //TO GENERATE THE FIRST HALF OF THE INVOICE.
    cout << left << setw(20) << "Menu" << left << setw(20) << "Sub-Menu" << left << setw(20) << "Quantity" << left << setw(20) 
		 << "Purchase" << left << setw(20) <<"Discount" << left << setw(20) << "Total";
		 
	// TO GENERATE THE SECOND HALF OF THE INVOICE.	 
    cout << ((menu == 1) ? "Breakfast" : (menu == 2) ? "Lunch" : "Dinner")
         << setfill(' ') << right << setw(20)
         << ((menu == 1 && subMenu == 1) ? "Anda Paratha"
             : (menu == 1 && subMenu == 2) ? "Nan Chanay"
             : (menu == 1 && subMenu == 3) ? "Siri Paye"
             : (menu == 1 && subMenu == 4) ? "Tea"
             : (menu == 2 && subMenu == 1) ? "Chicken Karahi"
             : (menu == 2 && subMenu == 2) ? "Mutton Karahi"
             : (menu == 2 && subMenu == 3) ? "Egg Fried Rice"
             : (menu == 2 && subMenu == 4) ? "BBQ"
             : (menu == 3 && subMenu == 1) ? "Chicken Karahi"
             : (menu == 3 && subMenu == 2) ? "Mutton Karahi"
             : (menu == 3 && subMenu == 3) ? "Egg Fried Rice"
             : (menu == 3 && subMenu == 4) ? "BBQ"
             : "Sajji")
         << setfill(' ') << right << setw(17)
         << ((menu == 1) ? (subMenu == 1 ? quantityOfAndaParatha
                            : (subMenu == 2 ? quantityOfNanChanay
                            : (subMenu == 3 ? quantityOfSiriPaye : quantityOfTea)))
             : (menu == 2) ? (subMenu == 1 ? quantityOfChickenKarahi
                            : (subMenu == 2 ? quantityOfMuttonKarahi
                            : (subMenu == 3 ? quantityOfEggFriedRice : quantityOfBBQ)))
             : (menu == 3) ? (subMenu == 1 ? quantityOfChickenKarahi
                            : (subMenu == 2 ? quantityOfMuttonKarahi
                            : (subMenu == 3 ? quantityOfEggFriedRice
                            : (subMenu == 4 ? quantityOfBBQ : quantityOfSaji))))
             : 0) // Default case
         << setfill(' ') << right << setw(15) << "$" << purchase
         << setfill(' ') << right << setw(18) << discountRate << "%"
         << setfill(' ') << right << setw(15) << "$" << toBePaid
         << endl;
    
    cout << setfill(' ') << right << setw(110) << "\nThank You For Shopping Here." << endl;
*/
    return 0;
}

	
	
  
  
  