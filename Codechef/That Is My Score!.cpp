#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    scanf("%d",&t);
    while(t--){
        int i,n,problem,score,totalScore=0;
        // we create an array of size 8 for all 1-8 scorable problems
        // and store the max score for each scorable problem
        vector<int> maxScores(8,0);
        scanf("%d",&n);
        while(n--){
            scanf("%d%d",&problem,&score);
            if((problem<=8)&&score>maxScores[problem-1])
                maxScores[problem-1]=score;
        }
        for(i=0;i<=7;i++)
            totalScore=totalScore+maxScores[i];
        cout<<totalScore<<"\n";
    }
}
