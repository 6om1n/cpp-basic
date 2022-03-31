#include <iostream>

int main(void)
{
	using namespace std;

	int N; // 숫자의 개수
	cin >> N;
	int sum = 0;
	char Num; // 공백이 없이 주어지는 숫자.

	for (int i = 0; i < N; ++i)
	{
		cin >> Num;
		sum += (Num - '0');
	}

	cout << sum << endl;


	return 0;
}