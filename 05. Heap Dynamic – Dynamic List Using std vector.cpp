#include <iostream>
#include <vector>
using namespace std;

void heapDynamic() {
    vector<int> nums;
    nums.push_back(10);
    nums.push_back(20);
    nums.push_back(30);

    cout << "Heap Dynamic: ";
    for (int n : nums)
        cout << n << " ";
    cout << endl;
}

int main() {
    heapDynamic();
    return 0;
}
