#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
	//                                    LAB # 8  DATED : DECEMBER,10 2024
	//                           PROGRAM # 1 (Calculator using a switch statement)
	HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE); // TO CHANGE THE FONT COLOUR ON CONSOLE.
	cout << setfill(' ') <<right<<setw(65)<<"CALCULATOR"<<endl;
	double num1,num2;
	char op;
	cin >> num1 >>op >> num2;// CLASSIC INPUT.
	switch (op){
		case '+':
			cout <<num1<<op<<num2<<" = " <<num1+num2;
			break;
		case '-':
			cout <<num1<<op<<num2<<" = " <<num1-num2;
			break;
		case '*':
			cout <<num1<<op<<num2<<" = " <<num1*num2;
			break;
		case '/':
			cout <<num1<<op<<num2<<" = " <<num1/num2;
			break;
		case '%':
			bool isNum1Int, isNum2Int;
			isNum1Int = ((int)num1==num1); // TYPE CASTING FOR MODULAS OPERATION.
			isNum2Int = ((int)num1==num1);
			if(isNum1Int && isNum2Int){
			    cout <<num1<<op<<num2<<" = " <<(int)num1 % (int)num2;
			}
			else {
				SetConsoleTextAttribute(h,4); // FONT COLOUR CHANGE ON CONSOLE.
				cout <<"Not Valid!";
				SetConsoleTextAttribute(h,7);
			}
			break;
		default: // IF NO CASE MATCHES.
			SetConsoleTextAttribute(h,4);
		    cout << "Not Valid Operation!" <<endl;
		    SetConsoleTextAttribute(h,7);break;
	}
	
	//                                  PROGRAM # 2 (switch statement to display the corresponding day of the week)
	int dayNumber;
	cout << "Please Enter any number from 1 to 7: ";
	cin >> dayNumber;
	switch (dayNumber){
		case 1: cout << "The corresponding day for 1 is Monday."; 
		  break;
		case 2: cout << "The corresponding day for 2 is Tuesday."; 
		  break;
		case 3: cout << "The corresponding day for 3 is Wednesday."; 
		  break;
		case 4: cout << "The corresponding day for 4 is Thursday."; 
		  break;
		case 5: cout << "The corresponding day for 5 is Friday."; 
		  break;
		case 6: cout << "The corresponding day for 6 is Saturday."; 
		  break;
		case 7: cout << "The corresponding day for 7 is Sunday."; 
		  break;
		default: SetConsoleTextAttribute(h,4);
		 cout << "Please Enter the number within the range (1-7)!";
		 SetConsoleTextAttribute(h,7); 
		  break;
	}

	//                                                            PROGRAM # 3 (AREA CALCULATOR). 
	int choice; 
	double area;
	cout << setfill(' ') << right<<setw(69)<< "AREA CALCULATOR" << endl; 
	cout << "Select a shape to calculate the area:\n"; 
	cout << "1. Circle\n2. Rectangle\n3. Triangle\n"; 
	cout << "Enter your choice (1-3): "; 
	cin >> choice; 
	switch (choice) { 
	  case 1:{ 
	      double radius; 
	      cout << "Enter the radius of the circle: "; 
	      cin >> radius; 
	      area = 3.14159 * radius * radius; 
	      cout << "The area of the circle is: " << area << endl; 
	      break;
		} 
	  case 2: { 
	      double length, width; 
	      cout << "Enter the length and width of the rectangle: "; 
	      cin >> length >> width; 
	      area = length * width; 
	      cout << "The area of the rectangle is: " << area << endl; 
	      break;
		} 
	  case 3: { 
	      double base, height; 
	      cout << "Enter the base and height of the triangle: "; 
	      cin >> base >> height;
	      area = 0.5 * base * height; 
	      cout << "The area of the triangle is: " << area << endl;
	      break;
		} 
	  default:
	      SetConsoleTextAttribute(h,4); 
	      cout << "Invalid choice! Please select a valid option (1-3)." << endl;
	      SetConsoleTextAttribute(h,7);
	      break;
	}
	
	//                                                              PROGRAM # 4 (CURRENCY cONVERTER.)
	// PREDEFINED CURRENCY RATE.
    const double USD_TO_PKR = 283.50; 
    const double USD_TO_INR = 81.45; 
    const double USD_TO_EUR = 0.91;    
    // VARIABLE DECLARATION.
    double amount, convertedAmount;
    int choice;
    // USER INPUT.
    cout <<setfill(' ') <<right<<setw(69)<<"Currency Converter\n";
    cout << "1. Convert USD to PKR\n";
    cout << "2. Convert USD to INR\n";
    cout << "3. Convert USD to Euros\n";
    cout << "your choice: ";
    cin >> choice;

    cout << "Enter amount in USD: ";
    cin >> amount;
    // SWITCH STATEMENT.
    switch (choice) {
        case 1: // USD TO PKR.
            convertedAmount = amount * USD_TO_PKR;
            cout << amount << " USD is " << convertedAmount << " PKR\n";
            break;
        case 2: // USD TO INR.
            convertedAmount = amount * USD_TO_INR;
            cout << amount << " USD is " << convertedAmount << " INR\n";
            break;
        case 3: // USD TO EUROS.
            convertedAmount = amount * USD_TO_EUR;
            cout << amount << " USD is " << convertedAmount << " Euros\n";
            break;
        default:
            SetConsoleTextAttribute(h,4);	
            cout << "Invalid choice\n";
            SetConsoleTextAttribute(h,7);
    }
    
    //                            PROGRAM # 4 (EXCHANGE RATE PROVIDED BY THE USER.)
    // VARIABLE DECLARATION.
    double amount, rate;
    int choice;
    double convertedAmount;
    // USER INPUT.
    cout <<setfill(' ') <<right<<setw(69)<<"Currency Converter\n";
    cout << "Enter the amount in USD: ";
    cin >> amount;
    cout << "Choose the currency to convert to:" << endl;
    cout << "1. PKR (Pakistani Rupee)" << endl;
    cout << "2. INR (Indian Rupee)" << endl;
    cout << "3. Euro" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;
    // EXCHANGE RATE PROVIDED BY THE USER.
    cout << "Enter the exchange rate for the chosen currency: ";
    cin >> rate;
    // CURRENCY CONVERSION.
    switch (choice) {
        case 1: // USD TO PKR
            convertedAmount = amount * rate; 
            cout << amount << " USD is " << convertedAmount << " PKR." << endl;
            break;
        case 2: // USD TO INR
            convertedAmount = amount * rate;
            cout << amount << " USD is " << convertedAmount << " INR." << endl;
            break;
        case 3: // USD TO EURO
            convertedAmount = amount * rate;
            cout << amount << " USD is " << convertedAmount << " Euros." << endl;
            break;
        default: // INVALID CASE
        	SetConsoleTextAttribute(h,4); // TO CHANGE THE FONT COLOUR ON CONSOLE.
            cout << "Invalid choice. Please run the program again and choose a valid option." <<endl; 
            SetConsoleTextAttribute(h,7);
   }
   
    //                                     PROGRAM # 5 (SHOPPING SYSTEM WITH INVOICE GENERATION AND DISCOUNTS.)  
	double 	toBePaid=0.0,discountRate=0.0,discountAmount=0.0; // INITIALIZED FOR MAXIMUM PRECISION.	
	int categories,items; // VARIABLE DELARATION.
	string name;
	double purchase,quantityOfLaptops,quantityOfSmartphones,quantityOfHeadphones,quantityOfEggs;
    double quantityOfJackets,quantityOfTshirts,quantityOfJeans,quantityOfMilk,quantityOfBread;
    // PREDEFINED ITEM PRICES.
	double priceOfLaptops = 1000;
    double priceOfSmartphones = 700;
    double priceOfHeadphones = 150;
    double priceOfJackets=120;
    double priceOfTshirts=40;
    double priceOfJeans=60;
    double priceOfMilk=2;
    double priceOfBread=3;
    double priceOfEggs=5;
    cout << setfill(' ') <<right<<setw(70)<<"AL SHEIKH MART" <<endl;
    cout << "Please Enter Your Name:" ; // NAME REQUIRED FOR THE SHOPPING INVOICE.
    getline(cin,name); // TO GET THE NAME WITH SPACES.
    cout <<setfill(' ') <<right<<setw(65)<< "MENU" << endl;
    cout << "press 1 to choose Electronics." << endl; // THREE CATEGORIES
    cout << "press 2 to choose clothing." << endl;
    cout << "press 3 to choose groceries." << endl;
    cout << "Selected Category: ";
    cin  >> categories;
    switch (categories) {
    	case 1:// FOR ELECTRONICS
    	   
    	   cout << "\nCategory: {Electronics}" << endl; // FURTHER SUB-ITEMS.
		   cout << "Press 1 for Laptops" << endl;
		   cout << "Press 2 for Smartphones" << endl;
		   cout << "Press 3 for Headphones" << endl;
		   cout << "Selected category: ";
		   cin  >> items;
		   switch (items){ // FURTHER CASES FOR ITEMS.
		        case 1:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfLaptops;
				   purchase = priceOfLaptops * quantityOfLaptops;
				   break;
				    
		        case 2:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfSmartphones;
		        	purchase = priceOfSmartphones * quantityOfSmartphones;
		        	break;
					 
		        case 3:
		        	cout << "\nEnter Quantity: ";
		        	cin >> quantityOfHeadphones;
		        	purchase = priceOfHeadphones * quantityOfHeadphones;
					break;
					
		    }
	    break;
		case 2:// FOR CLOTHING.
		
		   cout << "\nCategory: {Clothing}" << endl; // SUB-ITEMS.
		   cout << "Enter 1 for Jacket." << endl;
		   cout << "Enter 2 for T-Shirts." << endl;
		   cout << "Enter 3 for Jeans." << endl;
		   cout << "Selected category: ";
		   cin  >> items; 
		   switch (items){ // FURTHER CASES FOR ITEMS.
		        case 1:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfJackets;
		           purchase = priceOfJackets * quantityOfJackets;
		           break;
				   
		        case 2:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfTshirts;
		           purchase = priceOfTshirts * quantityOfTshirts;
				   break;
				   
		        case 3:
		           cout << "\nEnter Quantity: ";
		           cin >> quantityOfJeans;
		           purchase = priceOfJeans * quantityOfJeans;
				   break;
		    }
		break;    
		case 3:// FOR GROCERIES.
		
		   cout << "\nCategory: {Groceries}" << endl; // SUB-ITEMS
	       cout << "Enter 1 for Milk" << endl;
		   cout << "Enter 2 for Bread" << endl;
		   cout << "Enter 3 for Eggs" << endl;
		   cout << "Selected category: ";
		   cin >> items;
		   switch (items){ // FURTHER CASES FOR ITEMS.
		        case 1:
		           cout << "\nEnter Quantity {per-litre}: ";
		           cin >> quantityOfMilk;
		           purchase = priceOfMilk * quantityOfMilk;
				   break; 
		           
		        case 2:
		           cout << "\nEnter Quantity {per Loaf}: ";
		           cin >> quantityOfBread;
		           purchase = priceOfBread * quantityOfBread; 
		           break;
		           
		        case 3:
		           cout << "\nEnter Quantity {in dozens}:" ;
		           cin >> quantityOfEggs;
		           purchase = priceOfEggs * quantityOfEggs; 
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
    cout <<"\nStore Name: Al Sheikh Mart" <<endl;
    cout << "Address: Centre Plate Near High School" <<endl;
    cout << "Customer Name: " <<name<<endl;
    cout << "Date: January 18, 2025\n" <<endl;  
    cout << fixed << setprecision(2); // SET PRICISION FOR FLOATING POINT NUMBERS. 
    
    //TO GENERATE THE FIRST HALF OF THE INVOICE.
    cout << left << setw(20) << "Category" << left << setw(20) << "Item" << left << setw(20) << "Quantity" << left << setw(20) 
		 << "Purchase" << left << setw(20) <<"Discount" << left << setw(20) << "Total";
		 
	// TO GENERATE THE SECOND HALF OF THE INVOICE.	 
	cout << ((categories == 1) ? "Electronics" : (categories == 2) ? "Clothing" : "Groceries") << setfill(' ')<<right<<setw(15)<<
	   ((categories == 1 && items == 1) ?"Laptops" : (categories == 1 && items == 2) ? "Smartphones" : (categories == 1 && items == 3) ? "Headphones"
	   :(categories == 2 && items == 1) ? "jackets" : (categories == 2 && items == 2) ? "T-Shirts" :(categories == 2 && items == 3) ? "Jeans"
	   :(categories == 3 && items == 1) ? "Milk" : (categories == 3 && items == 2) ? "Bread" : "Eggs") <<setfill(' ') << right <<setw(20)<<
	   ((categories == 1) ? (items == 1 ? quantityOfLaptops : (items == 2 ? quantityOfSmartphones :  quantityOfHeadphones))
	                                   :(categories == 2) ? (items == 1 ? quantityOfJackets : (items == 2 ? quantityOfTshirts : quantityOfJeans)) 
	                                   :(items == 1 ? quantityOfMilk : (items == 2 ? quantityOfBread : quantityOfEggs))) <<setfill(' ')<<right<<
	   setw(15)<<"$" << purchase <<setfill(' ') <<right<<setw(18)<< discountRate << "%" <<setfill(' ') <<right<<setw(13)<< "$" << toBePaid << endl;
    cout <<setfill(' ')<<right <<setw(110)<<"\nThank You For Shopping Here." <<endl;  
	
	return 0;
}