/* Problem statement link:
https://www.hackerrank.com/challenges/arrays-ds/problem
*/


// Complete the reverseArray function below.
vector<int> reverseArray(vector<int> a) {
    
    /* APPROACH
        arr[] = 1 3 2 6 8 0 5
        reversed arr[] = 5 0 8 6 2 3 1     Middle = 7/2 = 3.5 = 3 (in INT)
        SWAP 1 with 5
        SWAP 3 with 0
        SWAP 2 with 8
        
        As we iterate arr we'll use of 2 pointers 
            1. pointer going from beginning to the end 
            2. another pointer going from end to the beginning
        
        We need to stop swapping somewhere.
        so we'll stop when we reach middle variable (MIDDLE = Size/2)
        */
        
        int middle = a.size() / 2;
        
        for(int i = 0; i < middle; i++){
            swap(a[i], a[a.size()-i-1]);
        }
        
        return a;
}
