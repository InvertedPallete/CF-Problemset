#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Structure to store flower data
struct Flower {
    int petals;
    int quantity;
};

// Custom comparator to sort flowers by the number of petals
bool compareFlowers(Flower a, Flower b) {
    return a.petals < b.petals;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; // Number of test cases
    cin >> t;

    while (t--) {
        int n; // Number of types of flowers
        long long m; // Number of coins the girl possesses
        cin >> n >> m;

        vector<Flower> flowers(n);

        // Read the number of petals for each type of flower
        for (int i = 0; i < n; ++i) {
            cin >> flowers[i].petals;
        }

        // Read the quantity for each type of flower
        for (int i = 0; i < n; ++i) {
            cin >> flowers[i].quantity;
        }

        // Sort flowers by the number of petals
        sort(flowers.begin(), flowers.end(), compareFlowers);

        long long maxPetals = 0;

        // Iterate over all flower types
        for (int i = 0; i < n; ++i) {
            long long remainingCoins = m;
            long long petalsCount = 0;
            for (int j = i; j < n && flowers[j].petals - flowers[i].petals <= 1; ++j) {
                long long maxAffordable = remainingCoins / flowers[j].petals;
                long long buyQuantity = min(maxAffordable, (long long)flowers[j].quantity);
                petalsCount += buyQuantity * flowers[j].petals;
                remainingCoins -= buyQuantity * flowers[j].petals;
            }
            maxPetals = max(maxPetals, petalsCount);
        }

        cout << maxPetals << '\n';
    }

    return 0;
}
