#include <iostream>	

using namespace std;

void drawCircle(int r);


int main()
{
	drawCircle(10);

	return 0;
}

void drawCircle(int r)
{
	/* cos(60), sin(60)��ŭ �̵��� ���� �׸����� ������ ������
	const double PI = 3.14;

	double a = sin(degree * PI / 180);
	double b = cos(degree * PI / 180);
	*/

	int x, y;


	for (x = -2 * r; x <= 2 * r; x += 2)
	{
		for (y = -r; y <= r; y++)
		{
			if ((x * x + y * y) == r * r || (x - r) * (x - r) + (-y + r) * (-y + r) == r * r) //������ �� �̰ų� x�� -r��ŭ �̵�, -y�� +r��ŭ �̵��� ���� �����ϸ� *�׸��� 
				cout << "*";

			else
				cout << " ";
		}
		for (y = -r; y <= r; y++)
		{
			if ((x - r) * (x - r) + (-y +r) * (-y +r) == r * r || (x * x + y * y) == r * r)
				cout << "*";

			else
				cout << " ";
		}		
		for (y = -r; y <= r; y++)
		{
			if ((x - r) * (x - r) + (y+r) * (y+r) == r * r || (x * x + y * y) == r * r)
				cout << "*";

			else
				cout << " ";
		}
		cout << endl;

	}
/*		for (x = -2 * r * a; x <= 2 * r * a; x += 2 * a)
		{
			for (y = -r; y <= r; y++)
			{
				if ((x * x + y * y == r * r))
					cout << "*";

				else
					cout << " ";
			}
			cout << endl;
		}

*/
	/*for (y = -r; y <= r; y++)
	{
		if ((x + a) * (x + a) + (y + b) * (y + b) == r * r)
			cout << "*";
		else
			cout << " ";
	}

	for (y = -r; y <= r; y++)
	{
		if ((x * x + y * y) == r * r)
			cout << "*";
		else
			cout << " ";
	}
	/*
	for (y = -r; y <= r; y++)
	{
		if ((x + a) * (x + a) + (y + b) * (y + b) == r * r)
			cout << "*";
		else
			cout << " ";
	}

	for (y = -r; y <= r; y++)
	{
		if ((x * x + y * y) == r * r)
			cout << "*";
		else
			cout << " ";
	}
	*/
}

