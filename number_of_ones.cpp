#include <iostream>
using namespace std;
int numberofones(int n)
{
    int count = 0;
    while (n)
    {
        n = n & (n - 1);
        count++;
    }
    return count;
}
int main()
{
    cout << "Enter the number to be checked: ";
    int n;
    cin >> n;
    cout << "The number of ones in the binary number of the entered decimal number is:"
         << " " << numberofones(n);
    return 0;
}