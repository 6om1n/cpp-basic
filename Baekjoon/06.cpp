#include <iostream>
/*���� 1546�� 1���� �迭-���*/
using namespace std;

int main(void)
{
	int Num; // ���� �� ������ ����
	cin >> Num;
	double* arr = new double[Num]; //�迭 �����Ҵ�
	int Max = 0;
	double Avg=0;
	for (int i = 0; i < Num; ++i)
	{
		cin >> arr[i]; //���� ���� ����
	}

	for (int i = 0; i < Num; ++i)
	{
		if (Max < arr[i])
			Max = arr[i]; // �ִ� ã��
	}

	for (int i = 0;i < Num;++i)
	{
		arr[i] = arr[i] / Max * 100;
		Avg += arr[i];
	}

	cout << Avg / Num << endl;
	return 0;
}