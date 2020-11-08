/*
Problem statement link:
https://www.hackerrank.com/challenges/birthday-cake-candles/problem
*/



// Complete the birthdayCakeCandles function below.
int birthdayCakeCandles(vector<int> ar) {
    
    /* APPROACH 
        arr[] = 3 2 1 3
        ANS : 2  (because there're two 3 in the array)
        we've to find the count of Largest number in an array
        
        1. sort the array  O(nlogn)  [n is the size of array]
        2. we know the last element of the array is largest. 
        3. Iterate over array and store the total count of largest number in a count                variable.
        4. Return the count of largest numbers.
    */

    sort(ar.begin(), ar.end()); // Already defined in c++;
    int count =0;
    int largest = ar[ar.size()-1];
    for(int i =0;i<ar.size();i++){
        if(ar[i] == largest){
            count++;
        }
    }
    return count;
}
