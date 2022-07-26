#include <bits/stdc++.h>
 
using namespace std;
 
int main()
 
{
 
#ifndef ONLINE_JUDGE
 
    freopen("input.txt", "r", stdin);
 
    freopen("output.txt", "w", stdout);
   
#endif
 

    long int lNum;
    cin >> lNum;
    int lCount = 0;

    while(lNum) {
        long int x = lNum%10;
        if(x == 4 || x == 7) {
            lCount++;
        }
        lNum/=10;
    }
    int flag = 0;
    while(lCount) {
     	if(lCount%10 == 4 || lCount%10 == 7) {
            flag = 1;
            lCount/=10;
        }
        else {flag = 0; lCount/=10;break;}

    }

    (flag == 1) ? cout<<"YES" : cout<<"NO";
    return 0;
}