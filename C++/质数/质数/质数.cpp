#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double num = 2;
	int choose = 0;

	while (true)
	{
		for (double i = 2; i <= num/2; i++)
		{
			if (ceil(num/i) == floor(num/i))
			{
				choose = 1;
			}
		}

		if (choose == 0)
		{
			cout << num << endl;
		}

		choose = 0;
		num++;
	}

	system("pause");

	return 0;
}