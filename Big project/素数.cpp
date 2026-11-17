#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n, N = 0, j;
    cin >> n;
    int* arr = new int[n];
    for (int i = 0;i < n;i++)
    {
        cin >> arr[i];
        N = 0;
        for (j = 2;j < sqrt(arr[i]) + 1;j++)
        {

            if (arr[i] % j == 0)
            {
                cout << "No" << endl;
                N--;
                break;
            }
            else
            {
                N++;
            }


        }
        if (N == (int)sqrt(arr[i]) + 1 - 2)
        {
            cout << "Yes" << endl;
        }
    }

}