#include <iostream>
using namespace std;
#include <ctime>

int read(int min, int max)
{
	int i = 0;
	while (true)
	{
		if (cin >> i && i >= min && i <= max)
		{
			return i;
		}
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "输入有误，请重新输入" << endl;
	}
}
int main()
{
	srand((unsigned int)time(NULL));
	int g = rand() % 100 + 1;
	cout << "请输入一个1~100的正整数" << endl;
	int i = read(1, 100);
	int c = 1;
	while (true)
	{
		if (g == i)
		{
			cout << "恭喜你猜对了,你一共猜了 " << c << " 次" << endl;
			break;
		}
		else if (g > i)
		{
			cout << "偏小了" << endl;
		}
		else
		{
			cout << "偏大了" << endl;
		}
		cout << "请继续猜" << endl;
		i = read(1, 100);
		c++;
	}
	system("pause");
	return 0;
}