#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 
    string s;
    cin>>s;
    int  i = 0;
    int count1 = 0;
    int count2 = 0;
    while(s[i] != '\0') {
        if(s[i] >= 'A' && s[i] <= 'Z') {
            count2 += 1;
        }
        count1 += 1;
        i++;
    }

    if(count2 <= (count1/2)) {
        int j = 0;
        while(s[j] != '\0') {
        if(s[j] >= 'A' && s[j] <= 'Z') {
            s[j] += 32;
        }
        j++;
        }   
    }

    if(count2 > (count1/2)) {
        int k = 0;
        while(s[k] != '\0') {
        if(s[k] > 'Z') {
            s[k] -= 32;
        }
        k++;
        }
    }

    cout<<s;

    return 0;
}