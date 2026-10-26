#include <iostream>
using namespace std;
int main()
{
    int n, x, m, num, k;
    cin >> n;

    int* arr = new int[n + 1];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    cin >> x;
    for (int i = 0;i < n;i++)
    {
        if (x >= arr[i] && x <= arr[i + 1])
        {
            m = arr[i + 1];
            num = i + 1;
            arr[i + 1] = x;
            break;
        }
        else if (x < arr[i])
        {
            m = arr[0];
            arr[0] = x;
            arr[1] = m;
            num = 1;
            break;
        }
        else
        {
            arr[n] = x;
            goto flag;
        }
    }
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