# This repo is for Learning CPP
Below are the list projects I built while learning C++

## Hello World
This is a simple **Hello world** program. 
There is nothing special about it.

```
/****************************************
 * This is a hello world program
*/
using namespace std;
#include <iostream>



int main()
    {
        string name{"Manpersu"};
        std::cout<< "Hello " << name <<endl;


    }

```


## IF-ELSE Statement
- **Nested  if-else**


```
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

```


- **Simple if-else statement**

```
/****************************
 * Simple IF ELSE statement
 * 
 * Description: This programs checks if a user is above the age of 17
*/
#include <iostream>
using namespace std;

int main()
    {
        int age{19};
        if (age < 18) {
            std::cout << "Sorry, only users above the age of above 18 are allowed!" << endl; 
        }
        else {
            std::cout << "Hello buddy, I have been expecting you. I'm glad you could join us!" << endl;
        }

        return 0;
    }

```




