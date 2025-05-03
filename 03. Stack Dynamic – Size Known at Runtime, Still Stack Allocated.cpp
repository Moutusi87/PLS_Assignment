#include <iostream>
using namespace std;

void stackDynamic() {
    int size;
    cout << "Enter size: ";
    cin >> size;
    int nums[size];  // VLA – supported in some compilers like GCC

    for (int i = 0; i < size; ++i)
        nums[i] = i;

    cout << "Stack Dynamic: ";
    for (int i = 0; i < size; ++i)
        cout << nums[i] << " ";
    cout << endl;
}

int main() {
    stackDynamic();
    return 0;
}
