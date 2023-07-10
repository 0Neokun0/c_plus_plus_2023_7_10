/*
    Functions
    Boss/Worker analogy
    - Write your code to the function specification
    - Understand what the fucntion dows
    - Understand what informatoin the function needs
    - Understand what the function returns
    - Understand any errors the function may produce
    - Understand any performance constraints
*/
#include <iostream>
using namespace std;

int number {}, output{} ; // Declaring number as a global variable

void read_input()
{
    cout << "Input a integer : ";
    cin >> number;
}

void process_input()
{
    output = 2 + number;
}

void provide_output()
{

    cout << "Adding 2 to the integer : " << output;
}

int main()
{
    // read input
    read_input();

    // process input
    process_input();

    // provide output
    provide_output();

    

    cout << endl;
}
