EQUAL BEAUTY
This is a problem form Codechef Snackdown-Online Round 1A

Question:

The beauty of an (non-empty) array of integers is defined as the difference
between its largest and smallest element.
For example, the beauty of the array [2,3,4,4,6] is 6−2=4.
An array A is said to be good if it is possible to partition the elements of 
A into two non-empty arrays B1 and B2 such that

B1 and B2 have the same beauty.
Each element of array A should be in exactly one array: either in B1 or in B2.
For example, the array [6,2,4,4,4] is good because its elements can be partitioned
into two arrays B1=[6,4,4] and B2=[2,4], where both B1 and B2 have the same beauty (6−4=4−2=2).

You are given an array A of length N. In one move you can:

1.) Select an index i (1≤i≤N) and either increase Ai by 1 or decrease Ai by 1.
2.) Find the minimum number of moves required to make the array A good.

Input Format
The first line of input contains a single integer T, denoting the number of test cases.
The description of T test cases follow.
Each testcase contains two lines.
The first line contains N, the length of the array.
The second line contains N space-separated integers A1,A2,...,AN representing the initial array.

Output Format
For each testcase, output in a single line, the minimum number of moves required to make the given array good.

Constraints
1≤T≤105
2≤N≤105
−109≤Ai≤109
Sum of N does not exceeds 5⋅105 over all testcases

Sample Input 1 
2
3
4 2 6
4
-2 4 -2 4

Sample Output 1 
2
0

Explanation
Test Case 1: We can increase the first element(A1) by 2 in two moves. Now, the array A 
becomes [6,2,6], and is good, since it can be partitioned into two arrays, ([2],[6,6]),
each with beauty 0.

Test Case 2: The given array ([−2,4,−2,4]) is good since it can be partitioned into two
arrays ([−2,−2],[4,4]), each with beauty 0. Alternatively, it is also possible to partition 
it into ([−2,4],[−2,4]), each with beauty 6.
