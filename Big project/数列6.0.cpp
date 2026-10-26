#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int r1, c1, num;
    cin >> r1 >> c1;
    vector <vector <int>> a(r1, vector<int>(c1));
    for (int i = 0;i < r1;i++)
    {
        for (int o = 0;o < c1;o++)
        {
            cin >> a[i][o];
        }
    }
    //for (int i = 0;i < r1;i++)
    //{
    //    for (int o = 0;o < c1;o++)
    //    {
    //        cout << a[i][o];
    //    }
    //}

    int r2, c2;
    cin >> r2 >> c2;
    vector <vector <int>> b(r2, vector<int>(c2));
    for (int i = 0;i < r2;i++)
    {
        for (int o = 0;o < c2;o++)
        {
            cin >> b[i][o];
        }
    }
    //for (int i = 0;i < r2;i++)
    //{
    //    for (int o = 0;o < c2;o++)
    //    {
    //        cout<< b[i][o];
    //    }
    //}
    if (c1 == r2)
    {
        cout << r1 << " " << c2 << endl;
        for (int r11 = 0;r11 < r1;r11++)
        {
            for (int c22 = 0;c22 < c2;c22++)
            {
                num = 0;
                for (int c11 = 0;c11 < c1;c11++)
                {
                    num += a[r11][c11] * b[c11][c22];
                }
                if (c22)
                {
                    cout << " ";
                }
                cout << num;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Error: " << c1 << " != " << r2;
    }

}