#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main()
{
	vector<int> D = { 0,2,2,1,23,4,2,2,1,12,2 };
	int n = 0;
	int b = 0;

	for (int i = 0; i < D.size() - 1; i++)
		b += D[i] * D[D.size() - i - 1];
	cout << b << endl;
	return 0;
	system("pause");
}