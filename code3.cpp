#include <bits/stdc++.h>
using namespace std;

#define int long long int
#define boost ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define Ankesh freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define mem(n,m) memset(n,m,sizeof(n))
#define inf 1e18
#define pb push_back
#define mp make_pair
#define um unordered_map
#define vt vector
#define lb lower_bound
#define ub upper_bound
#define endl '\n'
#define space " "
#define comma " , "
#define lcm(a,b) (int(a)*int(b)) / __gcd(int(a),int(b))
#define all(x) (x).begin(), (x).end()
#define sz(x) ((int)x.size())
#define asz(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))
#define rsort(x) sort((x).rbegin(), (x).rend())
#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define fori(i, n) FOR(i, 0, n)
#define fore(i, n) FORD(i, 1, n)
#define ford(i,n) FOR(i, 1, n)
#define mod 1000000007
#define SIZE 102

typedef pair<int,int> pii;
typedef vt<int> vi;
typedef vt<vt<int>> vii;
typedef unordered_map<int,int> umii;
typedef map<int,int> mii;
typedef set<int> si;
typedef queue<int> qi; 




// vi adj[SIZE];
// int vis[SIZE];
// int dist[SIZE];
// int col[SIZE];
// int in[SIZE];
// int out[SIZE];
// int subSize[SIZE];

// int dx[] = {-1,0,1,0};
// int dy[] = {0,1,0,-1};

// int dx[] = { -1, -1, -1, 0, 0, 1, 1, 1 };
// int dy[] = { -1, 0, 1, -1, 1, -1, 0, 1 }; 




// int dp[SIZE];

int static dp[SIZE][SIZE];



int palin(string s, int n){
    mem(dp,-1);
    for(int i=0;i<n;i++){
        dp[i][i] = 1;
    }
    for(int i=0;i<n-1;i++)
        if(s[i]==s[i+1]) dp[i][i+1] = 1;
    
}


int32_t main()
{
    boost
    #ifndef ONLINE_JUDGE 
    Ankesh
    #endif


    int t;
    cin >> t;

    for(int T = 1;T<=t;T++){

        // cout<<"Case #"<<T<<": ";  
        palin();
    }

    // solve();

    return 0;
}
