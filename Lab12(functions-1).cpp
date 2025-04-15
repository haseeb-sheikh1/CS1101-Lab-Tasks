

    //                                            LAB # 12 (DATED: 11 FEB, 2025)
    //                          TOPICS - FUNCTION DECLARATIONS - FUNCTION DEFINATIONS - FUNCTION CALLING
    //                                      PROGRAM # 1 (USING LIBRARY FUNCTIONS)
    #include<iostream>
    #include<iomanip>
    #include<cmath>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    // To Change the Font Colour on Console
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    int main(){
       // square root
	   int num1;
 	   cout << "Enter Number: ";
	   cin >> num1;
	   cout << "Square root of number is " << sqrt(num1)<<endl;
	   // absolute of number 
	   cout << "Absolute of number is "<< abs(num1)<<endl;
	   // sin
	   cout << "Sin of "<< num1<<" is "<<sin(num1)<<endl;
	   // cosine
	   cout << "Cosine of "<<num1 <<" is "<<cos(num1)<<endl;
	   // power
       cout <<"Power of "<<num1 <<" to 3 is "<<pow (num1,3)<<endl;
       return 0;
    }
    
    //                                  PROGRAM # 2( FUNCTION WITH VOID RETURN TYPE)
    #include<iostream>
    #include<iomanip>
    #include<cmath>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
	// Function Defination:
    void myfirstfunction(){
        cout << "Hello! Welcome to c++ Functions." << endl;
    }
    int main(){
       // Function Calling
       myfirstfunction();
       return 0;
	}
    
    //                                      PROGRAM # 3 (FUNCTION WITH IF-ELSE STATEMENT)
    #include<iostream>
    #include<iomanip>
    #include<cmath>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    // Function Defination: 
	void evenOddCheck(int a) {
    	if (a %2==0){
		    cout << "Even" << endl;
	    }
        else{
		    cout << "Odd" << endl;
	    }
    }  
    int main (){
       int number;
       cout <<setfill(' ')<<right<<setw(65)<< "Even Odd Checker"<<endl;
       cout << "Enter number: ";
       cin >> number; 
       evenOddCheck(number); 
       return 0;
	}
	
    //                                       PROGRAM # 4 (FACTORIAL CALCULATOR)
    #include<iostream>
    #include<iomanip>
    #include<cmath>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
        HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    // Function Defination.
    int factorial(int n){
       int fact=1;
	   if (n<0){
	       SetConsoleTextAttribute(h,4);
	       cout <<"No Factorial of Negative Number"<<endl;
	       SetConsoleTextAttribute(h,7);
	    }
       else{
            for (int i=1;i<=n;i++){
	          fact*=i;
		    }
		}
        return fact ;
    }
    int main (){
       int num;
       cout <<setfill(' ')<<right<<setw(65)<< "Factorial Calculator"<<endl;
       cout << "Enter Number: ";
       cin >> num;
       cout << "Factorial of "<< num <<" = " << factorial(num); 
       return 0;
    }

    //                                     PROGRAM # 5 (CALCULATOR USING FUNCTIONS)
    #include<iostream>
    #include<iomanip>
    #include<cmath>
    #include<conio.h>
    #include<windows.h>
    using namespace std;
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    // Function Definations.
    // Addition Function
	int addition(int a, int b){
        return a+b;
    }
    // Subtraction Function   
    int subtraction(int a, int b){
        return a-b;
    }
    // Multiplication Function   
    int multiplication(int a, int b){
        return a*b;
	}
	// Division Function	
    int division(int a, int b){
        return a/b;
    }
    int main(){
	    int num1, num2;
	    char op;
	    while (true){
	 	  cout << setfill(' ') <<right<<setw(65)<<"CALCULATOR"<<endl;
	      cin >> num1 >> op >> num2; // Classic Input.
	        switch (op){
		        case '+':
			      cout << addition(num1, num2);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls"); // To Clear the Screen
			    break;
		        case '-':
			      cout << subtraction(num1, num2);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls");
			    break;
		        case '*':
			      cout << multiplication(num1, num2);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls"); 
			    break;
		        case '/':
			      cout << division(num1, num2);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls");
			    break;
		        default: // If No Case Matches.
			      SetConsoleTextAttribute(h,4);
		          cout << "Not Valid Operation!" <<endl;
		          SetConsoleTextAttribute(h,7);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls"); 
			    break;
	        }
	    }
	    return 0;
    }
   
	    
	//                                          PROGRAM # 6 ( RESTURANT'S MENU.)
    #include <iostream>
    #include <iomanip>
    #include<windows.h>
    using namespace std;
        HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    // Function to display the menu
    void displayMenu() {
       cout << setfill(' ') << right << setw(65) << "Sheikh Ki Dawat" << endl;
       cout << setfill(' ') << right << setw(60) << "Menu" << endl;
       cout << "1. Chicken Biryani - Rs. 350\n";
       cout << "2. Mutton Karahi - Rs. 1200\n";
       cout << "3. Nihari - Rs. 500\n";
       cout << "4. Daal Chawal - Rs. 250\n";
       cout << "5. Chai (Tea) - Rs. 100\n";
       cout << "6. Exit\n";
    }

    // Function to calculate the cost of an item
    double calculateItemCost(int choice, int quantity) {
       double prices[] = {350, 1200, 500, 250, 100}; // Prices of items in Rs.
       return prices[choice - 1] * quantity;
    }

    // Function to calculate final bill with service charge
    double calculateFinalBill(double total) {
       const double serviceCharge = 0.10;  // 10% service charge
       return total + (total * serviceCharge);
    }

    int main() {
       int choice, quantity;
       double totalBill = 0.0;
       do {
           displayMenu();
           cout << "Enter your choice (1-6): ";
           cin >> choice;
           if (choice >= 1 && choice <= 5) {
               cout << "Enter quantity: ";
               cin >> quantity;
               double itemCost = calculateItemCost(choice, quantity);
               totalBill += itemCost;
               cout << "Item added! Cost: Rs. " << fixed << setprecision(2) << itemCost << endl;
            } 
           else if (choice == 6) {
               cout << setfill(' ')<< right<< setw(65) << "Final Bill\n";
            } 
           else {
               cout << "Invalid choice! Please enter a number between 1 and 6.\n";
            }
        } 
		while (choice != 6);

       // Calculating and displaying final bill with service charge
       double finalAmount = calculateFinalBill(totalBill);
       cout << "Total Bill (including 10% service charge): Rs. " << fixed << setprecision(2) << finalAmount << endl;
       cout << "Thank you";
       return 0;
    }

