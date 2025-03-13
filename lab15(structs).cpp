 
 #include<iostream>
 #include<iomanip>
 using namespace std;
    //                                                    LAB # 15 (DATED: Feb 24, 2025)
    //                                             STRUCTURES - ARRAY OF STRUCTURES - POINTERS
    //                                                          PROGRAM NUMBER 1
	// Defining a structure named student.
    struct student{
	  // Data members of the structure.
	  string firstName;
	  string lastName;
	  int rollNumber;
	  double marks;
	  // member function to display student info.
	  void displayStudentInfo(){
	  	  // using stream manipulators to organize output.
	  	  cout << setfill(' ') << right << setw(65) << "Student Information" << endl; 
		  cout << "Student Name: "<< firstName << " " << lastName << endl;// displaying full name.
		  cout << "Marks: "<< marks<<endl; // displaying marks.
	    }
    }; 
   int main(){
	  // Declaring a structure variable. 
	  student A1;
	  // Assigning values to the structure members.
	  A1.firstName= "Haseeb";
	  A1.lastName="Sheikh";
	  A1.marks= 95.5;
	  A1.rollNumber=31;
	  // calling the member function.
	  A1.displayStudentInfo();
	  return 0; // return statement.
    }
    
    //                                                        PROGRAM NUMBER 2
    //                                                       ARRAY OF STRUCTURE 
    #include<iostream>
    #include<windows.h>
    #include<iomanip>
    using namespace std;
    // structure defination.
    struct student{
	  string firstName;
	  string lastName;
	  int rollNumber;
	  double marks;
	  // member function to display student info.
	  void displayStudentInfo(){
	  	  cout << "Full Name: " << firstName << " " << lastName << endl;
		  cout << "Marks: " << marks << endl;
	    }
    }; 
    int main(){
      int numStudents; // variable declaration.
      // Asking user for the number of students.
      cout << "\nEnter Number of Students: ";
      cin >> numStudents;
      // declaring array of structure.
      student arr[numStudents];
      // to input details.
	  for (int i=0; i<numStudents; i++){
	      cout << "\nEnter details for student "<< i+1 << ":" << endl;
		  cout << "First name of student: ";
		  cin >> arr[i].firstName;
		  cout << "Last name of Student: ";
		  cin >> arr[i].lastName;
		  cout << "Roll No. of Student: ";
		  cin >> arr[i].rollNumber;
		  cout << "Marks for Student: ";
		  cin >> arr[i].marks;
	    }
	   system("cls"); // to clear the screen.
	   // displaying details.
	   cout << setfill(' ') << right << setw(65) << "Student Information" << endl; 
       for(int i=0; i<numStudents; i++){
     	   cout << "Student " << i+1 << endl;
           arr[i].displayStudentInfo();
        }
       return 0;
    }

    //                                                              PROGRAM NUMBER 3
    //                                                           POINTER TO A STRUCTURE
    #include<iostream>
    #include<windows.h>
    #include<iomanip>
    using namespace std;
    // structure defination.
    struct student{
	  string firstName;
	  string lastName;
	  int rollNumber;
	  double marks;
	  // Member function to display info.
	  void displayStudentInfo(){
	  	  cout << "Full Name: " << firstName <<" "<< lastName << endl;
		  cout << "Marks: " << marks << endl;
	    }
    }; 
    int main(){
       // Variable Declaration.
	   int numStudents;
	   // Asking the user to input total number of students.
	   cout << "Enter total number of students: ";
	   cin  >> numStudents;
	   // Dynamically allocating memory for the array.
	   student* array = new student[numStudents];
	   // Inputting details using pointers
       for (int i=0; i<numStudents; i++){
          cout << "Input details of student " << i+1 << endl; 
		  cout << "First Name: ";
		  cin >> (array+i)->firstName;
		  cout << "Last Name: ";
		  cin >> (array+i)->lastName;
		  cout << "Roll Number: ";
		  cin >> (array+i)->rollNumber;
		  cout << "Marks for Student: ";
		  cin >>(array+i)->marks;
	    }
	    // To clear the screen.
	   system("cls");
	   // Displaying info.
	   cout << setfill(' ') << right << setw(65) << "Student Information" << endl;
       for(int i=0; i<numStudents; i++){
     	  cout << "Student " << i+1 << endl;
     	  // during each iteration array gets the next memory address.
          (array+i)->displayStudentInfo();
        }
       return 0;
    } 
