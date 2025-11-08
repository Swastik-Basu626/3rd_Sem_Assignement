#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the number of array elements" << endl;
    cin >> n;

    int arr[n];
    int ep = 0; // even positive
    int op = 0; // odd positive
    int en = 0; // even negative
    int on = 0; // odd negative

    cout << "Enter the array elements" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 0)
        {
            ep += arr[i];
        }
        else if (arr[i] > 0 && arr[i] % 2 != 0)
        {
            op += arr[i];
        }
        else if (arr[i] < 0 && arr[i] % 2 == 0)
        {
            en += arr[i];
        }
        else if (arr[i] < 0 && arr[i] % 2 != 0)
        {
            on += arr[i];
        }
    }

    cout << "Sum of all the even positive numbers present in the array is " << ep << endl;
    cout << "Sum of all the odd positive numbers present in the array is " << op << endl;
    cout << "Sum of all the even negative numbers present in the array is " << en << endl;
    cout << "Sum of all the odd negative numbers present in the array is " << on << endl;

    return 0;
}