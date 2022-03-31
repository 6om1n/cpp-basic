#include <iostream>

int main(void)
{
	using namespace std;
	int N;
	cin >> N; 

	for (int i = 0; i < N; ++i)
	{
		for(int k = 0; k <= i; ++k)
			cout << "*";
		cout << endl;

	}

}