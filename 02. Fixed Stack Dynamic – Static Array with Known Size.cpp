#include <iostream>
using namespace std;

void fixedStackDynamic() {
    int nums[3];  // Fixed size at compile time
    nums[0] = 1;
    nums[1] = 2;
    nums[2] = 3;

    cout << "Fixed Stack Dynamic: ";
    for (int i = 0; i < 3; ++i)
        cout << nums[i] << " ";
    cout << endl;
}

int main() {
    fixedStackDynamic();
    return 0;
}
