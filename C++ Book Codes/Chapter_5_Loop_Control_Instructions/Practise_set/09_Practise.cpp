/*
9.	Draw the following pattern using loops. Take the hierarchy (levels of stars) from the user. The below pattern is printed when the input is 3.
             *
            * *
           * * * 
            * *
        	 *
……and so on …….
*/

#include <iostream>
using namespace std;
int main()
{
    int input;
    int space;
    cout << "Enter the hierarchy of stars" << endl;
    cin >> input;

    // for the upper stars from the mid region
    for (int i = 1; i <= input; i++)
    {
        space = input - i;

        for (int k = 1; k <= space; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= i; j++)
        {
            cout << " *";
        }

        cout << "\n";
    }

    // for the lower stars from the mid region
    for (int i = 1; i <= input; i++)
    {

        for (int k = 1; k <= i; k++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (input - i); j++)
        {
            cout << " *";
        }

        cout << "\n";
    }

    return 0;
}
