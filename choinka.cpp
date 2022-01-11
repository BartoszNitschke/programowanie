#include <iostream>

using namespace std;



int main()
{
    {

        int H;

        cout << "podaj wysokosc: " << endl;
        cin >> H;

        int W = 1 + 2 * (H - 2);
        int lp, rp;
        lp = W / 2;
        rp = lp;
        for (int y = 0; y < H; y++)
        {
            if ((y == 0)||(y == H - 1))
            {
                for (int i = 0; i < W; i++)
                {
                    cout << "*";
                }
            }
            else
            {
                for (int i = 0; i < W; i++)
                {
                    if ((lp > i) || (i > rp))
                        cout << "*";
                    else
                        cout << " ";
                }
                lp--;
                rp++;
            }

            cout << endl;
        }
        
    }
   
    return 0;
}
