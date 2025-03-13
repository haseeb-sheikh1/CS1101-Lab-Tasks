#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	//                                                                 LAB-10 (DATED: JANUARY 21, 2025)
	//                                                                        FOR LOOP
	//                                                            PROGRAM # 1(PRINTING NUMBERS FROM 1 TO N)
	  // variable declaration.
	  int num;
	  // user input
	  cout << "Enter Number: ";
	  cin >> num;
	  // for loop
	  for(int i=1;i<=num;i++){
	  	  cout<<i<<" "; 
	  }
	  
	  //                                                    PROGRAM # 2(PRINTING MULTIPLICATION TABLE OF A NUMBER)
	  // variable declaration
	  int N;
	  // user input
	  cout << "Enter Number: ";
	  cin >> N;
	  // for loop to print multiplication table.
	  for (int i=1;i<11;i++){
	  	  cout <<N<<" * "<<i<<" = "<<N*i<<endl;
	  }
	  
	  
	  //                                                       PROGRAM # 3 (SUM OF FIRST N NATURAL NUMBERS)
	  // variable declaration.
	  int n, sum;
	  cout << "Enter Number: ";
	  cin >>n;
	  // for to calculate sum.
	  for (int i=1;i<=n;i++){
	  	  sum+=i;
	    }
	  // print sum.
	  cout <<sum;


	  //                                                       PROGRAM NUMBER 4 ( PRINTING PATTERNS)
	  // first pattern
	  // outer loop to manage rows.
	  for (int i=1;i<5;i++){
	 	   // inner loop to manage what happens in those rows. 
	       for ( int j =1; j<5; j++){
	          cout << "* "; 
		    }
	       cout << endl;
	    }
		 
       // second pattern
       // Number of rows in the pattern
	   int rows = 5; 
	   // Outer loop for rows
       for (int i = 0; i < rows; i++) {
	        // Inner loop for printing '*' 
            for (int j = 0; j < rows - i; j++) {
               cout << "* ";
            }
            // Moving to the next line
            cout << endl;
        }

        //                                                             PROGRAM NUMBER 5 ( FACTORIAL )
	    int num, fact = 1;
        //user input
        cout << "Enter a number: ";
        cin >> num;
        // condition
        if (num < 0) {
           cout << "Factorial of negative numbers is not defined.";
        } 
	    else {
            for (int i = 1; i <= num; i++) {
               fact *= i;
            }
            cout << "Factorial of " << num << " is: " << fact;
        }

    return 0;
}
