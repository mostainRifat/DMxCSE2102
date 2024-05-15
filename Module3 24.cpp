#include<bits/stdc++.h>
using namespace std;

int exp(long long x, long long y, long long m) 
{ 
	int res = 1;
	x = x % m;

	if (x == 0) return 0;
	while (y > 0) 
	{ 
		if (y%2 == 1) 
			res = (res*x) % m; 
		y = y>>1; 
		x = (x*x) % m; 
	} 
	return res; 
} 
 
int main() 
{ 
	int x,y,m;
    cin>>x>>y>>m;
	cout << "Result is " << exp(x, y, m); 
	return 0; 
} 
