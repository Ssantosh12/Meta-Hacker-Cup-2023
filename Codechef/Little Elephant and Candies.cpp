#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int ele,n,candies,i,candiesNeeded=0;
        scanf("%d%d",&n,&candies);
        // we add the candies needed by each elephant to get the total candies needed
        for(i=0;i<n;i++){
            scanf("%d",&ele);
            candiesNeeded=candiesNeeded+ele;
        }
        if(candies>=candiesNeeded)
            cout<<"Yes"<<"\n";
        else cout<<"No"<<"\n";
    }
}
