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

double x1 , y1 , x2 , y2 , m , delY , delX, pk , newY , newX;
bool flx = false , fly = false;

int main()
{
	fast;
	while(cin >> x1 >> y1 >> x2 >> y2)
	{
		if(x1 > x2) flx = true;
		if(y1 > y2) fly = true;

		if(flx == true && fly == true)
		{
			delY = y1 - y2;
			delX = x1 - x2;

			m = (y1 - y2) / (x1 - x2);
		}

		else if(flx==true && fly == false)
		{
			delY = y2 - y1;
			delX = x1 - x2;

			m = (y2 - y1) / (x1 - x2);
		}

		else if(flx==false && fly == true)
		{
			delY = y1 - y2;
			delX = x2 - x1;

			m = (y1 - y2) / (x2 - x1);
		}

		else
		{
			delY = y2 - y1;
			delX = x2 - x1;

			m = (y2 - y1) / (x2 - x1);
		}

		//if(m < 0.0) m = (-1.0) * m;

		cout << "m = " << m << "\n";

		if(m < 1.0)
		{
			pk = (2.0 * delY) - delX;

			while(x1 != x2)
			{
				if(pk >= 0.0)
				{
					//newX = x1 + 1.0;
					//newY = y1 + 1.0;

					if(flx==true && fly==true)
					{
						newX = x1 - 1.0;
						newY = y1 - 1.0;
					}

					else if(flx==true && fly==false)
					{
						newX = x1 - 1.0;
						newY = y1 + 1.0;
					}

					else if(flx==false && fly==true)
					{
						newX = x1 + 1.0;
						newY = y1 - 1.0;
					}

					else
					{
						newX = x1 + 1.0;
						newY = y1 + 1.0;
					}

				cout << "X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";

				pk = pk + (2.0 * delY) - ( (2.0 * delX) * (newY - y1) );

					x1 = newX;
					y1 = newY;

					//cout << "2. X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";
				}

				else
				{
					//newX = x1 + 1.0;
					//newY = y1;

					if(flx==true && fly==true)
					{
						newX = x1 - 1.0;
						newY = y1;
					}

					else if(flx==true && fly==false)
					{
						newX = x1 - 1.0;
						newY = y1;
					}

					else if(flx==false && fly==true)
					{
						newX = x1 + 1.0;
						newY = y1;
					}

					else
					{
						newX = x1 + 1.0;
						newY = y1;
					}

				cout << "X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";

					pk = pk + (2.0 * delY) - ( (2.0 * delX) * (newY - y1) );

					x1 = newX;
					y1 = newY;

					//cout << "2. X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";
				}

			}
		}

		else
		{
			pk = (2.0 * delX) - delY;

			while(x1 != x2)
			{
				if(pk >= 0.0)
				{
					//newX = x1 + 1.0;
					//newY = y1 + 1.0;

					if(flx==true && fly==true)
					{
						newX = x1 - 1.0;
						newY = y1 - 1.0;
					}

					else if(flx==true && fly==false)
					{
						newX = x1 - 1.0;
						newY = y1 + 1.0;
					}

					else if(flx==false && fly==true)
					{
						newX = x1 + 1.0;
						newY = y1 - 1.0;
					}

					else
					{
						newX = x1 + 1.0;
						newY = y1 + 1.0;
					}

				cout << "X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";

				pk = pk + (2.0 * delX) - ( (2.0 * delY) * (newX - x1) );

					x1 = newX;
					y1 = newY;

					//cout << "2. X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";
				}

				else
				{
					//newX = x1;
					//newY = y1 + 1.0;

					if(flx==true && fly==true)
					{
						newX = x1;
						newY = y1 - 1.0;
					}

					else if(flx==true && fly==false)
					{
						newX = x1;
						newY = y1 + 1.0;
					}

					else if(flx==false && fly==true)
					{
						newX = x1;
						newY = y1 - 1.0;
					}

					else
					{
						newX = x1;
						newY = y1 + 1.0;
					}

				cout << "X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";

					pk = pk + (2.0 * delX) - ( (2.0 * delY) * (newX - x1) );

					x1 = newX;
					y1 = newY;

					//cout << "2. X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";
				}

//				cout << "X = " << x1 << "| Y = " << y1 << "| Pk = " << pk << "| Xk+1 = " << newX << "| Yk+1 = " << newY << "\n";
//
//				pk = pk + (2.0 * delX) - ( (2.0 * delY) * (newX - x1) );
//
//				y1 = newY;
//				x1 = newX;
			}
		}

		flx = fly = false;
	}

	return 0;
}
