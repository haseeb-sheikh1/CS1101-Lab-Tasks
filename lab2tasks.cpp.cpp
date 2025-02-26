#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main ()
{
	//                                      LAB NUMBER 1&2 (DATED: October 21, 2024)
	//                                      FIRST TASK (TOTAL PURCHASE CALCULATION.)
    //initializing variables. 
	double item1 = 12.95; 
	double item2 = 24.95; 
	double item3 = 6.95 ;
	double item4 = 14.95;
	double item5 = 3.95 ;
	// determining subtotal by adding all items.
	double subTotal = item1 + item2 + item3 + item4 + item5 ;
	// calculating salesTax 
	double salesTax = (subTotal/6)*100;
	// calculating total.
	double Total    = subTotal + salesTax;
	// console output operation.
    cout << "Hello!\n";
	cout << "Price of item 1: " << "$" << item1 << endl;
	cout << "Price of item 2: " << "$" << item2 << endl;
	cout << "Price of item 3: " << "$" << item3 << endl;
	cout << "Price of item 4: " << "$" << item4 << endl;
	cout << "Price of item 5: " << "$" << item5 << endl;
	cout << "\nSubtotal: " <<  "$" << subTotal << endl;
	cout << "Sales Tax (6%): " << "$" << salesTax << endl; // salestax
	cout << "Total: "<<"$"<<Total<< endl; // displaying total
	
	//                                 SECOND TASK (AVERAGE OF PREDEFINED TEST SCORES ROUNDED TO TWO DECIMAL PLACES.)
	// initializing variables
    double value1  = 85.5 ;
    double value2  = 90.75;
    double value3  = 88.25;
    // calculating average.
    double average = (value1 + value2 + value3) / 3;
    // printing average
    cout <<"\nThe average of "<<value1<<", "<<value2<<" and "<< value3 <<" = "<< setprecision (4) <<fixed<<average<<endl;
    
    //                                    THIRD TASK (ARITHMETIC OPERATORS ON USER-ENTERED INTEGERS USING INPUT FUNCTION.)
    // variable declaration
    int num1,num2;
    // user input.
    cout << "Hello!\n\nPlease Enter two numbers :" << endl;
	cin  >> num1 >> num2;
	cout << "\nnumber 1 : "<< num1 << endl;
	cout << "number 2 : "<< num2 << endl;
	// arithmetic operations.	
    int sum = num1 + num2;
    int sub = num1 - num2;
    int mul = num1 * num2;
    int div = num1 / num2;
    int mod = num1 % num2;
    // printing results.       
	cout << "\t\nAddition:\n\t\t" << num1 << " + " << num2 << " = " << sum << endl;
	cout << "\t\nSubtraction:\n\t\t" << num1 << " - " << num2 << " = " << sub << endl;
	cout << "\t\nMultiplication:\n\t\t"<< num1 << " * " << num2 << " = " << mul << endl;
	cout << "\t\nDivision:\n\t\t"<< num1 << " / " << num2 << " = " << div << endl;
	cout << "\t\nModulus:\n\t\t" << num1 << " % " << num2 << " = " << mod << endl;
		
	//                                                FOURTH TASK (BMI CALCULATOR.)
	// variable declaration.
	int weight;
	double height;
	// user input
	cout<<"BMI CALCULATOR."<< endl;
	cout<<"\nHello!\n\nPlease Enter your weight in kilograms:" << endl;
	cin >>weight;
	cout<<"\n\nNow Enter your height in meters:"<< endl;
	cin >> height;
    // calculating BMI
    double	bmi = weight / (height * height);
    cout << "\n\nYour BMI is :"<<bmi << endl;
		
    //                                             FIFTH TASK (TRIP COST CALCULATOR.)  
	// variable declaration	 
	double distance,fuelEfficiency,fuelCost;
	// user input	
	cout << "Trip Cost Estimater.\n_____________________\n" << endl;
	cout << "Hello!\n\nPlease Enter the total distance in kilometers :"<< endl;
	cin  >> distance;
	cout << "\nNow Enter the Fuel Efficiency of your vehicle in (kilometers per litre):" << endl;
	cin  >> fuelEfficiency;
	cout << "\nLastly Enter the Fuel Cost (per litre):"                                  << endl;
	cin  >> fuelCost;
	// variable declaration	
	double tripCost;
	// calculating tripcost.
	tripCost = (distance/fuelEfficiency) * fuelCost;
	cout << "\nThis trip will cost you : " <<  "$"  <<  tripCost  << "\n\nBest Of Luck!" << endl;
		
return 0;

}
		
