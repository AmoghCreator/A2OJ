#include<iostream>
using namespace std;

int main() {

	int t , a ,b ,c ,d;
	scanf("%d" , &t);
	int x=0 , y=0 , z=0;
	for(int i = 0 ; i < t ; i++) {
			cin>>a>>b>>c;
			x += a;
			y += b;
			z += c;
	}

	(x || y || z) ? cout<<"NO" : cout<<"YES";

	return 0;
}