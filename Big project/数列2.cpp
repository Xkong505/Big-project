#include <iostream>
using namespace std;
int main()
{
    int n, m;
    cin >> n;
    int* arr = new int[n];
    // for (int i = 0;i < n;i++)
    // {
    //     cin >> arr[n - 1 - i];

    // }

    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0;i < n;i++)
    {
        if (i < n - 1-i)
        {
            m = arr[i];
            arr[i] = arr[n - 1 - i];
            arr[n - 1 - i] = m;
        }


    }
    for (int i = 0;i < n;i++)
    {
        cout << arr[i];
        if (i < n - 1)
        {
            cout << " ";
        }
    }
}