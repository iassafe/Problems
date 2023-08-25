#include <iostream>
#include <unordered_map>
#include <vector>

std::pair<int, int> find_sum_indices(int n, int x, const std::vector<int>& arr) {
    std::unordered_map<int, int> num_to_index;
    
    for (int i = 0; i < n; ++i) {
        int num = arr[i];
        int complement = x - num;
        if (num_to_index.find(complement) != num_to_index.end()) {
            return {num_to_index[complement] + 1, i + 1};
        }
        num_to_index[num] = i;
    }
    
    return {-1, -1};
}

int main() {
    int n, x;
    std::cin >> n >> x;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::pair<int, int> result = find_sum_indices(n, x, arr);
    
    if (result.first != -1) {
        std::cout << result.first << " " << result.second << "\n";
    } else {
        std::cout << "IMPOSSIBLE\n";
    }

    return 0;
}