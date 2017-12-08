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
#define pi 3.14159265
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

int mat1[3][3] , mat2[3][3] , ans[3][3];

void clockwiseTransformation(double x , double y , double theta)
{
	mat1[0][0] = (int)x, mat1[0][1] = (int)y;

	mat2[0][0] = (int)cos(theta*pi / 180 );
	mat2[0][1] = (int)sin(theta*pi / 180);
	mat2[0][1] *= (-1);
	mat2[1][0] = (int)sin(theta*pi / 180);
	mat2[1][1] = (int)cos(theta*pi / 180 );

	ans[0][0] = ( mat1[0][0] * mat2[0][0] ) + ( mat1[0][1] * mat2[1][0] );

	ans[0][1] = ( mat1[0][0] * mat2[0][1] ) + ( mat1[0][1] * mat2[1][1] );

	cout << "Result: " << ans[0][0] << " " << ans[0][1] << "\n";
}

int main()
{
	fast;
	double x1, y1 , x2 , y2 , x3 , y3;
	cout << "Enter Points: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

	double tx , ty;
	cout << "Enter Translation factors: ";
	cin >> tx >> ty;

	double angle;
	cout << "Enter Angle: ";
	cin >> angle;

	cout << "\nClockwise Translation:\n";

	cout << "Translating " << x1 << " and " << y1 << ": ";

	x1 += tx;
	y1 += ty;

	cout << x1 << " " << y1 << "\n\n";

	clockwiseTransformation(x1 , y1 , angle);

	cout << "Translating " << x2 << " and " << y2 << ": ";

	x2 += tx;
	y2 += ty;

	cout << x2 << " " << y2 << "\n\n";

	clockwiseTransformation(x2 , y2 , angle);

	cout << "Translating " << x3 << " and " << y3 << ": ";

	x3 += tx;
	y3 += ty;

	cout << x3 << " " << y3 << "\n\n";

	clockwiseTransformation(x3 , y3 , angle);

	return 0;
}
