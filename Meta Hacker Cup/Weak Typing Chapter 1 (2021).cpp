#include <bits/stdc++.h>

using namespace std;

int main()
{

    #ifndef ONLINE_JUDGE

    // For getting input from input.txt file
    freopen("weak_typing_chapter_1_input.txt", "r", stdin);

    // Printing the Output to output.txt file
    freopen("Weak-Typing-Chapter-1_output.txt", "w", stdout);

    #endif

    int t=1,tc;
    scanf("%d",&tc);
    while(t<=tc){
        int i,n,switchHand=0;
        char previous=' ';
        scanf("%d",&n);
        string s;
        cin>>s;
        for(i=0;i<=s.size()-1;i++){
            if(s[i]=='O'){
                if(previous=='X')
                    switchHand++;
                previous=s[i];
            }
            else if(s[i]=='X'){
                if(previous=='O')
                    switchHand++;
                previous=s[i];
            }
        }
        cout<<"Case #"<<t<<": "<<switchHand<<"\n";
        t++;
    }
    return 0;
}
