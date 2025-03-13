#include<iostream>
#include<iomanip>
using namespace std;

//                                       LAB # 14 ( DATED: FEBRUARY 18, 2025 )
//                     TOPICS - POINTERS - TYPES OF POINTERS - ARITHMETIC OPERATIONS ON POINTERS
// function declaration.
void swap (int *a, int *b);
// main function
int main (){
	//                                           TASK # 1 ( WORKING WITH A POINTER)
	int var=10;
	// declaring and initializing the pointer.
	int *ptr = &var;
	// printing the value by dereferencing.
	cout << "Value of var: " << *ptr << endl; 

	
	//                                        TASK # 2 ( MODIFYING THE VALUE USING A POINTER)
    // variable declaration.
	int var = 15; 
	// initializing the pointer.
	int *ptr = &var;
	cout << "Original Value: " << var << endl;
	// modifying the value using a pointer.
	*ptr = 20;
	cout <<"Modified value: " << var << endl;

    //                                           TASK # 3 (TRAVERSING AN ARRAY USING POINTER)
	// Array Declaration.
	int array[5] = {1,3,6,9,5}; 
	// pointer pointing to the first element.
	int *ptr = array;
	// traversing the array.
	for ( int i = 0; i< 5; i++){
	   cout << *(ptr + i) << " "; // Accessing elements using pointer arithmetic.
    }
    cout << endl;

    //                               TASK # 4 ( SWAPPING TWO NUMBERS USING POINTERS)
    // Variable declaration
	int a = 10;
    int b = 15;
    cout << setfill(' ') << right << setw(65) << "Before Swapping" << endl; 
    // value before swapping.
    cout <<"a = "<<a<< ", "<<"b = "<<b<<endl;
    // calling function with address of a and b.
    swap(&a,&b);
    cout << setfill(' ') << right << setw(64) << "After Swapping" << endl;
    // value after swapping
    cout <<"a = "<<a << ", "<<"b = "<< b;
    

    //                                 TASK # 5 ( WORKING WITH A NULL POINTER) 
    // initializing a null pointer.
    int *ptr = NULL;
    // putting a check.
    if (ptr == NULL){
	   cout << "The pointer is null and does not point to any valid memory." << endl;
	}
	else { 
	   cout << "The pointer is not null and holds the address: " << ptr << endl;
	}
	

	//                                  TASK # 6 ( WORKING WITH A VOID POINTER)
	int a = 10;
	// Void pointer storing the address of integer variable.
	void *ptr = &a; 
	// Casting the void pointer to an int pointer before dereferencing
	cout << "Value of 'a' using void pointer: " << *(int *)ptr << endl;
	
	return 0;
}
    // function defination ( function to swap two numbers ) 
    void swap (int *a, int *b){
	  int temp=*a; // using a third variable to swap.
	  *a = *b;
	  *b = temp;
	}



