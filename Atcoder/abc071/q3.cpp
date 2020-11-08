#include<bits/stdc++.h> 
#include <ext/pb_ds/assoc_container.hpp> 
#include <ext/pb_ds/tree_policy.hpp> 
using namespace std;
using namespace __gnu_pbds;  
#define ordered_set tree<ll, null_type , less<ll> , rb_tree_tag , tree_order_statistics_Node_update> 
#define ll long long
#define ull unsigned long long
#define pb push_back
#define inf 3e18
#define mk make_pair
#define ld long double
#define mod 1000000007
#define fi first
#define se second
#define fastIO ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0)
#define test ll t; cin>>t; while(t--)
#define setbits __builtin_popcount
#define endl '\n'
#define LOCAL
#define sim template < class c
#define ris return * this
#define dor > debug & operator <<
#define eni(x) sim > typename \
enable_if<sizeof dud<c>(0) x 1, debug&>::type operator<<(c i) {
sim > struct rge { c b, e; };
sim > rge<c> range(c i, c j) { return rge<c>{i, j}; }
sim > auto dud(c* x) -> decltype(cerr << *x, 0);
sim > char dud(...);
struct debug {
#ifdef LOCAL
~debug() { cerr << endl; }
eni(!=) cerr << boolalpha << i; ris; }
eni(==) ris << range(begin(i), end(i));}
sim, class b dor(pair < b, c > d) {
    ris << "(" << d.first << ", " << d.second << ")";
}
sim dor(rge<c> d) {
    *this << "[";
    for (auto it = d.b; it != d.e; ++it)
        *this << ", " + 2 * (it == d.b) << *it;
    ris << "]";
}
#else
sim dor(const c&) { ris; }
#endif
};
#define imie(...) " [" << #__VA_ARGS__ ": " << (__VA_ARGS__) << "] "
int main()
{
    fastIO;
    ll n;
    cin>>n;
    vector<ll>a(n);
    map<ll,ll>m;
    set<ll,greater<ll>>s;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        s.insert(a[i]);
        m[a[i]]++;
    }
    ll ans=1,val=0;
    //debug()<<m;
    for(auto itr:s)
    {
        if(m[itr]>=2 && m[itr]<4)
        {
            ans*=itr;
            val++;
        }
        if(m[itr]>=4)
        {
            if(val==1)
            {
                ans*=itr;
            }
            else
            {
                ans*=itr*itr;
            }
            val+=2;
        }
        if(val>=2)
        {
            break;
        }
    }
    if(val<2)
    {
        cout<<0<<endl;
        goto end;
    }
    cout<<ans<<endl;
    end:;
}
