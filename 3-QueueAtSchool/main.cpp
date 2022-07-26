#include<iostream>
using namespace std;

int main() {

	int n , t;
	cin>>n>>t;
	char arr[n];
	cin>>arr;

	for (int i = 0; i < t; i++) 
	{
		for (int j = 0; j < n-1; j++)
		{
			if(arr[j] == 'B' && arr[j+1] == 'G') {
				int temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;

				++j;
			}
		}
	}

	cout<<arr;

	return 0;
}