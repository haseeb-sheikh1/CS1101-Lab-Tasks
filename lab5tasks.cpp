#include<iostream>
#include<windows.h>
#include<iomanip>
#include<string>
using namespace std; 
int main() 
   {
       HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
       //                                        LAB # 5 ( DATED: November 26, 2024.) 
       //                            PROGRAM # 1(TO CHECK AND PRINT IF THE NUMBER IS POSITIVE.)
       // VARIABLE DECLARATION.
	   int number;
	   // USING STREAM MANIPULATORS TO ORGANIZE OUTPUT.
	   cout <<setfill(' ')<<right<<setw(65)<< "POSITIVITY CHECKER" << endl;
	   // TAKING INPUT FROM THE USER.
	   cout << "Enter an Integer: ";
	   cin  >> number;
	   // CONDITION FOR CHECKING IF THE NUMBER IS POSITIVE.
	   if (number>0){
	   	 cout << "The Number " << number <<" is Positive." << endl;
	   }
	   
	   //                                    PROGRAM # 2 (CHECKING IF THE NUMBER IS EVEN.)
	   // VARIABLE DECLARATION.
	   int number1;
	   // USING STREAM MANIPULATORS TO ORGANIZE OUTPUT.
	   cout <<setfill(' ')<<right<<setw(65)<< "EVEN NUMBER CHECKER" << endl;
	   // TAKING INPUT.
	   cout << "Enter an Integer: ";
	   cin  >> number1;
	   // CONDITION FOR CHECKING IF THE NUMBER IS EVEN.
	   if (number1%2==0){
	   	 cout << "The Number " << number1 <<" is Even." << endl;
	   }
	   
       //                                        TASK # 3 (TO FIND THE LARGEST NUMBER.)
       int num1,num2,num3;  // VARIABLE DECLARATION.
       cout << setfill(' ')<<right<<setw(69)<< "GREATEST NUMBER FINDER" <<endl;
       // USER INPUT.
       cout << "Enter Number 1: ";
       cin >>num1;
       cout << "Enter Number 2: ";
       cin >>num2;
       cout << "Enter Number 3: ";
       cin >>num3;
       // DETERMINING THE GREATEST NUMBER USING ONLY IF STATEMENTS.
       if(num1>num2 && num1>num3){   
       	cout << num1<<" is greatest."; // CONDITION
	   }
	   if(num2>num1 && num2>num3){
       	cout << num2<<" is greatest."; // CONDITION.
	   }
	   if(num3>num1 && num3>num2){
       	cout << num3<<" is greatest."; // CONDITION.
	   }
	   
	   //                                        PROGRAM # 4 (GRADE CALCULATOR)
	   // VARIABLE DECLARATION.
	   int marks;
       string grade;
       // USING STREAM MANUPULATORS TO ORGANIZE OUTPUT.
       cout << setfill(' ') << right << setw(65) << "GRADE CALCULATOR" << endl;
       // USER INPUT.
       cout << "Please Enter your Marks: ";
       cin >> marks;
       if (marks>=90){   // USING ONLY IF STATEMENTS.
    	   grade="A+";
        }
	   if (marks>=80 && marks<90){
		   grade="A";
        }  
	   if (marks>=70 && marks<80){
		   grade="B";
        }
	   if (marks>=60 && marks<70){
		   grade="C";
        }
	   if(marks<60) {
		   grade="Fail";
        }
        cout << "Your Grade: " << grade; // PRINT GRADE
   	   
	    
		//                         PROGRAM # 5 (TRAFFIC SIGNAL SIMULATOR.)
	   char signalColour; // VARIABLE DECLARATION.
	   cout << setfill(' ')<<right<< setw(67)<<"TRAFFIC SIGNAL SIMULATOR" << endl; // USING STREAM MANIPULATORS.
	   // USER INPUT.
	   cout <<"Enter Colour: ";
	   cin >>signalColour;
	   // TRAFFIC SIGNAL SIMULATION BY COMPARING USER INPUT.
	   if(signalColour=='R'||signalColour=='r'){
	   	 SetConsoleTextAttribute(h,4); // TO CHANGE THE FONT COLOUR ON CONSOLE.
	   	 cout << "Stop!"<<endl;
	   	 SetConsoleTextAttribute(h,7);
	    }
		if(signalColour=='G'||signalColour=='g'){
		 SetConsoleTextAttribute(h,2);
	   	 cout << "Go"<<endl;
	   	 SetConsoleTextAttribute(h,7);
	    }
	   if(signalColour=='Y'||signalColour=='y'){
	   	 SetConsoleTextAttribute(h,6);
	   	 cout << "Slow Down!"<<endl;
	   	 SetConsoleTextAttribute(h,7);
	    }   
   	
       //                  PROGRAM # 6 (CHALLENGE - EMPLOYEE PAYROLL MANAGMENT SYSTEM.)
	   // PREDEFINED BASIC SALARIES. 
	   const double BASIC_SALARY_A = 50000;
       const double BASIC_SALARY_B = 30000; 
       const double BASIC_SALARY_C = 20000;
	   // VARIABLE DECLARATION. 
	   char grade; 
	   string name ; 
	   double basic_salary, gross_salary, net_salary;
	   double bonus = 0.0, tax = 0.0;  // INITIALIZING ZERO VALUE FOR MAXIMUM PRECISION.
	   // STREAM MANIPULATORS TO ORGANIZE OUTPUT.
	   cout << setw (76) << "EMPLOYEE PAYROLL MANAGMENT SYSTEM.\n" << endl;
	   cout << "Dear User Please Enter Your Name: ";
	   getline(cin,name); // TO GET THE WHOLE NAME WITH SPACES.
	   cout << "Dear User Please Enter Your Grade (A,B or C): ";
       cin >> grade; 
	   if (grade == 'A'|| grade == 'a'){
	      basic_salary = BASIC_SALARY_A;
		} 
	   if (grade == 'B' || grade =='b'){
	      basic_salary = BASIC_SALARY_B;
		} 
	   if (grade == 'C' || grade == 'c'){
	      basic_salary = BASIC_SALARY_C;
	    }
	   if (grade!='A'&& grade!='a' && grade !='B'&& grade!='b' && grade!='C' && grade!='c'){
	      SetConsoleTextAttribute(h,4);
	      cout << "You Have Entered An Invalid Grade!" << endl;
	      SetConsoleTextAttribute(h,7);
	    }
                     
       //TO CALCULATE THE BONUS.
       int years_of_service;
       cout << "Lasty Enter The Years Of Service: "; 
	   cin >> years_of_service;                               		     
       if (years_of_service >= 10){
	      bonus = 0.10 * basic_salary; // 10% of basic_salary.
	      SetConsoleTextAttribute(h,2);
	      cout << "Congrats we have given you a 10% bonus." << endl;
        }  
       if (years_of_service >= 5 && years_of_service <=9){
	      bonus = 0.05 * basic_salary; // 5% of basic_salary.
	      SetConsoleTextAttribute(h,2);
	      cout << "Congrats we have given you a 5% bonus." << endl;
	    } 
	   if (years_of_service < 5){
	   SetConsoleTextAttribute(h,4);
	      cout << "we haven't included a bonus as your years of services are much less." << endl;
		}
	   // TO CALCULATE THE TAX. 
	   SetConsoleTextAttribute(h,7);			   
	   gross_salary = basic_salary + bonus; 
	   if (gross_salary > 40000){
	      tax = 0.20 * gross_salary; // 20% tax.
	      cout << "Tax: 20%"<< endl;
	    } 
	   if (gross_salary >= 30000 && gross_salary <= 40000){
		  tax = 0.10 * gross_salary; // 10% tax.
		  cout << "Tax: 10%"<< endl;
		}
       // TO FIND THE NET SALARY.
	   net_salary = gross_salary - tax;
	   cout  << setw (60) << "RECIEPT\n" << endl;
       // TO GENERATE THE OUTPUT IN A WELL ORGANIZED TABLE.
	   cout << setfill(' ') <<left<<setw(24)<<"  Basic Salary" <<  setfill(' ') <<left<<setw(26)<<"Gross Salary"<< 
	   setfill(' ') <<left<<setw(16)<< "Tax" << setfill(' ') <<left<<setw(18)<< "Bonus" << "Net Salary" <<endl;
	   // SECOND HALF OF THE TABLE.
	   cout << setfill(' ')<<right<<setw(6)<<"$"<<basic_salary<<setfill(' ')<<right<<setw(16)<<"$"<<gross_salary<<setfill(' ')<<
	   right<<setw(18)<<"$"<<tax<<setfill(' ')<<right<<setw(12)<<"$"<<bonus<<setfill(' ')<<right<<setw(16)<<"$"<<net_salary<<endl;
	  
	   //                           TASK # 7 (BASIC ATM MACHINE.) 
       // VARIABLE DECLARATION.
       double account_balance, withdrawal_amount, remaining_balance,salary,years_of_service;
       cout << setfill(' ') << right << setw(73) <<"AUTOMATED TELLER MACHINE" <<endl; //STREAM MANIPULATORS.
       // USER INPUT.
	   cout << "Please Enter Your Account Balance: ";
	   cin  >> account_balance;
	   cout << "Please Enter The Withdrawal Amount: ";
	   cin >> withdrawal_amount;
	   if (withdrawal_amount <= account_balance){ // CONDITION
	      remaining_balance = account_balance- withdrawal_amount ;
	      cout << "Your updated balance after deduction is: " << "Rs " << remaining_balance<< endl;
        }  
        else{ 
          SetConsoleTextAttribute(h,4); // TO CHANGE THE FONT COLOUR ON CONSOLE.
		  cout << "Insufficient Ballance!" << endl;
	    }
	    SetConsoleTextAttribute(h,7);
	    // CHECKING LOAN ELIGIBILITY.
		cout << setfill(' ')<< right<<setw(69)<< "LOAN ELIGIBILITY"<<endl;
        cout << "Dear User Please Enter Your Salary: ";
        cin  >> salary;
        cout << "Dear User Please Enter Your years Of Service: ";
        cin  >> years_of_service;
	    if (salary >= 25000 || salary >= 20000 && years_of_service > 5){
	       SetConsoleTextAttribute(h,2); // FONT COLOUR CHANGE ON THE CONSOLE.
		   cout << "Congratulations You Are Eligible For The Loan." <<endl;
	    }
	    else{ 
	     SetConsoleTextAttribute(h,4);
		 cout <<"Sorry! You Are Not Eligible For The Loan." <<endl;
		 SetConsoleTextAttribute(h,7);
		} 
		              
	  return 0;
    }
				 