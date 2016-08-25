#include <iostream>

using namespace std;

int main()
{
	int t,a;
	int sum = 0;
	cin >> t;
	while(t){
		cin >> a;
		sum = 0;
		if(a > 10)
			sum += a % 10;
		while(a >= 10){
			a = a / 10;
		}
		sum += a;
		cout << sum << endl;
		t--;
	}
	return 0;
}