#include <iostream>
#include <cmath>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

int main()
{
	int mu, fi;
	double e = 2.71;
	double A[3][3];
	cin >> mu >> fi;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = pow(2, i - j) * 19 * cos(2 * i - j + fi) * mu * pow(e, ((-fi) * fi) * (i - j) * (i - j));
		}
	}
	cout.precision(2);
    for (int i = 0; i < 3; i++)
    {
       for (int j = 0; j < 3; j++)
          cout << fixed << A[i][j] << " ";
       cout << endl;
    }
	return 0;
	system("pause");
}