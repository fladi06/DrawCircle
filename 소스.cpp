#include <iostream>	

using namespace std;

void drawCircle(unsigned int n);


int main(int argc, char *argv[])
{
	unsigned int n_call = 0;

	if (argc > 1)
	{
		n_call = (unsigned int)atoi(argv[1]);
	}
	else
	{
		cout << "원 개수 입력 :";
		cin >> n_call;
	}
	drawCircle(n_call);

	return 0;
}

void drawCircle(unsigned int n)
{
	int x, y;
	int r = 10;

	for (x = -2 * r; x <= 2 * r; x += 2)
	{
		for (y = -r; y <= r; y++)
		{
			if ((x * x + y * y) == r * r)
				cout << "*";
			else
				cout << " ";
		}
		cout << endl;
	}

	if (n <1)
	{
		return;
	}
	drawCircle(n - 1);
}
