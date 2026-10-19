#include <iostream>
using namespace std;

int  main()
{
	char  op;
	double  num1, num2, result,input;

	cin >> num1 >> op >> num2;             // A 
	switch (op)
	{
	case '+': result = num1 + num2; break;
	case '-': result = num1 - num2; break;
	case '*': result = num1 * num2; break;
	case '/': result = num1 / num2; break;
	default: cout << "运算符非法." << endl;
	}
	cout << "你认为的答案是？"<<endl;
	cin >> input;




	cout <<"实际的答案是：" << num1 << op << num2 << "=" << result << endl;
	if (input == result)
	{
		cout << "恭喜你回答正确！";
	}
	else
	{
		cout << "很遗憾，你回答错误。";
	}

	return 0;
}
