#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

int main() {
    std::vector<int> marks = {72, 85, 60, 91, 78};

    marks.push_back(88);  // add one more value

    std::sort(marks.begin(), marks.end());

    std::cout << "Sorted marks: ";
    for (int m : marks) {
        std::cout << m << " ";
    }
    std::cout << "\n";

    int total = std::accumulate(marks.begin(), marks.end(), 0);
    double average = static_cast<double>(total) / marks.size();

    std::cout << "Total:   " << total << "\n";
    std::cout << "Average: " << average << "\n";
    std::cout << "Lowest:  " << marks.front() << "\n";
    std::cout << "Highest: " << marks.back() << "\n";
    return 0;
}
