#include<iostream>
using namespace std;

int main() {

	int n;
	cin>>n;
	while(true) {
		n++;
		int a = n%10 , b = (n%100)/10 , c = (n%1000)/100 , d = (n%10000)/1000;
		if(a!=b&&b!=c&&c!=d&&d!=a&&a!=c&&b!=d) break;
	}
	cout<<n;
	return 0;
}