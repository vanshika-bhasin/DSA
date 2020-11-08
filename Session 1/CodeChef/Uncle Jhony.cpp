#include <bits/stdc++.h>
using namespace std;

/*APPROACH
    
    Position[] = 1 3 4 2 
    Song (Uncle Johny) Position = 2;
    
    1. store the value of the song named uncle Jhony. 
    2. we've to sort the position array; O(n log n)  [n is the size of position array]
    3. Find The position of song in the new Position array (using linear/ binary search).
    4. Print the new position.
*/

int unclejhonypos(vector<int>&position, int n, int index){
    
    int a = position[index];
    
    sort(position.begin(), position.end());
    
    for(int i =0;i<n;i++){
        if(position[i] == a){
            return i+1;
        }
    }
}


int main() {
	// your code goes here
	
	int testcases; cin>>testcases;
	
	while(testcases--){
	    int n; cin>>n;
	    
	    std::vector<int>position(n);
	    
	    for(int i = 0;i < n;i++){
	        cin>>position[i];
	    }
	    
	    int index; cin>>index;
	    
	    cout<<unclejhonypos(position,n,index-1)<<endl;
	}
	return 0;
}
