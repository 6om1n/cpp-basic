#include <iostream>
#include <algorithm> // transform 함수를 이용하기 위함

/*백준 1157번-문자열*/
/*답 참고하여 문제 품 ..........ㅜ*/

using namespace std;

int main(void)
{
	string Word;
	cin >> Word;
	int arr[26] = { 0 };// ut in alpa A-Z
	int Max = 0;
	int count = 0;
	int target = 0;

	transform(Word.begin(), Word.end(), Word.begin(), (int(*)(int))toupper); // 소문자로 입력받을 걸 대문자로 바꾸어줌
	// transform a to A

	for (int i = 0; i < Word.length(); ++i)
		arr[Word[i] - 'A']++;

	for (int i = 0; i < 26; ++i)
	{
		if (Max < arr[i]) 
		{
			count = 0;
			Max = arr[i];
			target = i;

		}
		if (Max == arr[i])
		{
			count++;
		}
	}
	if (count > 1)
		cout << "?";
	else
		cout << char(target + 'A');


	return 0;
}