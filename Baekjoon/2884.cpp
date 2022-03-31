#include <iostream>

int main(void)
{
	using namespace std;
	
	int H, M;
	
	cin >> H >> M;

	if (M >=45) {
		M = M - 45;
		cout << H << " " <<  M << endl;
	}
	else if (M < 45)
	{
		if (H == 0) {
			H = 23;
			M = M + 15;
		}
		else {
			H = H - 1; //시간은 1시간 더 줄어든다. 

			M = M + 15;
		}
		cout << H << " " << M << endl;
	}
	return 0;
}