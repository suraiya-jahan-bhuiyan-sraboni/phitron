#include <bits/stdc++.h>
using namespace std;

int knapsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (weight[n - 1] <= W)
    {
        int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, W);
        return max(op1, op2);
    }
    else
    {
        int op2 = knapsack(n - 1, weight, value, W);
        return op2;
    }
}
/*
const int maxN = 1000;
const int maxW = 1000;
int dp[maxN][maxW];
int knapsack(int n, int weight[], int value[], int W)
{
    if (n == 0 || W == 0)
        return 0;
    if (dp[n][W] != -1)
    {
        return dp[n][W];
    }
    if (weight[n - 1] <= W)
    {
        // duita option
        // niye dekhbo, na niye dekhbo
        int op1 = knapsack(n - 1, weight, value, W - weight[n - 1]) + value[n - 1];
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = max(op1, op2);
    }
    else
    {
        // ekta option
        // na niyei dekhte hobe
        int op2 = knapsack(n - 1, weight, value, W);
        return dp[n][W] = op2;
    }
}*/
int main()
{
    int n;
    cin >> n;    
    int W;
    cin >> W;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i]>>value[i];
    }
    cout << knapsack(n, weight, value, W) << endl;
    return 0;
}