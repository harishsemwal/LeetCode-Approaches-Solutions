#include <unordered_set>
#include <utility>

struct pair_hash {
    template <class T1, class T2>
    std::size_t operator () (const std::pair<T1, T2>& p) const {
        auto h1 = std::hash<T1>{}(p.first);
        auto h2 = std::hash<T2>{}(p.second);

        // Simple hash combining technique
        return h1 ^ h2;  
    }
};

struct pair_equal {
    template <class T1, class T2>
    bool operator () (const std::pair<T1, T2>& lhs, const std::pair<T1, T2>& rhs) const {
        return lhs.first == rhs.first && lhs.second == rhs.second;
    }
};

class Solution {
public:
    bool isPathCrossing(string path) {
        std::unordered_set<std::pair<int, int>, pair_hash, pair_equal> visited;
        visited.insert({0, 0});

        int x = 0, y = 0;

        for (char direction : path) {
            if (direction == 'N') {
                y++;
            } else if (direction == 'S') {
                y--;
            } else if (direction == 'E') {
                x++;
            } else if (direction == 'W') {
                x--;
            }

            if (visited.count({x, y}) > 0) {
                return true;
            }
            visited.insert({x, y});
        }

        return false;
    }
};
