//User function template for C++
class Solution{
public:	
	// Function to check if array has 2 elements
	// whose sum is equal to the given value
	bool hasArrayTwoCandidates(int arr[], int n, int x) {
	    // code here
	    
	    /* APPROACH
	        1. Given arr[] = 1 4 45 6 10 8    X = 10
	        2. Sort the array
	        3. Sorted array[] = 1 4 6 8 10 45
	        4. Take 2 int data type pointing at the beginning and end respectively 
	        5. Try modifying binary search according the question statement
	                    1 + 45 =  10 (No) last--
	                    1 + 10 = 10 (no) last--
	                    1 + 6 = 10 (no) begin++
	                    4 + 6 = 10 (yes) return true;
	        */
	        
	        sort(arr, arr+n);
	        
            int l = 0;
            int r = n-1;
            
            while(l<r){
                if( arr[l] + arr[r] == x){
                    return 1;
                }
                
                else if(arr[l]+arr[r] < x){
                    l++;
                }
                
                else r--;
            }
            return 0;
	}
};
