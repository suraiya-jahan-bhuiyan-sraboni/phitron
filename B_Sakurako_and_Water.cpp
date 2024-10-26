#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int t; 
    cin >> t;

    while (t--)
    {
        int n; 
        cin >> n;

        vector<vector<int>> matrix(n, vector<int>(n));

    
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> matrix[i][j];
            }
        }

        int total_magic_operations = 0;

     
        for (int start_row = n - 1; start_row >= 0; start_row--)
        {
            for (int start_col = n - 1; start_col >= 0; start_col--)
            {
                int i = start_row, j = start_col;
                int min_val = 0;
                while (i >= 0 && j >= 0)
                {
                    min_val = min(min_val, matrix[i][j]);
                    i--;
                    j--;
                }

                if (min_val < 0)
                {
                    int magic_needed = -min_val;
                    i = start_row;
                    j = start_col;
                    while (i >= 0 && j >= 0)
                    {
                        matrix[i][j] += magic_needed;
                        i--;
                        j--;
                    }
                    total_magic_operations += magic_needed;
                }
            }
        }

     
        cout << total_magic_operations << endl;
    }

    return 0;
}
