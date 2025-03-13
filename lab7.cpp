 #include<iostream>
#include<iomanip>
#include<windows.h>
#include<string>
using namespace std;
int  main (){
	
	//                                  LAB # 7 DATED : DECEMBER 3, 2024
    //	                 TASK # 1 (TO CHECK IF THE NUMBER IS POSITIVE, NEGATIVE OR ZERO.)
    HANDLE h= GetStdHandle(STD_OUTPUT_HANDLE);
    // VARIABLE DECLARATION.
	int num1;
	// USER INPUT
	cout << "Enter any number:";
	cin >> num1;
	if (num1>0){  // CONDITION
		cout <<"The Number is positive.";
	}
	else if (num1 < 0){
		cout <<"The Number is neagtive.";
	}
	else {
		cout << "The Number is zero.";
	}



    //                            TASK # 2 (PROGRAM THAT SUGGESTS ACTIONS BASED ON TEMPERATURE)
    // VARIABLE DECLARATION
    int temp;
    cout << setw (75) << " AI TO HELP YOU LIVE ACCORDING TO THE SEASONS.\n" <<endl;
    // USER INPUT.
	cout << "Dear user please enter the temperature: ";
	cin >> temp;
	// ADVICE BASED ON TEMPERATURE INPUT.
	if (temp>=40){
		cout << "Advice:\nDear user you should stay indoor because it is too hot." << endl;
	}
	else if (temp>=30 && temp<=39){
		cout << "Advice:\nDrink Plenty of water to stay hydrated." << endl;
	}
	else if (temp>=20 && temp <=29){
		cout << "Advice:\nDear user the weather is pleasent and suitable for outdoor activities." << endl;
	}
	else {
		cout << "Advice:\nDear user wear some warm clothes to stay comfy because it is too cold." << endl;
	}
		

//                               PROGRAM # 3 (PROGRAM TO SIMULATE A SIMPLE LOGIN SYSTEM.)
    // PREDEFINED USER-NAME AND PASSWORD. 
    string built_in_name = "admin";
    string built_in_password = "12345";
    // DECLARATION OF VARIABLES FOR USER INPUT. 
    string name, password;
    //USER INPUT.
    cout <<setfill(' ')<<right<<setw(65)<<"LOGIN SYSTEM"<<endl;
	cout << "Please Enter Your name:";
	getline(cin,name) ;
	cout << "Please Enter password:";
	// ACCESS CONTROL.
	getline(cin,password);
	if (name==built_in_name && password==built_in_password) {
		SetConsoleTextAttribute(h,2);
		cout << "\nAccess Granted." << endl;
		SetConsoleTextAttribute(h,7);
	} 	
	else if (name==built_in_name && password!=built_in_password){
		SetConsoleTextAttribute(h,4);
		cout << "\nIncorrect password" << endl;
		SetConsoleTextAttribute(h,7);
	}
	else {
		SetConsoleTextAttribute(h,4);
		cout << "\nUser Not Found!" << endl;
		SetConsoleTextAttribute(h,7);
	}

	
//                                    PROGRAM # 4 (UNIVERSITY EXAM RESULT AND SCHOLARSHIP ELIGIBILITY SYSTEM.)
    // DECLARATION OF VARIABLES FOR USER INPUT.  
    double	totalObtainedMarks,totalMarks,percentage;
    int marksInMaths,marksInPhysics,marksInUrdu;
    char gradeInMaths,gradeInPhysics,gradeInUrdu;
    // USER INPUT.
    cout << setfill(' ')<<right<<setw(65)<<"UNIVERSITY EXAM RESULT"<<endl;
    cout << "Please Enter your marks in Maths: ";
    cin  >>marksInMaths;
    cout << "Please Enter your marks in Physics: ";
    cin  >>marksInPhysics;
    cout << "Please Enter your marks in Urdu: ";
    cin  >>marksInUrdu;
    // TO CHECK THE GRADE IN MATHEMATICS.
    if (marksInMaths>=90){
    	gradeInMaths= 'A';
    }
	else if (marksInMaths>=80 && marksInMaths<90){
		gradeInMaths= 'B';
    }
	else if (marksInMaths>=70 && marksInMaths<80){
		gradeInMaths= 'C';
    }
	else if (marksInMaths>=60 && marksInMaths<70){
		gradeInMaths= 'D';
    }
	else {
		gradeInMaths= 'F';
    }
	// TO CHECK THE GRADE IN PHYSICS.
	if (marksInPhysics>=90){
    	gradeInPhysics= 'A';
    }
	else if (marksInPhysics>=80 && marksInPhysics<90){
		gradeInPhysics= 'B';
    }
	else if (marksInPhysics>=70 && marksInPhysics<80){
		gradeInPhysics= 'C';
    }
	else if (marksInPhysics>=60 && marksInPhysics<70){
		gradeInPhysics= 'D';
    }
	else {
		gradeInPhysics= 'F';
    }
	// TO CHECK THE GRADE IN URDU. 
	if (marksInUrdu>=90){
	    gradeInUrdu= 'A';
    }
	else if (marksInUrdu>=80 && marksInUrdu<90){
		gradeInUrdu= 'B';
    }
	else if (marksInUrdu>=70 && marksInUrdu<80){
		gradeInUrdu= 'C';
    }
	else if (marksInUrdu>=60 && marksInUrdu<70){
		gradeInUrdu= 'D';
    }
	else {
		gradeInUrdu= 'F';
    }
	totalObtainedMarks = marksInMaths + marksInPhysics + marksInUrdu;
	totalMarks = 300;
	percentage = (totalObtainedMarks/totalMarks)*100;
	// TO GENERATE OUTPUT IN FORM OF A WELL ORGANIZED TABLE
	cout<<setw(60)<<"EXAM RESULT\n"<<endl;
	cout<<setfill(' ')<<left << setw(18) <<"Obtained Marks" <<
        setfill(' ')<<left << setw(18) <<"Total Marks"<<setfill(' ') << left << setw(15) 
		<<"Percentage"<<setfill(' ')<<left << setw(18) <<"Grade in Maths"<<setfill(' ')<<
		left << setw(20) <<"Grade in Physics" << "Grade in Urdu" <<endl;
	// SECOND HALF OF THE TABLE. 
	cout<< "    "<<setfill(' ')<<left << setw(18) <<totalObtainedMarks<<setfill(' ')
	    <<left << setw(18) << totalMarks<<setfill(' ')<<left<<setw(18) <<percentage<<
	    setfill(' ') << left << setw(18) << gradeInMaths << setfill(' ')<<left
	    << setw(18) << gradeInPhysics << gradeInUrdu <<"\n" << endl;
	// CONDITION FOR THE TERMINATION OF PROGRAM IF A PERSON FAILS IN A SUBJECT
	if (gradeInMaths== 'F' || gradeInPhysics=='F' || gradeInUrdu =='F'){
		SetConsoleTextAttribute(h,4); // FONT COLOUR CHANGE ON CONSOLE.
		cout << "Failed." << endl;
		SetConsoleTextAttribute(h,7);
	    return 0;
	}
	// TO CHECK THE ELIGIBILITY FOR SCHOLARSHIP AND IT'S TYPE
	cout <<setfill(' ') <<right << setw(85) <<"ELIGIBILITY FOR THE SCHOLARSHIP AND TO SPECIFY ITS TYPE" <<endl;
	if (totalObtainedMarks>=270 && gradeInMaths == 'A'
	   && gradeInPhysics == 'A' && gradeInUrdu == 'A'){
	   SetConsoleTextAttribute(h,2);
	   cout << "\nCongratulations! \nYou are Eligible For a Merit Scholarship" << endl;
	   SetConsoleTextAttribute(h,7);
	}
	else if (totalObtainedMarks>=240 && gradeInMaths == 'B'
	   && gradeInPhysics == 'B' && gradeInUrdu == 'B'){
	   SetConsoleTextAttribute(h,2);
	   cout << "\nCongrats! You are Eligible For a Regular Scholarship" << endl;
	   SetConsoleTextAttribute(h,7);
	}
	else {
		SetConsoleTextAttribute(h,4);
		cout << "We are sorry. You are not eligible for the scholarship." <<endl;
		SetConsoleTextAttribute(h,7);
	}
	cout << "\nThank You For Using our program!" << endl;
	
    //                                    PROGRAM # 5 (LOAN ELIGIBILITY CHECKER ---- NESTED IF.)
	// VARIABLE DECLARATION.
	int age;
	double annual_income;
	cout <<setfill(' ')<<right<<setw(68)<< "LOAN ELIGIBILITY CHECKER"<<endl;
	// USER INPUT.
	cout << "Please Enter Your Age: ";
	cin  >> age;
	cout << "Please Enter Your Annual Income: ";
	cin  >> annual_income;
	// OUTER IF STATEMENT.
	if (age>=18){ 
		if (annual_income>=30000){  // NESTED IF
			SetConsoleTextAttribute(h,2);
			cout << "Congrats! You are eligible for a loan." << endl;
			SetConsoleTextAttribute(h,7);
	    }
		else {
			cout << "You meet the age requirement but are not eligible for"
			" a loan because your annual income is less than $30,000. " << endl;
		}
	}
	else {
		SetConsoleTextAttribute(h,4); // TO CHANGE THE FONT COLOUR ON CONSOLE.
		cout <<"You are not eligible for a loan because you are under 18 years of age." <<endl;
		SetConsoleTextAttribute(h,7); 
	}
	
	
    //                              PROGRAM # 6 (ROLE BASED ACCESS SYSTEM).
    // PREDEFINED USERNAME AND PASSWORD.	
    string userName = "haseeb";
    string password = "haseeb1";
    // VARIABLE DECLARATION.
    string enteredUserName, enteredPassword, role;
    // TAKING INPUT FROM THE USER.
    cout << setfill(' ')<<right<<setw(67)<<"ROLE BASED ACCESS SYSTEM"<<endl;
	cout << "Enter Username: ";
	getline(cin,enteredUserName);
	cout << "Enter Password: ";
	getline(cin,enteredPassword);
	//TO CHECK LOGIN INFORMATION.
	if (enteredUserName==userName && enteredPassword==password){
		SetConsoleTextAttribute(h,2);
		cout << "Authentication Successful!"<<endl;
		SetConsoleTextAttribute(h,7);
		// ROLE BASED ACCESS CONTROL.
		cout << "Enter Role: ";
		cin >> role;
		if(role=="Admin" || role=="admin"){
			SetConsoleTextAttribute(h,2);
		    cout << "Full Access."<<endl;
		    SetConsoleTextAttribute(h,7);
	    }
		else if (role=="Guest"|| role=="guest"){
			cout <<"Limited Access."<<endl;
		}
		else {
			cout <<"No Access!"<<endl;
		}
	}
	else if (enteredUserName==userName && enteredPassword!=password){
	    SetConsoleTextAttribute(h,4);
		cout << "Incorrect Password. Access Denied!"<<endl;
		SetConsoleTextAttribute(h,7);
	}
	else{
		SetConsoleTextAttribute(h,4);
		cout << "User Not Found. Access Denied!"<<endl;
		SetConsoleTextAttribute(h,7);
	}
	 
return 0;	
}