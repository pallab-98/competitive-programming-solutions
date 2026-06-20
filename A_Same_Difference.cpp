#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;

        string s;
        cin>>s;

        int ans=1e9;

        for(char c='a';c<='z';c++)
        {
            int last=-1;

            for(int i=0;i<n;i++)
                if(s[i]==c)
                    last=i;

            if(last==-1) continue;

            int cost=0;

            for(int i=0;i<last;i++)
                if(s[i]!=c)
                    cost++;

            cost+=n-last-1;

            ans=min(ans,cost);
        }

        cout<<ans<<"\n";
    }
}