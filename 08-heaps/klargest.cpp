#include <vector>
#include <queue>

int kth_largest(std::vector<int> values, int k) {
    std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
    
    for (int value : values) {
        if (pq.size() < static_cast<size_t>(k)) {
            pq.push(value);
        } else if (value > pq.top()) {
            pq.pop();
            pq.push(value);
        }
    }
    
    return pq.top();
}