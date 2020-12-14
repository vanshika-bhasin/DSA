<h2 align = "center"> Problem Statement </h1>

Given an array of integers `nums` containing `N + 1` integers where each integer is in the range `[1, n]`inclusive.
There is only one duplicate number in `nums`, return this <b>duplicate number</b>.


### INPUT :
1. The first line of the input contains a single integer `T` denoting the number of `test cases`. The description of `T` test cases follows.
2. The first line of each test case contains a integers `N` denoting the size of `nums`.
3. The second line contains `N+1` space-separated integers `nums[1],nums[2],…,nums[N],nums[N+1]`.

### OUTPUT :
  For each test case, print a single line containing one integer ― the duplicate number.

### Constraints :
1. 2 <= n <= 3 * 10^4
2. nums.length == N + 1
3. 1 <= nums[i] <= N
4. All the integers in `nums` appear only once except for <b>precisely one integer</b> which appears <b>two or more</b> times.

### Example Input :

```
4
4
1 3 4 2 2
4
3 1 3 4 2
1
1 1
2
1 1 2
```

### Example Output :
```
2
3
1
1
```
