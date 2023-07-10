/*

*/
#include <iostream>
using namespace std;

int sum(int x, int y);

int main()
{
    //Start from below
    int num1, num2, add;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    add = sum(num1, num2);

    cout <<"\nResult = " << add;
    cout << endl;

    return 0;
}
int sum(int x, int y)
{
    int res;
    res = x+y;
    return res;
}