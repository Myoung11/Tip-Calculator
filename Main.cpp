/* Summary: The program takes users meal total, asks them the percent they want to tip,
   then it will tell them how much to tip. */
    
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main()

{   // Beginning of Main Function
    
    double mealTotal; // Variable for user inputed meal amount
    double tipPercent; // Variable for user inputed gratuity percentage
    double tipAmount; // Variable for program generated tip amount

    tipAmount = tipPercent * mealTotal; /* Calculates the amount to tip 
                                           by taking the tip percent and 
                                           multiplying it by the meal total */
    
    cout << setfill('*'); 
    cout << setw(45) << " " << endl; // Input top border
    
    cout << setfill('.'); // Input dots to keep track of rows
        
    cout << setw(12) << " Enter Meal Total: "; // Ask user to input meal total
        cout << setw(12) << right << " $"; // Align input box and input dollar symbol
        cin >> mealTotal; // Customer will enter the dollar amount of the meal
    
    cout << " Percent to tip(15 = 15%): "; // Ask user for gratuity percent
    cout << setw(4) << right << " "; // Align input box for gratuity percent
        cin >> tipPercent; // Customer will enter desired tip percent 
        tipPercent = tipPercent / 100; // Take entered tip and convert to a decimal (15 = 0.15)
    
    tipAmount = tipPercent * mealTotal; // Tip amount will equal the percent times the total from the meal
        cout << " - - - - - - - - - - - - - - - - - - -" << endl; // Input dashes for top of output box
        cout << " - " << " Gratuity Amount: "; // Title for output 
        cout << fixed << setprecision(2) << setw(10) << right << " $"; // Align output and dollar sign
        cout << tipAmount << " -" << endl; // This will give tip amount
        cout << " - - - - - - - - - - - - - - - - - - -" << endl; // Input dashes for bottom of output box
        
      
        
    cout << setfill('*'); 
    cout << setw(45) << " " << endl; // Input bottom border
    
     return 0;

} // End of Main Function
