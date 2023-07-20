#include<bits/stdc++.h>
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define dpp(arr,val) memset(arr,val,sizeof(arr))
#define ll long long
#define ull unsigned long long
#define dd double
#define pii pair<int,int>
#define S second
#define F first
#define el "\n"
#define int long long
#define ii int32_t
#define STOP_IT_GET_SOME_HELP ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define pi acos(-1);
char alpha [] ={'a' ,'b' ,'c' ,'d' ,'e' ,'f' ,'g' ,'h' ,'i' ,'j' ,'k','l', 'm' ,'n' ,'o' ,'p' ,'q' ,'r', 's' ,'t' ,'u', 'v','w' ,'x', 'y' ,'z'};
using namespace std;
const int N = 2e3 + 3 , M = 1e9 + 7 , inf = 1e18;
int dx[] = {-1,1,0,0};
int dy[] = {0,0,-1,1};

// int n;
// void binart_sub(int idx , string res){

//     if(res.size() == n){
//         cout << res << el;
//         return;
//     }
//     res += '0';
//     binart_sub(idx + 1 , res);
//     res.pop_back();
//     res += '1';
//     binart_sub(idx + 1 , res);
//     res.pop_back();
// }
// int a[N];
// 5 2 7 3 4 6
// int dp[N][N];
// int LIS(int i , int prv){
//     int path1 = -inf , path2 = -inf;

//     if(i == n)
//         return 0;

//     //int &ret = dp[i][prv];
//     //if(ret != -1)
//     //return ret;
//     path1 = LIS(i+1 , prv);//leave
//     if(a[prv] <= a[i])
//         path2 = 1 + LIS(i+1 , i);//take
//     //return ret = max(path1 , path2);
//     return max(path1 , path2);
// }
//text1 = "abcde", text2 = "ace"
// string t1 , t2;
// int dp[1000][1000];
// int LCS(int i , int j){
//     if(i == t1.size() || j == t2.size())
//         return 0;
//     int &ret = dp[i][j];
//     if(~ret)
//         return ret;
//     if(t1[i] == t2[j])
//         return 1 + LCS(i+1,j+1);
//     int choice1 = LCS(i , j + 1);
//     int choice2 = LCS(i + 1, j );
//     return ret = max(choice1 , choice2);
// }
// int n , k;
// int a[N];
// int dp[N][N];
// bool solve1(int i , int sum){
//     if(i == n)
//         return sum ==k;
//     int &ret = dp[i][sum];
//     if(~ret)return ret;
//     return ret = (solve1(i+1 , sum + a[i]) || solve1(i+1 , sum));
// }
int32_t main()
{   
    //memset(dp , -1 , sizeof dp);
    // cin >> n;
    // binart_sub(0 , "");
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a[i];
    // }
    // cout << LIS(0,0);
    // cin >> t1 >> t2;
    // cout << LCS(0,0);
    
    //DP HOMEWORK #1
    // cin >> n >> k;
    // for (int i = 0; i < n; i++)
    // {
    //     /* code */
    //     cin >> a[i];
    // }
    // memset(dp , -1 , sizeof dp);
    // cout << solve1(0 , 0);
    // Problem #2: LeetCode 416 - Partition Equal Subset Sum
    //my submission on leetcode :https://leetcode.com/problems/partition-equal-subset-sum/submissions/998460452/
    //try to optimize my solution (my next sub) : i think we just check reduction odd(sum is odd) case and use target instead of sum arg
    //Problem #3: LeetCode 1691 - Maximum Height by Stacking Cuboids
    // my sub : https://leetcode.com/problems/maximum-height-by-stacking-cuboids/submissions/998506079/
    // optimized : i can't see any optimization right now 

    //DP HOMEWORK #2
    //Problem #1: LeetCode 198 - House Robber
    //my sub : https://leetcode.com/problems/house-robber/submissions/998539746/
    //no optimization it beats 100% of c++ users (:
    //Problem #2: LeetCode 309 - Best Time to Buy and Sell Stock with Cooldown
    //mysub : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-with-cooldown/submissions/998590289/
    //Problem #3: LeetCode 1671 - Minimum Number of Removals to Make Mountain Array
    //mysub:https://leetcode.com/problems/minimum-number-of-removals-to-make-mountain-array/submissions/998883671/
}