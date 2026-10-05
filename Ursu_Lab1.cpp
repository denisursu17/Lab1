#include <iostream>
using namespace std;

#define SIZE 5

void bsort(int iArray[], int n);

int main()
{
    char ch;
    int iArray[SIZE];

    cout << "Enter " << SIZE << " numbers:" << endl;

    for (int ii = 0; ii < SIZE; ii++)
    {
        cin >> iArray[ii];
    }

    cout << "\nWould you like to sort (Y/N)? ";
    cin >> ch;

    if (ch == 'Y' || ch == 'y')
    {
        bsort(iArray, SIZE);
    }

    cout << "\nArray: ";

    for (int ii = 0; ii < SIZE; ii++)
    {
        cout << iArray[ii] << " ";
    }

    cout << endl;

    return 0;
}

void bsort(int iArray[], int n)
{
    int t;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (iArray[i] > iArray[j])
            {
                t = iArray[j];
                iArray[j] = iArray[i];
                iArray[i] = t;
            }
        }
    }
}