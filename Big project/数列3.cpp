#include <iostream>
using namespace std;
int main()
{
    int m, n, sum;

    cin >> m >> n;
    int* arr = new int[m * n];
    // int arr[m][n];
    for (int i = 0;i < m * n;i++)
    {
        cin >> arr[i];
    }
    for (int i = 0;i < m;i++)
    {
        sum = 0;
        for (int o = 0;o < n;o++)
        {
            
            sum += arr[i * n + o];

        }
        cout << sum << endl;
    }
}