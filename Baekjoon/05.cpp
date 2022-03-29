#include <iostream>

/*백준 3052번 1차원배열- 나머지*/
using namespace std;

int main(void)
{
	int arr[42] = { 0 }; // 수 10개를 입력받을 배열
	
	int N;
	int result=0;

	for (int i = 0; i < 10; ++i)
	{
		cin >> N;
		arr[N % 42] = 1;
	}
	for (int k = 0; k < 42;++k)
	{
		if (arr[k] == 1)
			result += 1;
	}
	cout << result << endl;

	return 0;

}