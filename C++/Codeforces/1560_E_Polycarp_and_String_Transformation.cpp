//Author: Divyansh Sahu
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef unordered_set<int> uset;

#define trav(e,a) for(auto& e:a)
#define Fr(i,a,b) for(int i=a;i<b;i++)
#define fr(i,a) for(int i=0;i<a;i++)
#define endl '\n'
#define pb push_back
#define mp make_pair
#define lb lower_bound
#define up upper_bound
#define svz(x) (int)(x).size()
#define all(x) x.begin(), x.end()
#define ins insert
#define F first
#define S second
#define sz(x) sizeof(x)/sizeof(int)
#define MOD 1000000007
//approach: greedy
void solve(){
    ll n,sum=0,count=0;
    string s="",t;
    cin>>t;
    ll arr[1000]={0};
    fr(i,t.length()){
        if(arr[(int)t[i]]==0)count++;
        arr[(int)t[i]]++;
    }
    int b[1000]={0};
    for(int i=t.length()-1;i>=0;--i){
        if(!b[(int)t[i]]){
            char c=t[i];
            s+=c;
            b[(int)t[i]]=1;
        }
        if(s.length()==count)break;
    }
    map<char,int> m;
    fr(i,s.length()){
        int freq = arr[(int)s[i]];
        int order = s.length()-i;
        freq=freq/order;
        m.insert({s[i],freq});
    }
    vl indx(s.length());
    int c[1000]={0};
    fr(i,t.length()){
        c[(int)t[i]]++;
        if(c[(int)t[i]]==m[t[i]]){
            indx.pb(i);
        }
    }
    string ans="",temp;
    ll y=*max_element(all(indx));
    string emp="";
    for(int i=0;i<=y;i++){
        ans+=t[i];
    }
    temp=ans;
    int j=0;
    reverse(all(s));
    while(temp.length()>0){
        emp+=temp;
        temp.erase(remove(all(temp), s[j]),temp.end()); 
        j++;
    }
    if(emp!=t){
        cout<<-1;
        return;
    }
    cout<<ans<<" "<<s;
}
int main(void)
{
ios_base::sync_with_stdio(false);
cin.tie(0), cout.tie(0);
#ifndef ONLINE_JUDGE
    freopen("./input.txt", "r", stdin);
    freopen("./output.txt", "w", stdout);
 #endif
  int t=1;
  cin>>t;
  while(t--){
     solve();
     cout<<endl;
   }
}

