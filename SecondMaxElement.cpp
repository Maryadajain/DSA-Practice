#include <iostream>
#include <vector>
#include <limits.h>
using namespace std;

int findSecondMax(const vector<int>& arr) {
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;

    for (int num : arr) {
        if (num > firstMax) {
            secondMax = firstMax;
            firstMax = num;
        } else if (num > secondMax && num != firstMax) {
            secondMax = num;
        }
    }

    if (secondMax == INT_MIN) {
    return -1; // No valid second maximum found
    } else {
        return secondMax;
    }
}     

int main(){
    vector<int> arr = {5, 7, 2, 9, 9, 4};

    int secondMax = findSecondMax(arr);
    if (secondMax == -1) {
        cout << "No second maximum element found." << endl;
    } else {
        cout << "Second maximum element is: " << secondMax << endl;
    }

    return 0;
}
