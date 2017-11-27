/**
  *  @Author: Pranta Sarker
  *
  **/


#include<bits/stdc++.h>

using namespace std;

#define fast ios_base::sync_with_stdio(0)
#define bfast cin.tie(0)
#define outs(x) cout << x << " "
#define outn(x) cout << x << "\n"
#define sf scanf
#define pf printf
#define pfn(x , k) printf(k , x)
#define nl puts("")
#define psb push_back
#define mset(c,v) memset(c , v , sizeof c)
#define loop0(n) for(int i=0; i<n; i++)
#define loop1(n) for(int i=1; i<=n; i++)
#define mpair(x , y) make_pair(x , y)
#define all(x) x.begin(), x.end()
#define pi acos(-1.0)
#define psb push_back
#define clr clear()

typedef unsigned long long ull;
typedef long long LL;
typedef vector<int>vii;
typedef vector<LL>vll;
typedef vector<string>vs;
typedef map<int, int>mpii;
typedef map<string, int>mpsi;
typedef map<char, int>mpci;
typedef map<LL, LL>mpll;

const int mod = 1000007;
const int high = 1002;

double radius=0.0 , pk=0.0 , x=0.0 , y=0.0 , newY = 0.0, newX = 0.0;

void lessthanZero()
{
	newY = y;

	newX = x + 1;

	cout << " (" << newX << ", " << newY << ")\n";
}

void greaterthanEqualZero()
{
	newY = y-1;
	newX = x + 1;

	cout << " (" << newX << ", " << newY << ")\n";
}

int main()
{
	fast;
	cout << "Enter Radius: ";
	while(cin >> radius)
	{
		cout << "\n";

		x = 0;
		y = radius;

		pk = 1 - radius;

		int tc = 0;

		cout << tc << ". (" << x << " " << y << ") " << pk << " ";

		if(pk < 0) lessthanZero();
		else greaterthanEqualZero();

		while(x < y)
		{
			cout << ++tc << ". (" << newX << " " << newY;

			pk = pk + (2.0 * newX) + ( (newY * newY) - (y * y) ) + ( y - newY ) + 1.0;

			y = newY;
			x = newX;

			cout << ") " << pk << " ";

			if(pk < 0) lessthanZero();
			else greaterthanEqualZero();
		}

		cout << "\nEnter Radius: ";
	}

	return 0;
}
