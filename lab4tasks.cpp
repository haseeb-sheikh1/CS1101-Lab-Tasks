#include<iostream>
#include<iomanip>
using namespace std;
int main()
   {
	 //                                     DATED: NOVEMBER 16, 2024
	 //                PROGRAM # 1(PROGRAM FOR DETERMINING EVEN OR ODD NUMBER USING TERNARY OPERATOR).
	 // VARIABLE DECLARATION.
	 int num1;
	 // USING STREAM MANIPULATORS TO ORGANIZE OUTPUT.
	 cout << setfill(' ') << right << setw(65) << "NUMBER PARITY CHECKER" << endl;
	 // USER INPUT.
	 cout << "Dear User Please Enter any Number: ";
	 cin  >> num1;
	
	 // CONDITION FOR CHECKING THE PARITY OF A NUMBER.
	 (num1%2==0)? cout << "The Number " << num1 << " is even." :
	              cout << "The Number " << num1 << " is odd."  ;
	 

     //                            PROGRAM #2 (PROGRAM FOR CLASSIFYING AGE GROUPS).
	 //	VARIABLE DECLARATION.
     int age;
     // USING STREAM MANIPULATORS TO ORGANIZE OUTPUT.
     cout << setfill(' ') <<right<<setw(65)<< "AGE CATEGORIZER"<<endl;
	 cout  << "Dear User Please Enter Your age: ";
	 cin   >> age;
	 
	 // CONDITION FOR CATEGORIZING THE USER AS A CHILD, TEENAGER OR AN ADULT.
	 (age<13)? cout << "Age " << age << " lies under the category of Childrens." :
	 (age>19)? cout << "Age " << age << " lies under the category of Adults."    :
	           cout << "Age " << age << " lies under the category of Teenagers." ;

      //                            PROGRAM #3 (BANKING APP.)
     
	  // VARIABLE DECLARATION.
	  int balance;
	  cout << setw (75)  << "GREETINGS FROM THE BANKING FAMILY!"<< endl; // STREAM MANUPULATORS TO ORGANIZE OUTPUT.
	  cout << "\nEnter Account Balance: ";
	  cin  >> balance;
	  
	  // DETERMINING THE ACCOUNT TYPE.
	  (balance < 100)? cout << "You Have a Low Balance Account.\n": // 
	  (balance > 500)? cout << "You Have a Primium Account.\n"    :
	  cout << "You Have a Standard Account.\n"; // 100 AND 500 (INCLUSIVE).
	  // USING STREAM MANUPULATORS TO ORGANIZE OUTPUT.
	  cout << setfill(' ')<< setw(74)<<"ELIGIBILITY FOR THE SPECIAL OFFER" << endl;
	  bool isLoyal; // BOOLEAN VALUE FOR INPUT (0-1)
	  cout << "\nEnter 1 if you are a loyal customer: ";
	  cin  >> isLoyal;
	  
	  // CHECKING ELIGIBILITY FOR THE SPECIAL OFFER.
	  (balance > 200 && isLoyal)? 
	  cout << "\nCongratulations!\nYou are Eligible for the special offer." : // IF THE CONDITION IS MET.
	  cout << "\nYou are not Eligible for the special offer! Better luck next time." ;
	  
     return 0;
    }
  
