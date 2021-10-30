Dance Moves
This is a problem from Codechef Snackdown 2021-Online Round 1A

Question:

This year Chef is participating in a Dancing competition. 
The dance performance will be done on a linear stage marked
with integral positions. Initially, Chef is present at position X 
and Chef's dance partner is at position Y. Chef can perform two kinds of dance moves.

If Chef is currently at position k, Chef can:

1.) Moonwalk to position k+2, or
2.) Slide to position k−1

Chef wants to find the minimum number of moves required to reach his partner.
Can you help him find this number?

Input Format
~ First line will contain a single integer T, the number of testcases.
Then the description of T testcases follows.
~ Each testcase contains a single line with two space-separated integers X,Y,
representing the initial positions of Chef and his dance partner, respectively.

Output Format
For each testcase, print in a separate line, a single integer, the minimum 
number of moves required by Chef to reach his dance partner.

Constraints
 1≤T≤103
 −103≤X,Y≤103
 
Sample Input 1 
4
3 8
-11 -5
57 492
-677 913

Sample Output 1 
4
3
219
795

Explanation
Test Case 1: Chef will perform Moonwalk thrice, followed by a slide reaching at position 8. 
This makes 4 dance steps in total.
Test Case 2: Performing Moonwalk thrice will take Chef to his dance partner.
