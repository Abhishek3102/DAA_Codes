#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minCoins(vector<int> coins, int coin)
{
    sort(coins.begin(), coins.end());
    int count = 0; // Initialize count
    for (int i = coins.size() - 1; i >= 0; i--)
    {
        while (coins[i] <= coin)
        {
            coin -= coins[i];
            count++;
        }
    }
    return count;
}

int main()
{
    int coin = 6;
    vector<int> coins = {1, 3, 5, 2}; // Corrected typo
    int ans = minCoins(coins, coin);
    cout << "The minimum number of coins required is " << ans; // Added space before ans
    return 0;
}
