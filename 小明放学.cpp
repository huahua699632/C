#include<iostream>
typedef long long ll; 
using namespace std;

int main()
{
	ll r, y, g;
	ll n, m;
	ll k, t;
	ll sum = 0;
	ll temp;
	
	cin >> r >> y >> g;
	cin >> n;
	m = r + y + g;
	while(n--)
	{
		cin >> k >> t;
		
		if(k == 0) temp = 0;
		if(k == 1) temp = (r - t + sum)%m;
		if(k == 2) temp = (m - t + sum)%m;
		if(k == 3) temp = (r + g - t + sum)%m;
		
		if(temp == 0)
			sum = sum + t;
		if((temp > 0) && (temp < r))
			sum = sum + r - temp;
		if((temp >= r) && (temp < r + g))
			sum = sum;
		if((temp >= r + g) && (temp < r + g + y))
			sum = sum + m - temp + r;
	}
	cout << sum << endl;
}
