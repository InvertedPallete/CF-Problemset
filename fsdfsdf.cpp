#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    long long minDamage(int power, vector<int>& damage, vector<int>& health) {
        int n = damage.size();

        long long total_damage = 0;
        vector<pair<int, int>> p;
        for (int i = 0; i < n; ++i) {
            p.push_back({damage[i], health[i]});
        }
        
        sort(p.begin(), p.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.first > b.first;
        });
        
        int time_elapsed = 0;
        
        for (int i = 0; i < n; ++i) {
            int d = p[i].first;
            int h = p[i].second;

            int time_to_kill = (h + power - 1) / power;
            
            total_damage += static_cast<long long>(d) * (time_elapsed + time_to_kill);
            
            time_elapsed += time_to_kill;
        }
        
        return total_damage;
    }
};
