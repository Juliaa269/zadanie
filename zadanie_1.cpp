#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	int mu, fi, n, m, e;
	double A[3][3];
	cin >> mu >> fi >> n >> m >> e;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			A[i][j] = pow(2, i - j) * 19 * cos(2 * i - j + fi) * mu * pow(e, ((-fi) * fi) * (i - j) * (i - j));
			cout << A[i][j] << " ";
		}
	}
	return 0;
	system("pause");
}