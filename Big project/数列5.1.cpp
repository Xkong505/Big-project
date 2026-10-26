#include <iostream>
using namespace std;
int main()
{
    int n, x, m, num, k, i = 0;
    cin >> n;


    int* arr = new int[n + 1];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    if (n == 0)
    {
        cout << x << " ";
        return 0;
    }
    if (x < arr[i])
    {
        m = arr[0];
        arr[0] = x;

        num = 0;
        goto abc;

    }
    for (int i = 0;i < n;i++)
    {
        if (x >= arr[i] && x <= arr[i + 1])
        {
            m = arr[i + 1];
            num = i + 1;
            arr[i + 1] = x;
            break;
        }

        else if (x > arr[n - 1])
        {
            arr[n] = x;
            goto flag;
        }

    }
abc:
    for (int i = num + 1;i < n + 1;i++)
    {
        k = arr[i];
        arr[i] = m;
        m = k;

    }
flag:

    for (int i = 0;i < n + 1;i++)
    {
        cout << arr[i] << " ";
    }


}