// Star Pattern 11

#include <iostream>
using namespace std;

int main()
{
    int rows = 8;
    int n = (rows + 1) / 2;
    int k = 0;
    for (int i = 1; i <= rows; i++)
    {
        if (rows % 2 == 0)
        {
            if (i <= n)
            {
                k++;
            }
            if (i > n + 1)
            {
                k--;
            }
        }
        else
        {
            if (i <= n)
            {
                k++;
            }
            else
            {
                k--;
            }
        }
        for (int j = 1; j <= k; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}