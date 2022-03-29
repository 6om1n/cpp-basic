#include <iostream>

using namespace std;

int main(void)
{
	int A, B, C;
	cin >> A >> B >> C; // 세 개의 자연수 입력받기

	int result;
	result = A * B * C;

	int arr[10] = { 0 };
	
	int rd = 1;
	while (true)
	{
		rd = result % 10;

		for (int i = 0; i < 10; ++i)
		{
			if (rd == i)
				arr[i] += 1;
		}

		if (result < 10)
			break;

		result = result / 10;

	}

	for (int i = 0; i < 10; ++i)
		cout << arr[i] << endl;
	
	return 0;
}
