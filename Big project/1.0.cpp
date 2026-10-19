#include <iostream>
using namespace std;

int  main()
{
	char  op;
	int  num1, num2, result;

	cin >> num1 >> op >> num2;             // A 
	switch (op)
	{
	case '+': result = num1 + num2; break;
	case '-': result = num1 - num2; break;
	case '*': result = num1 * num2; break;
	case '/': result = num1 / num2; break;
	default: cout << "ÔËËã·û·Ç·¨." << endl;
	}

	cout << num1 << op << num2 << "=" << result << endl;

	return 0;
}
