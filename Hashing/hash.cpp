#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    // Precompute frequency count
    std::vector<int> freq(13);
    for (int i = 0; i < n; ++i) {
        freq[arr[i]]++;
    }

    int q;
    std::cin >> q;
    while (q--) {
        int number;
        std::cin >> number;

        if (number >= 1 && number <= 12) {
            std::cout << freq[number] << std::endl;
        } else {
            std::cout << "Invalid input" << std::endl;
        }
    }

    return 0;
}
