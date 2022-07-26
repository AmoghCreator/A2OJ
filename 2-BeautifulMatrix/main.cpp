#include<iostream>
using namespace std;

int main() {

	int t= 5 , iof1, jof1;

	for(int i = 1 ; i <= t ; i++) {
		for(int j = 1 ; j <= t ; j++) {
			int a;
			cin>>a;
			if(a == 1){
				iof1 = i , jof1 = j;
			}
		}
	}

	iof1 = abs(iof1 - 3);
	jof1 = abs(jof1 - 3);
	cout<<iof1+jof1<<endl;

	return 0;
}