#include <iostream>
using namespace std;

class FixedHeapDynamic {
private:
    int* nums;

public:
    FixedHeapDynamic() {
        nums = new int[3]{1, 2, 3};  // Heap allocation
    }

    ~FixedHeapDynamic() {
        delete[] nums;  // Always clean heap!
    }

    void show() {
        cout << "Fixed Heap Dynamic: ";
        for (int i = 0; i < 3; ++i)
            cout << nums[i] << " ";
        cout << endl;
    }
};

int main() {
    FixedHeapDynamic obj;
    obj.show();
    return 0;
}
