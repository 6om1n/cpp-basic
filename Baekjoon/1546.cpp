#include <iostream>
/*백준 1546번 1차원 배열-평균*/
using namespace std;

int main(void)
{
	int Num; // 시험 본 과목의 개수
	cin >> Num;
	double* arr = new double[Num]; //배열 동적할당
	int Max = 0;
	double Avg=0;
	for (int i = 0; i < Num; ++i)
	{
		cin >> arr[i]; //원래 값을 저장
	}

	for (int i = 0; i < Num; ++i)
	{
		if (Max < arr[i])
			Max = arr[i]; // 최댓값 찾기
	}

	for (int i = 0;i < Num;++i)
	{
		arr[i] = arr[i] / Max * 100;
		Avg += arr[i];
	}

	cout << Avg / Num << endl;
	return 0;
}