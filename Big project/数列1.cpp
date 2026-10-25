#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    // int arr[n];
    int* arr = new int[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
    }
    int max = -99999, m = 0;
    for (int i = 0;i < n;i++)
    {
        if (max >= arr[i])
        {
            continue;
        }
        else
        {
            max = arr[i];
            m = i;
        }
    }
    cout << max << " " << m;
}