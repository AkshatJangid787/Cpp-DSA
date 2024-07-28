#include <iostream>
using namespace std;

void inverted_number_pyramid(int n)
{
    for (int i = n; i > 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}
//    for (int i = 0; i < N; i++)
//     {
// This is the inner loop which loops for the columns
// no. of columns = (N - row index) for each line here
// as we have to print an inverted pyramid.
// (N-j) will give us the numbers in a row starting from 1 to N-i.
// for (int j =N; j>i; j--)
// {
//     cout <<N-j+1<<" ";
// }

// As soon as numbers for each iteration are printed, we move to the
// next row and give a line break otherwise all numbers
// would get printed in 1 line.
// cout << endl;
// }
// }

int main()
{
    int n;
    cin >> n;
    inverted_number_pyramid(n);
    return 0;
}