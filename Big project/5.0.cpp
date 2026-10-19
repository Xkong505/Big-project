#include <iostream>
using namespace std;
#include <ctime>

int  main()
{
	//srand((unsigned int)time(NULL));
	srand(time(0));

	//cout << r;
	int  m, n,l;
	double   result, input;
	char op,k;
	
	do
	{
		cout << "请输入执行次数" << endl;
		cin >> n;

		for (int i = 1;i <= n;i++)
		{
			cout << "欢迎使用四则运算器" << endl;
			cout << "1，加法" << endl;
			cout << "2，减法" << endl;
			cout << "3，乘法" << endl;
			cout << "4，除法" << endl;
			cout << "0，退出" << endl;
			cout << "   请输入你的选择(0 - 4) :" << endl;
			cin >> m;

			// A 
			double num1;
			double num2;
			num1 = rand() % 100;
			num2 = rand() % 100;
			switch (m)
			{
			case 0:goto out;
			case 1: result = num1 + num2;op = '+';  break;
			case 2: result = num1 - num2;op = '-'; break;
			case 3: result = num1 * num2;op = '*'; break;
			case 4: result = num1 / num2;op = '/'; break;
			default: cout << "运算符非法." << endl;
			}

			cout << num1 << op << num2 << "=?" << endl;
			cout << "你认为的答案是？" << endl;
			cin >> input;




			cout << "实际的答案是：" << num1 << op << num2 << "=" << result << endl;
			if (input == result)
			{
				cout << "恭喜你回答正确！" << endl;
			}
			else
			{
				cout << "很遗憾，你回答错误。" << endl;
			}
		}
		cout << "是否继续答题（Y/N）" << endl;cin >> k;
	} while (k == 'Y');
out:
	return 0;
}
//sbcd
//lllllll