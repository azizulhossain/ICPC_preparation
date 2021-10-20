/*
   ####   ####  #               ####  #        ##   #    # #    # ###### #####
  #      #    # #              #      #       #  #  ##  ## ##  ## #      #    #
   ####  #    # #               ####  #      #    # # ## # # ## # #####  #    #
       # #  # # #                   # #      ###### #    # #    # #      #####
  #    # #   #  #              #    # #      #    # #    # #    # #      #   #
   ####   ### # ###### #######  ####  ###### #    # #    # #    # ###### #    #
*/
#include<bits/stdc++.h>
using namespace std;

typedef long long LL;
typedef vector<LL> VL;
typedef vector<string> VS;
typedef vector<pair<LL, LL>> VP;
#define uniq(v) v.erase(unique(v.begin(), v.end()), v.end());
#define pb push_back
#define F first
#define S second
#define srt(v) sort(v.begin(), v.end())
#define rev(v) reverse(v.begin(), v.end())
#define all(v) (v).begin(), (v).end()
#define no "NO"
#define yes "YES"
#define con continue;
#define PI 2*acos(0)

const LL mod = 1e9+7;

LL lcm(LL a, LL b){return (a/__gcd(a,b))*b;}
LL sumN(LL x){return (x*(x+1))/2;}
LL nxt(){LL x;cin >> x;return x;}
LL zero(){return 0;}

LL binpow(LL a, LL b)
{
    LL res = 1 ;
    while(b > 0)
    {
        if(b & 1)
        res = res * a;
        a = a * a  ;
        b >>= 1;
    }
    return res;
}


VS vs;
LL n, m;

LL dx[] = { -1, 0, 0 };
LL dy[] = { 0, 1, -1 };

string findd = "IEHOVA#";
VS anss;

bool valid(LL i, LL j){return (i>=0) && (j>=0) && (i<n) && (j<m);}

string path[] = { "forth", "right", "left" };

void dfs(LL i, LL j, LL index)
{
    if(index>=findd.size())
        return;
    for(int k=0; k<3; k++)
    {
        int x = dx[k]+i;
        int y = dy[k]+j;

        if(valid(x,y) && findd[index]==vs[x][y])
        {
            anss.pb(path[k]);
            dfs(x, y, index+1);         
        }
    }
}


int main()  
{

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r+", stdin);
    freopen("output.txt", "w+", stdout);
    #endif

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);


    LL q=1,t;
    LL a=0,b=0,c=0,d=0,e=0,f=0,p=0,g=0,
    h=0,i=0,j=0,k=0,l=0,o=0,r=0,u=0, s=0,w=0,x=0,y=0,z=0,L,R;
    LL flag=0, flag1=0, co=0, co1=0, co2=0, co3=0, sum=0;
    LL ma=0,ma1=0, mi=100000000000, mi1=10e9,ans = 0;
    string str, str1, str2,str3,str4;

    LL Case=1;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        vs.clear();
        anss.clear();  
        pair<LL, LL>pt;
        for(i=0; i<n; i++)
        {
            cin>>str;
            vs.pb(str);
            for(j=0; j<m; j++)
            {
                if(str[j]=='@')
                    pt = {i, j};
            }
        }

        dfs(pt.first, pt.second, 0);

        cout<<anss[0];
        for(i=1; i<anss.size(); i++)
            cout<<" "<<anss[i];
        cout<<endl;

    }













    cerr<<"Time taken : "<<(float)clock()/CLOCKS_PER_SEC<<" secs"<<endl;
    if(((float)clock()/CLOCKS_PER_SEC)>=1.0)
        cerr<<"Need to optimize!!"<<endl;
    else
        cerr<<"RuntimeOKAY!"<<endl<<endl;

   return 0;
        

}