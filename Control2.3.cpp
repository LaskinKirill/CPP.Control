#include <iostream>
using namespace std;
int main()
{
    
    int coins_amount = 0;

    
    int coins_value[8] = { 1,5,10,50,100,200,500,1000 };

    
    int coins_used[8];
    for (int i = 0; i < 8; i++)
        coins_used[i] = 0;

    int price;
    cout << "input stoimost" << endl;
    cin >> price;
    while (price != 0)
    {
        for (int i = 7; i >= 0; i--)
        {
            if (price >= coins_value[i])
            {
                price = price - coins_value[i];
                coins_amount++;
                coins_used[i]++;
                break;
            }
        }
    }

    cout << "amount monet: " << coins_amount << endl;
    for (int i = 0; i < 8; i++)
        cout << coins_used[i] << " monet nominal " << coins_value[i] << endl;
    return 0;
}