
//                                               LAB # 13 (DATED: 14 FEB, 2025)
//                         TOPICS - FUNCTION OVERLOADING - FUNCTION RECURSION - PASS BY VALUE / REFERENCE
//                               TASK # 1 ( CALCULATOR WITH ALL POSSIBLE INPUT VALUE COMBINATIONS)
    #include<iostream>
    #include<iomanip>
    #include<windows.h>
    #include<conio.h>
    #include<cstdlib>
    #include<string>
    using namespace std;
    // Function definations.
    double addition (double a, double b){
	   return a+b;
    }
    double addition (double a, double b, double c){
	   return a+b+c;
    }
    // subtraction functions.
    double subtraction (double a, double b){
	   return a-b;
    }
    double subtraction (double a, double b, double c){
	   return a-b-c;
    }
    // multiplication functions.
    double multiplication (double a, double b){
	   return a*b;
    }
    double multiplication (double a, double b, double c){
	   return a*b*c;
    }
    // division functions.
    double division (double a, double b){
	   return a/b;
    }
    // USING DOUBLE DATA TYPE CUZ DOUBLE CAN STORE FLOAT AS WELL AS INT.
    int main (){
	    while (true){ 
	       double num1, num2,num3;
	       char operation1 ,operation2;
	       // CONSIDERED FALSE VALUE OF FLAG IN STARTING
	       bool isdone= false;
	       cout << setfill(' ') <<right<<setw(65)<<"CALCULATOR"<<endl;
	       cout << "Press 1 for two number calculations and 0 for three: ";
	       cin >> isdone; // UPADTED VALUE OF FLAG AFTER USER INPUT.
	       if (isdone){  
	          // IF FLAG IS TRUE MEANING USER WANTS TO DO CALCULATIONS ON TWO NUMBERS.
	          cin >> num1 >>operation1 >> num2;
            }
	       else {
	 	       // IF FLAG IS FALSE MEANING USER WANTS TO DO CALCULATIONS ON THREE NUMBERS.
		       cin >> num1>>operation1>>num2>>operation2>>num3;
	        }
           if (isdone){
    	       // TWO NUMBER OPERATIONS
		       switch (operation1){  // OPERATOR 1 IN SWITCH 
	                case '+':
		              cout <<	addition(num1, num2)<< setprecision(5)<<fixed<<endl;
		              cout << "\nPress any key to clear Screen: ";
		              getch();
		              system("cls"); // TO CLEAR THE SCREEN
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
                }
	        }
           else {
               // THREE NUMBER OPERATIONS IN VIEW OF OPERATOR 1 AND 2.
               // WAS NOT ABLE TO USE SWITCH BECAUSE OF TOO MUCH CASES IN MAIN.
	           if (operation1 =='+'&& operation2=='+'){
                  cout << addition(num1,num2,num3);
		          cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls");
	            }
               else if (operation1 =='-'&& operation2=='-'){
                  cout << subtraction(num1,num2,num3);
		          cout << "\nPress any key to clear Screen: ";
	              getch();
                  system("cls");
		          break;
			    }  
		        else if (operation1=='*'&& operation2=='*'){
				  cout << multiplication(num1, num2,num3);
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls");
			      break;
			    }
                else if (operation1 =='/'&& operation2=='/'){
		    	  cout << "Two numbers for division!"<<endl;
			      cout << "\nPress any key to clear Screen: ";
		          getch();
		          system("cls");
		          break;
				}
				else {
					cout << "Invalid Operation"<<endl;
				}
	        }
        }
        return 0;
	}
    
    //                                  PROGRAM # 2 (SUM OF FIRST N INTEGERS)
    #include<iostream>
    #include<iomanip>
    #include<windows.h>
    #include<conio.h>
    #include<cstdlib>
    #include<string>
    using namespace std;
    // FUNCTION DECLARATION.
    int sum(int n){
	    if (n==1){ // base condition (if n equals 1 return 1) 
	       return 1;
	    }
	    return n + sum(n-1); // resusive condition
	}
	int main(){
        int n;
        cout << "Enter Number: ";
        cin >> n;
        cout <<"Sum of first "<<n<<" integers: "<< sum(n); 
        return 0;     
	}
    
    //                                     PROGRRAM # 3( FUNCTION PASS BY REFERENCE )
    #include<iostream>
    #include<iomanip>
    #include<windows.h>
    #include<conio.h>
    #include<cstdlib>
    #include<string>
    using namespace std;
    // Function pass by reference.
    void swap(int &a, int &b){
	   int temp = a; // putting the value of a in temp. 
	   a=b;    // putting the value of b in a.
	   b=temp; // asssigning the previously modified value of temp to b.
    }
    int main(){
       int a = 10;
       int b = 15;
       // Before swapping.
       cout << "Before Swapping: a = "<<a<<"\tb = "<<b<<endl;
       swap(a, b);
       // after swapping.
       cout << "After Swapping: a = "<<a<<"\tb = "<<b<<endl;
       return 0;
    }


