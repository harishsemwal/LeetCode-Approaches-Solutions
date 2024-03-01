class Solution {
public:
    bool canCross(vector<int>& stones) {
    unordered_set<int> stone_positions(stones.begin(), stones.end());
    unordered_map<int, unordered_set<int>> jump_lengths;
    jump_lengths[0].insert(0);

    for (int stone : stones) {
        for (int jump : jump_lengths[stone]) {
            for (int step = jump - 1; step <= jump + 1; ++step) {
                if (step > 0 && stone + step <= stones.back() && stone_positions.count(stone + step)) {
                    jump_lengths[stone + step].insert(step);
                }
            }
        }
    }
    // its so much amazing
    return !jump_lengths[stones.back()].empty();
}
};