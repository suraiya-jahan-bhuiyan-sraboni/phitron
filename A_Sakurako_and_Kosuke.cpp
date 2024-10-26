#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n; 
        cin >> n;

        int position = 0; 
        int move = 1;    

        bool sakurako_turn = true; 

        while (true)
        {
            if (sakurako_turn)
            {
                position -= move;
            }
            else
            {
                position += move;
            }

           
            if (abs(position) > n)
            {
                if (sakurako_turn)
                {
                    cout << "Sakurako" << endl;
                }
                else
                {
                    cout << "Kosuke" << endl;
                }
                break;
            }

            move += 2;                     
            sakurako_turn = !sakurako_turn;
        }
    }

    return 0;
}
