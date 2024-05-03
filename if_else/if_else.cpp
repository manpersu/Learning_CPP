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