#include <bits/stdc++.h>

#define D(x) cout<< #x <<" = "<<x<<"\n"
#define II() ( { int a ; read(a) ; a; } )
#define LL() ( { ll a ; read(a) ; a; } )
#define DD() ({double a; scanf("%lf", &a); a;})

using namespace std;

/* ordered set !!
#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <typename T> using o_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
*/

//Fast Reader
template<class T>inline bool read(T &x){
    int c=getchar();int sgn=1;
    while(~c&&c<'0'||c>'9'){if(c=='-')sgn=-1;c=getchar();}
    for(x=0;~c&&'0'<=c&&c<='9';c=getchar())x=x*10+c-'0'; 
    x*=sgn; return ~c;
}

typedef long long ll;
typedef vector<int> VI;
typedef vector<VI> VVI;

const int INF=2e9;
const int MX=100005;
const int MOD=1000000007;
const double PI=acos(-1.0);

/*_______________________________________________*/


int main()
{
	int tc = II();
	while(tc--)
	{
		string s;
		cin >> s;
		int one = INF, zero = -1;
		for(int i = 0; i<(int)s.size()-1; i++){
			if(s[i] == '1' && s[i+1] == '1'){
				one = i;
				break;
			}
		}

		for(int i = (int)s.size()-1; i>0; i--) {
			if(s[i] == '0' && s[i-1] == '0') {
				zero = i-1;
				break;
			}
		}

		if(one < zero) printf("NO\n");
		else printf("YES\n");
	}

	return 0;
}