#include <iostream>

int main(void)
{
	using namespace std;

	int N; // ������ ����
	cin >> N;
	int sum = 0;
	char Num; // ������ ���� �־����� ����.

	for (int i = 0; i < N; ++i)
	{
		cin >> Num;
		sum += (Num - '0');
	}

	cout << sum << endl;


	return 0;
}