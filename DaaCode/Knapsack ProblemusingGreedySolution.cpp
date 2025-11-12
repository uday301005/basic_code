#include <bits/stdc++.h>
using namespace std;

struct Item {
    int profit, weight;
    double ratio;
};

int main() {
    int n, k;
    cin >> n >> k;
    vector<Item> items(n);
    
    for (int i = 0; i < n; i++) cin >> items[i].profit;
    for (int i = 0; i < n; i++) cin >> items[i].weight;
    
    for (int i = 0; i < n; i++)
        items[i].ratio = (double)items[i].profit / items[i].weight;

    sort(items.begin(), items.end(), [](const Item &a, const Item &b) {
        return a.ratio > b.ratio;
    });

    double profit = 0.0;

    for (int i = 0; i < n; i++) {
        if (items[i].weight <= k) {
            profit += items[i].profit;
            k -= items[i].weight;
        } else {
            profit += items[i].ratio * k;
            break;
        }
    }
    cout << fixed << setprecision(2);
    cout << "Maximum Profit: " << profit << endl;
    return 0;
}
