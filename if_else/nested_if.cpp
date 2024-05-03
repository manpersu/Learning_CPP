/*****************************************
 * Nested IF-ELSE statement
 * 
 * Description: This program uses nested IF-ELSE to check if a year is a leap year or not.
 * 
*/

#include <iostream>
using namespace std;

int main()
    {
        int year{2024}; // Assign 2020 to the 'year' variable
            if ((year % 4 == 0) && (year % 3200 != 0)){
                if (year % 400 == 0){
                    std::cout << "The year " << year << " is a leap year." << endl;}

                else{
                  std::cout << "The year " << year << " is a leap year." << endl;  }
                }
                
            else{
                std::cout << "The year " << year  << " is not a leap year" <<endl;

            }


        return 0;
        
    }