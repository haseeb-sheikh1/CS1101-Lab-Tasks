#include<iostream>
#include<iomanip>
using namespace std;
int main (){
	//                                              LAB # 11 DATED: 28 JANUARY 2025
	//                                            PROGRAM # 1 (INITIALIZE AND PRINT AN ARRAY)
	int i; // COUNTER.
	cout << setfill(' ') << right << setw(65) <<"ARRAY"<< endl;
	// INITIALIZING THE ARRAY.
	int numberArray[5] = {22,55,73,29,34};
	for (i=0;i<5;i++){
		cout << numberArray[i] <<", ";
	}
	
	//                                                    PROGRAM # 2 (PRINT ARRAY IN REVERSE ORDER)
	int i;// COUNTER.
	cout << setfill(' ') << right << setw(65) <<"REVERSED ARRAY"<< endl;
	int numberArray[6];
	for (i=0;i<6;i++){
		cout << "Enter Element "<<i+1<<" of the Array:";
	    cin >> numberArray[i];
    }
    for (int j=5;j>=0;j--){
	    if (i==0){
		    cout << numberArray[j];
		}
		else {
			cout << numberArray[j] <<", ";
		}
	}

    //                                                          PROGRAM # 3 (SUM AND AVERAGE OF ARRAY ELEMENTS)
	cout << setfill(' ') << right << setw(65) <<"SUM CALCULATOR"<< endl;
	double sum,average;
	double array[5] = {3.25,7,10,33,52};
	for (int i=0; i<5; i++){
		// calculating sum.
		sum=sum+array[i];
	}
	cout << "Sum = "<< sum << endl;
	// calculating average.
	average = sum/5;
	cout << setfill(' ') << right << setw(67) <<"AVERAGE CALCULATOR"<< endl;
	// displaying average
	cout << "Average = "<<average <<endl;
	
	//                                         PROGRAM # 4 (LENGHT OF ARRAY)
	int i;
	double length;
	cout << setfill(' ') << right << setw(65) <<"LENGTH CALCULATOR"<< endl;
	int bigArray [11] = {3,1,5,9,44,12,35,3,6,8,9};
	for (i=0;i<11;i++){
			length = sizeof(bigArray)/sizeof(bigArray[0]);
	}
	cout << "Length of Array: "<<length;
	
	
	//                                                          PROGRAM # 5 (TO FIND THE LARGEST NUMBER IN AN ARRAY)
	
	cout << setfill(' ') << right << setw(65) <<"LARGEST NUMBER CALCULATOR"<< endl;
	int i, n, largestNumber;
	//USER INPUT FOR THE LENGTH OF ARRAY
	cout << "Enter the number of elements of the Array: ";
	cin >> n;
	// DECLARATION OF AN ARRAY TO HOLD INPUT.
	int numbers[n];
	// LOOP TO GET ELEMENTS OF ARRAY FROM USER.
	for (i=0;i<n;i++){
		cout << "Enter Element "<<i+1<<" of the Array:";
	    cin >> numbers[i];
    }
    // CONSIDERING FIRST INDEX NUMBER AS THE LARGEST.
    largestNumber=numbers[0];
    for (i=1;i<n;i++){
    	// UPDATING THE VALUE OF LARGEST NUMBER IF REQUIRED.
    	if (numbers[i]>largestNumber){
        	largestNumber=numbers[i];
    	}
    }
    cout <<"Largest Number: "<<largestNumber;

	return 0;
}