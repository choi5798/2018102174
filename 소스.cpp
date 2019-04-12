#include <iostream>
using namespace std;

int main()
{
	for (int i = 1; i < 10; i++)
	{
		cout << i << "단을 출력합니다." << endl;
		for (int j = 1; j < 10; j++)
			cout << i << " X " << j << " = " << i * j << endl;
		cout << endl;
	}
	
	return 0;
}