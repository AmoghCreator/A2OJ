#include<iostream>
using namespace std;

int main() {

	string str;
	cin>>str;
	int j = 0;
	for (int i = 0; str[i] != '\0' ; i++)
	{
		if(str[i] == '.') 
			cout<<0;
		else
			if (str[i+1] == '.'){
				cout<<1;
				i++;
			}
			else if(str[i+1] == '-') {
				cout<<2;
				i++;
			}
	}

	return 0;
}