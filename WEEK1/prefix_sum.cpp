///3- Preprocessing: Prefix(cumulative) sum.

A = 2 5 5 3 5 2
Query:  O(N)
- What is the sum of elements in A[0:4]
- What is the sum of elements in A[2:5]
- How many times did 5 appear in A[1:3]

                0  1  2   3   4   5
A =             2  5  5   3   5   2
prefix_sum =    2  7  12  15  20  22


sum A[0:4] = prefix_sum[4]
sum A[2:5] = prefix_sum[5] - prefix_sum[1]

int sum_range1(int s, int e, vector<int>& prefix)
{
    if(s == 0)
        return prefix[e];

    return prefix[e] - prefix[s-1];
}


                0  1  2   3   4   5
A =             2  5  5   3   5   2
prefix_fives =  0  1  2   2   3   3

if(A[i] == 5)   prefix[i] = prefix[i-1]+1;
else            prefix[i] = prefix[i-1];

prefix[i] = prefix[i-1] + (A[i] == 5);

fives[1:3] = prefix_fives[3] - prefix_fives[0]



///The equilibrium problem:

        2  4  6   3   5  6   2
 pr[] = 2  6  12  15  20 26  28
 sf[] = 28 26 22  16  13 8   2

 /** better solution to handle all queries in using  based 1 arrays **/

 ll arr[n+1] = {0};
 for(int i = 1; i <= n; i++) cin >> arr[i];

 arr: 0 2 5 3 7 8

 ll prefix[n+1] = {0};

 for(int i = 1; i <= n; i++)
 {
    prefix[i]= prefix[i-1]+A[i];
 }

 arr 0  2  5  5   3   5   2
 pre 0  2  7  12  15  20  22

 sum A[1,4] = pre[4] - pre[1-1];

 int sum_range2(int s, int e, vector<int>& prefix)
{
    return prefix[e] - prefix[s-1];
}


