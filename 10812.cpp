#include <iostream>
using namespace std;
int main()
{
	int count,first,second;
	cin >> count;
	for(int i = 0;i < count;i++)
	{
		cin >> first >> second;
		if(first < second)
			cout << "impossible" <<endl;
		else if((first - second) % 2 != 0)
			cout << "impossible" <<endl;
		else
			cout << (first + second) / 2 << " " << (first - second) / 2 << endl;
	}
	return 0;
}
