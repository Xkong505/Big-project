#include <iostream>
using namespace std;
#include <string>
int main()
{
    int m, i=0, j = 0;
    char arr[81];
    char c;
    while (cin.get(c) && c != '\n')
    {
        arr[i] = c;
        i++;
        j++;
    }
        
   
  
    for (int k = 0;k < j;k++)
    {
        if (k <= j)
        {
            if (arr[k] >= 'A' && arr[k] <= 'Z')
            {
                arr[k] = 'Z' - (arr[k] - 'A');
            }
        }
    }
    for (int k = 0;k < j;k++)
    {
        cout << arr[k];
    }

}