#include <iostream>

/*���� 3052�� 1�����迭- ������*/
using namespace std;

int main(void)
{
	int arr[42] = { 0 }; // �� 10���� �Է¹��� �迭
	
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