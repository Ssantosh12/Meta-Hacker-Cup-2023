#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int s,e,n,i,ps,pe,tim;
        scanf("%d",&n);
        //scanf("%d%d",&ps,&pe);
        int arr[n][2];
        bool cnd=true;
        for(i=0;i<n;i++){
            scanf("%d%d",&arr[i][0],&arr[i][1]);
        }
        ps=arr[0][0];
        pe=arr[0][1];

        for(i=1;i<n;i++){
            if(arr[i][0]>=ps&&arr[i][1]>=pe){
                cnd=false;
                break;
            }
        }
        if(cnd)
            cout<<ps<<"\n";
        else cout<<"-1"<<"\n";
    }
}
