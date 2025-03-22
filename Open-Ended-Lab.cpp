#include <iostream> // input output stream library
#include <fstream>  // library for file handling
#include <iomanip>  // to use stream manipulators like setw(), setfill()
#include<windows.h> // to get functionalities like clear screen.
using namespace std;
// to change the font colour on console.
HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
// Global Variables
double totalAmount = 0; // initializing with 0 for accuracy.
double price= 0;
string userName;
int isPremiumUser = 0;

// Function to Apply Discount.
    double applyDiscount(double amount) {
        if (isPremiumUser==1) { // discount for premium users
    	  double discount = amount * 0.10; // 10 % discount calculation.
    	  double finalAmount = amount - discount; // subtracting discount amount from the original. 
          return finalAmount; // returning final amount.
        }
       return amount; // incase of regular user return original amount.
    }

// Function to Convert Currency
    double convertCurrency(double amount, string currency) {
        if (currency == "USD") return amount / 280.0;  // predefined rates.
        if (currency == "EUR") return amount / 300.0;  // can be changed to let the user enter up-to-date rates.
        if (currency == "PKR") return amount; // returning original incase user selects PKR
        return amount; // default.
    }

// Function to Issue a Book
   void issueBook() {
	   cout << "Available Genres:\n1. Fiction\n2. Non-fiction\n"; // Genres to select from.
       int choice; // variable to store user choice.
       cin >> choice;
       // Defining book structure
       struct Book {
           string title;
           string author;
           int publishedYear; 
           bool availability; // true or false value
        };
       // books of first genre ( Array of struct )
       Book fictionBooks[10] = {
           {"Notes from the Underground", "Fyodor Dostoevsky", 1864,true}, // {Title, Author, Year published, true/false (availability)
           {"To Kill a Mockingbird", "Harper Lee", 1960,false},
           {"1984", "George Orwell", 1949,true},
           {"The Great Gatsby", "F. Scott Fitzgerald", 1925,true},
           {"Moby-Dick", "Herman Melville", 1851,true},
           {"The Trial", "Franz Kafka", 1925,true},
           {"Metamorphosis", "Franz Kafka", 1915,true},
           {"Wuthering Heights", "Emily Bronte", 1847,true},
           {"Animal Farm", "George Orwell", 1945,false},
           {"The Godfather", "Mario Puzo", 1969,true}
        };
        // books of second genre.
       Book nonFictionBooks[10] = {
           {"Sapiens", "Yuval Noah Harari", 2011,true},
           {"Educated", "Tara Westover", 2018,true},
           {"Becoming", "Michelle Obama", 2018,true},
           {"The Immortal", "Rebecca Skloot", 2010,false},
           {"The Wright Brothers", "David McCullough", 2015,false},
           {"The Power of Habit", "Charles Duhigg", 2012,true},
           {"Grit", "Angela Duckworth", 2016,true},
           {"The Glass Castle", "Jeannette Walls", 2005,true},
           {"Thinking", "Daniel Kahneman", 2011,false},
           {"Outliers", "Malcolm Gladwell", 2008,true}
        };
       // showing books on user choice
       system("cls"); // to clear the screen.
       cout << setfill(' ')<<right<<setw(65)<<"PAGE AND CO. BOOK SHOP\n";
       // showing available books.
       cout << "AVAILABLE BOOKS: " << endl;
       switch(choice) {
           case 1:
        	   // First line of table
        	   cout << setfill(' ')  << left << setw(30) << "TITLE" << setw(30) << "AUTHOR" << setw(30) << "YEAR PUBLISHED" << setw(30) << "AVAILABILITY\n" << endl;
               for (int i = 0; i < 10; i++) {
                   // remaining lines.
                   cout << setfill(' ') << left << setw(2) << (i + 1) << left << setw(30) << fictionBooks[i].title  << setw(30) << fictionBooks[i].author  << setw(30) << fictionBooks[i].publishedYear;
                   // Setting the text color for availability
                   if (fictionBooks[i].availability) {
                       SetConsoleTextAttribute(h, 2);  // Green for available
                       cout << "Available";
                    } else {
                       SetConsoleTextAttribute(h, 4);  // Red for not available
                       cout << "Not Available";
                    }
                    SetConsoleTextAttribute(h, 7);  // Reset to default color
                    cout << endl;
                }
               int choice; // declaring a variable to store choice of the user.
               cout << "\nWhich book would you like to issue? Enter the serial number: ";
               cin >> choice;
               if (choice >= 1 && choice <= 10) { // if the user choice is between this range.
                    if (fictionBooks[choice-1].availability){ // if the book is available ( meaning availability is true )
                         cout << "You chose \"" << fictionBooks[choice - 1].title << "\" by " << fictionBooks[choice - 1].author << "." << endl;
                         double price = 500;  // Issue fee
                         totalAmount = applyDiscount(price); // applying discount for the premium user.
                         cout << "Make sure to return it within 7 days! " << endl;
		     }
		     else { // if the book is between the range but is not available
			 SetConsoleTextAttribute(h, 4);
			 cout << "Book not available" << endl;
			 SetConsoleTextAttribute(h, 7);
			}
		}
		else {
		   // if the user choice is out of the given range.
            	   SetConsoleTextAttribute(h, 4);
                   cout << "Invalid choice!" << endl;
                   SetConsoleTextAttribute(h, 7);
                }
            break; // end of case 1
            case 2: // case 2 of non fiction genre.
        	    cout << setfill(' ')  << left << setw(30) << "TITLE" << setw(30) << "AUTHOR" << setw(30) << "YEAR PUBLISHED" << setw(30) << "AVAILABILITY\n" << endl;
                for (int i = 0; i < 10; i++) {
                   cout << setfill(' ') << left << setw(2) << (i + 1) << left << setw(30) << nonFictionBooks[i].title  << setw(30) << nonFictionBooks[i].author  << setw(30) << nonFictionBooks[i].publishedYear;
                   // Setting the text color for availability
                   if (nonFictionBooks[i].availability) {
                       SetConsoleTextAttribute(h, 2);  // Green for available
                       cout << "Available";
                    }  else {
                       SetConsoleTextAttribute(h, 4);  // Red for not available
                       cout << "Not Available";
                    }
                    SetConsoleTextAttribute(h, 7);  // Reset to default color
                    cout << endl;
                }
                int bookchoice; //  declaring a variable to store book choice of the user.
                cout << "\nWhich book would you like to issue? Enter the serial number: ";
                cin >> bookchoice;
                if (bookchoice >= 1 && bookchoice <= 10) { // Range
                	 if (nonFictionBooks[bookchoice-1].availability){ // to check availability
                              cout << "You chose \"" << nonFictionBooks[bookchoice - 1].title << "\" by " << nonFictionBooks[bookchoice - 1].author << "." << endl;
                              double price = 500;  // Issue fee
                              totalAmount = applyDiscount(price); // applying discount for the premium user.
                              cout << "Make sure to return it within 7 days! " << endl;
                          }
                        else { // book not available
                            SetConsoleTextAttribute(h, 4);
                            cout << "Book not available"<<endl;
                            SetConsoleTextAttribute(h, 7);
		         }
	      } 
	     else {
		   // if the choice is out of range.
            	   SetConsoleTextAttribute(h, 4);  
                   cout << "Invalid choice!" << endl;
                   SetConsoleTextAttribute(h, 7);
                }		
            break;
            default: // default choice of the switch.
        	SetConsoleTextAttribute(h, 4);
                cout << "Invalid choice!" << endl;
                SetConsoleTextAttribute(h, 7);
            break;
        }
    }
  
// function to return book
   void returnBook(){
	   int days; // variable to store number of days.
	   cout << "For how many days you took the book: ";
	   cin >> days;
	   if (days > 7){
		   // if the days are more than 7 RS 100 late fee included
		   SetConsoleTextAttribute(h, 4);
		   cout << "Late Fee Applied"<<endl;
		   SetConsoleTextAttribute(h, 7); 
		   totalAmount+=100; // including RS 100 late fee.
	    }
	   else{
		   SetConsoleTextAttribute(h, 2);
		   cout << "returned in time" <<endl;
		   SetConsoleTextAttribute(h, 7); 
	    }
    }

// function to read Books. 
    void readBooks() {
    	// showing available genres.
        cout << "Available Genres:\n1. Fiction\n2. Non-fiction\n";
        int choice;
        cin >> choice;
        // Defining book structure
        struct Book {
           string title;
           string author;
           int publishedYear;
           bool availability;
        };
        // Again defining books for this function to increase the versatality (different books that can be issued and different that can be read)
        Book fictionBooks[10] = {
          {"Notes from the Underground", "Fyodor Dostoevsky", 1864,true},
          {"To Kill a Mockingbird", "Harper Lee", 1960,true},
          {"1984", "George Orwell", 1949,true},
          {"The Great Gatsby", "F. Scott Fitzgerald", 1925,true},
          {"Moby-Dick", "Herman Melville", 1851,true},
          {"The Trial", "Franz Kafka", 1925,true},
          {"Metamorphosis", "Franz Kafka", 1915,true},
          {"Wuthering Heights", "Emily Bronte", 1847,true},
          {"Animal Farm", "George Orwell", 1945,false},
          {"The Godfather", "Mario Puzo", 1969,true}
        };
        Book nonFictionBooks[10] = {
           {"Sapiens", "Yuval Noah Harari", 2011,true},
           {"Educated", "Tara Westover", 2018,true},
           {"Becoming", "Michelle Obama", 2018,true},
           {"The Immortal", "Rebecca Skloot", 2010,true},
           {"The Wright Brothers", "David McCullough", 2015,true},
           {"The Power of Habit", "Charles Duhigg", 2012,true},
           {"Grit", "Angela Duckworth", 2016,true},
           {"The Glass Castle", "Jeannette Walls", 2005,true},
           {"Thinking", "Daniel Kahneman", 2011,true},
           {"Outliers", "Malcolm Gladwell", 2008,true}
        };
        //books on user choice
        system("cls");
        cout << setfill(' ')<<right<<setw(65)<<"PAGE AND CO. BOOK SHOP\n";
        cout << "AVAILABLE BOOKS: " << endl;
        switch(choice) {
            case 1:
            cout << setfill(' ')  << left << setw(30) << "TITLE" << setw(30) << "AUTHOR" << setw(30) << "YEAR PUBLISHED"<<setw(30) << "AVAILABILITY\n" << endl;
            for (int i = 0; i < 10; i++) {
                 cout << setfill(' ')<< left << setw(2) << (i + 1) << left << setw(30) << fictionBooks[i].title  << setw(30) << fictionBooks[i].author  << setw(30) << fictionBooks[i].publishedYear;
                 // Set the text color for availability
                 if (fictionBooks[i].availability) {
                      SetConsoleTextAttribute(h, 2);  // Green for available
                      cout << "Available";
                  }   
		else {
                    SetConsoleTextAttribute(h, 4);  // Red for not available
                    cout << "Not Available";
                }
                SetConsoleTextAttribute(h, 7);  // Reset to default color
                cout << endl;
            }
           // TO let the user enjoy beverages while reading.
           int choice;
           int drinkChoice;
           cout << "\nWhich book would you like to read? Enter the serial number: ";
           cin >> choice;
           if (choice >= 1 && choice <= 10) {
    	      // A bit different feature where user can also drink something while reading the book
    	      if (fictionBooks[choice-1].availability){ // if the book is available
                    cout << "You chose to read \"" << fictionBooks[choice - 1].title << "\" by " << fictionBooks[choice - 1].author << "." << endl;
		    cout << "Would you like coffee(1) or tea(2) while reading? "; // coffee (RS 150), Tea (RS 100)
                    cin >> drinkChoice;
                    switch (drinkChoice){
        	            case 1:  price = 150; // price of coffee
        	            case 2: price = 100; // price of tea
        	            default :
        	            // changing font color to red.
			    SetConsoleTextAttribute(h, 4);
			    cout <<  "Invalid Choice"; // out of range.
			    // changing font color to default (white)
                            SetConsoleTextAttribute(h, 7);		
		     }
		    // discount for premium users
                    totalAmount = applyDiscount(price); // calling the discount function.
                    // Changing font colour to green
		    SetConsoleTextAttribute(h, 2);
                    cout << "Beverage added successfully!\n";
                    SetConsoleTextAttribute(h, 7);   
               }
               else { // if the book is not available
                    // font color red.
                    SetConsoleTextAttribute(h, 4);
                    cout << "Book not available." << endl;
		    // font color white. 
		    SetConsoleTextAttribute(h, 7);
		}
	}  
	        else { // out of range choice
	            // changing font color to red.
	        	SetConsoleTextAttribute(h, 4);
                cout << "Invalid choice!" << endl;
                // chnaging font color to white.
                SetConsoleTextAttribute(h, 7);
            } 
           break; // end of case 1
           case 2: 
           // first line of the table.
           cout << setfill(' ')  << left << setw(30) << "TITLE" << setw(30) << "AUTHOR" << setw(30) << "YEAR PUBLISHED" << setw(30) << "AVAILABILITY\n" << endl;
           for (int i = 0; i < 10; i++) {
           	   // remaining lines.
               cout << setfill(' ') << left << setw(2) << (i + 1) << left << setw(30) << nonFictionBooks[i].title  << setw(30) << nonFictionBooks[i].author  << setw(30) << nonFictionBooks[i].publishedYear;
               // Set the text color for availability
               if (nonFictionBooks[i].availability) {
                  SetConsoleTextAttribute(h, 2);  // Green for available
                  cout << "Available";
                } 
               else {
                  SetConsoleTextAttribute(h, 4);  // Red for not available
                  cout << "Not Available";
                }
               SetConsoleTextAttribute(h, 7);  // Reset to default color
               cout << endl;
            }
           int bookchoice; // variable to store user choice.
           cout << "\nWhich book would you like to read? Enter the serial number: ";
           cin >> bookchoice;
           if (bookchoice >= 1 && bookchoice <= 10) { // if the book is between this range
                if (nonFictionBooks[choice-1].availability){ // and if the book is available
                     cout << "You chose \"" << nonFictionBooks[bookchoice - 1].title << "\" by " << nonFictionBooks[bookchoice - 1].author << "." << endl;
                     cout << "Enjoy " << endl;
		}
		else { // if the book is between the range but is not available 
		        // changing font color to red.
		        SetConsoleTextAttribute(h, 4);
			cout << "Book not available" << endl;
			 // changing font color to white,
			SetConsoleTextAttribute(h, 7);
		}    
            } 
	   else { // if the book is not between the range
               // changing font color to red.
		SetConsoleTextAttribute(h, 4);
                cout << "Invalid choice!" << endl;
                // changing font color to white.
		SetConsoleTextAttribute(h, 7);
            }		
           break;
           default: // default case of switch.
              // font colour red.
    	      SetConsoleTextAttribute(h, 4);
              cout << "Invalid choice!" << endl;
              // white
	      SetConsoleTextAttribute(h, 7);
            break;
       }
    }

// Function to Order Beverages
    void orderBeverage() {
       // clearing the screen
       system ("cls");
       // showinng available genres.
       int choice; // variable for user choice
       cout << "Availabe Beverages:\n1. Tea (Rs 100)\n2. Coffee (Rs 200)\n3. Donuts (Rs 150)\n";
       cout << "your choice: ";
       cin >> choice;
       if (choice == 1) {
           price = 100; // price of tea.
           // font color green.
           SetConsoleTextAttribute(h, 2);
           cout << "Beverage added successfully!\n";
           // font color white.
	   SetConsoleTextAttribute(h, 7);
	}
       else if (choice == 2) {
            price = 200; // price of coffee.
            // font color green.
	    SetConsoleTextAttribute(h, 2);
            cout << "Beverage added successfully!\n";
            // font color white.
	    SetConsoleTextAttribute(h, 7);
	}
       else if (choice == 3){
           price = 150; // price of donut.
           SetConsoleTextAttribute(h, 2);
           cout << "Beverage added successfully!\n";
           SetConsoleTextAttribute(h, 7);
	} 
       else {  // choice out of given range.
	      SetConsoleTextAttribute(h, 4);
	      cout << "Invalid Choice"<< endl;
	      SetConsoleTextAttribute(h, 7);
        }
       // discount for premium users
       totalAmount = applyDiscount(price); // calling discount function.
    }

// Function to Generate Invoice
   void generateInvoice() {
       cout << setfill(' ')<<right<<setw(65)<<"INVOICE\n";
       cout << "User: " << userName << "\n";
       if(isPremiumUser == 1){
           // showing the total with discount for premium user.
    	   cout << "Total(10% discount): " << fixed << setprecision(2) << totalAmount << "\n";
	    }
	   else {
          // showing the total for regular user.
		  cout << "Total: " << fixed << setprecision(2) << totalAmount << "\n";
	    }
	    
       // Currency Conversion
       system("cls");
       cout << "Available Currencies:\n1. USD  \n2. EUR  \n3. PKR\n"<< endl;
       cout << "Your choice: ";
       int choice;                                  
       cin >> choice;
       string currency = "PKR";
       if (choice == 1) currency = "USD";
       else if (choice == 2) currency = "EUR";
       else if (choice == 3) currency = "PKR";
       else {
	      SetConsoleTextAttribute(h, 2);
		  cout << "considering default currency" << endl;
          SetConsoleTextAttribute(h, 7);
        }
	   // converted amount
       double convertedAmount = convertCurrency(totalAmount, currency); // calling function to convert currency.
       if (isPremiumUser==1){
          // showing total for premium users 
          cout << "Total in " << currency << " (10% discount): " << fixed << setprecision(2) << convertedAmount << " " << currency << "\n";
        }
       else{
       	 // showing total for regular users
       	 cout << "Total in " << currency << ": " << fixed << setprecision(2) << convertedAmount << " " << currency << "\n";
	   } 
       // Save Invoice to File
       ofstream file("invoice.txt");
       file << setfill(' ')<<right<<setw(65)<<"INVOICE\n";
       file << "CUSTOMER: " << userName << "\n";
       file << "Total: Rs " << fixed << setprecision(2) << totalAmount << "\n";
       file << "Converted Total: " << convertedAmount << " " << currency << "\n";
       file.close();
       // invoice saved to tax
       cout << "Invoice saved to 'invoice.txt'!\n";
    }

// Main Menu
   void showMenu() {
	   // name of the shop
	   cout << setfill(' ')<<right<<setw(65)<<"PAGE AND CO. BOOK SHOP\n";
       // getting user details
	   cout << "Enter Your Name: ";
       getline(cin, userName);
       // checking if the user is premium
       cout << "Are you a Premium User? (1 for Yes, any other number for No): ";
       cin >> isPremiumUser;
       while (true) {
    	    cout << setfill(' ')<<right<<setw(65)<<"PAGE AND CO. BOOK SHOP\n";
            cout << "1. Read Books\n2. Issue Books\n3. Beverages\n";
            cout << "4. Return Book\n5. Generate Invoice\n6. Exit\n";
            cout << "Enter choice: ";
            int choice;
            cin >> choice;
            switch (choice) {
               case 1: readBooks(); break;
               case 2: issueBook(); break;
               case 3: orderBeverage(); break;
               case 4: returnBook();break;
               case 5: generateInvoice(); break;
               case 6: cout << "Exiting. Thank you!\n"; return;
               default: 
		  SetConsoleTextAttribute(h, 4);
		  cout << "Invalid choice. Try again.\n";
                  SetConsoleTextAttribute(h, 7);
	    }  
        }
    }
    
// main function
    int main() {
	    // showing menu
        showMenu();
        return 0;
    }



















