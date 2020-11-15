#include <bits/stdc++.h>

#define rep(i,a,n)  for(long long i=a;i<n;++i)
#define rip(i,a,n)  for(long long i=a;i<=n;++i)
#define mrip(i,a,n)  for(long long i=a;i>=n;--i)
#define mrep(i,a,n)  for(long long i=a;i>n;--i)
#define doublerep(i,a,n) for(ll i=a;i<n;i+=2)
#define pb push_back
#define EPS 1e-9
#define inf 1e9
#define Test 		        freopen("a.in","r",stdin)
#define Testout 	        freopen("a.out","w",stdout)
#define MAX 1000001
#define so(ar) sizeof(ar)
#define MP make_pair
#define S second
#define F first
#define booste            ios_base::sync_with_stdio(NULL); cin.tie(NULL); cout.tie(NULL);
#define so(a) sizeof(a)
typedef long long ll;
using namespace std;
ll pow( ll a,ll b)
{
    if(b==0)
        return 1;
    return a*pow(a,b-1);
}
ll fact(ll a)
{
    if(a==1 || a==0)
        return 1;
    return a*fact(a-1);
}
ll gcd(ll a,ll b)
{
    if(b==0)
        return a;
    return gcd(b,a%b);
}
ll mvx[8]={1,1,1,0,0,-1,-1,-1};
ll mvy[8]={1,-1,0,-1,1,0,-1,1};
ll xmove[4]={0,0,-1,1};
ll ymove[4]={-1,1,0,0};
vector<ll>v;

ll n,m,k;
ll x,y,sum=0,w=0;
ll t;
ll ans1=0,ans3=0,ans4=0,ans2=0,ans=0;
ll l,r;
string s;
bool visit[22][22];
string st[200];
char ch;
ll zzz=10000;

ll a,b;

bool isround(ll q)
{
    ll u=q;
    ll uu=0;
    ll temp=1;
    while(q)
    {
        uu=q%10;
        q/=10;
        temp*=10;
    }
    if(u/temp==uu)
        return true;
    else
        return false;
}


int main()
{
    ll u=0;
    ll q;

    cin>>t;
    while(t--)
    {
        ll temp=1;
        cin>>q;
        if(q<=10 or isround(q))
            {
                cout<<1<<endl;
                cout<<q<<endl;
            }
        else
        {
            while(q)
            {
                ll qq=q%10;
                if(qq!=0)
                v.pb(qq*temp);

//                cout<<(q%10)*temp<<" ";
//                cout<<"temp is   "<<temp<<endl;
                temp*=10;
                q/=10;
            }
            cout<<v.size()<<endl;
            rep(i,0,v.size())
            cout<<v[i]<<" ";
            cout<<endl;
            v.clear();

        }
    }


    return 0;
}
