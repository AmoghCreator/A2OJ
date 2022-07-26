#include<iostream>
using namespace std;

int main()
{
    
	    
	int arr[5][5] = {0}; 
	/*we take array of 5 length because:-
	we know the problem requires operation on a 3x3 matrix
	but for a 3x3 matrix :-

	X X X
	X X X    Operations like [0-1] & [3+1] will 
	X X X    return garbage value as those elements are not initialised
	
	instead if we take a 5x5 matrix we can do the following instead

	0 0 0 0 0 
	0 X X X 0
	0 X X X 0 now X representing the input numbers , we take input starting
	0 X X X 0 at [1][1] instead of [0][0] in previous cases, now operations 
	0 0 0 0 0 like [1-1] & [4+1] will be performed in place of [0-1] & [3+1] 
			  which are valid opertions.
	*/
	for (int i=1; i<=3; i++) {
	        for (int j=1; j<=3; j++) {
	            cin >> arr[i][j];
	        }
	    }
	    for (int i=1; i<=3; i++) {
	        for (int j=1; j<=3; j++) {
	            int p=1+arr[i][j]+arr[i+1][j]+arr[i-1][j]+arr[i][j+1]+arr[i][j-1];
	            cout << p%2;
	        }
	        cout << endl;
	    }

	return 0;
}
