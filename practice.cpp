#include <bits/stdc++.h>
using namespace std;

void findJumps(int, int);

// } Driver Code Ends
// User function Template for C++

// Function to find number of jumps
// N : number inscribed on the last stone.
// X : number on which we have to reach

void findJumps(int N, int X)
{
    vector<pair<int, int>> stone;
    if (N % 2 == 0)
    {
        stone.push_back({1, 1});
        for (int i = 1; i < N - 1; i += 2)
        {
            stone.push_back({i + 1, i + 2});
        }
        stone.push_back({N, N});
    }
    else
    {
        stone.push_back({1, 1});
        for (int i = 1; i < N; i += 2)
        {
            stone.push_back({i + 1, i + 2});
        }
    }
    int total=stone.size();
    int count=0;
    int sri_count;
    for(auto x:stone){
        if(x.first==X||x.second){
            break;
        }
        count++;
    }
    sri_count=total-count-1;

   
    cout<<min(count,sri_count) << endl;
}

//{ Driver Code Starts.

int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        long long N, X;
        cin >> N >> X;

        findJumps(N, X);
    }

    return 0;
}
// } Driver Code Ends