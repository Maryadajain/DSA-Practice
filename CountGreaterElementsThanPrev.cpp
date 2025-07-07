#include <iostream>
#include <vector>
#include <limits.h> // For INT_MIN
using namespace std;

vector<int> greaterThanPrevious(const vector<int>& arr) {
    vector<int> result;
    int max_so_far = INT_MIN;
   // int count = 0;

    for (int num : arr) {
        if (num > max_so_far) {
            result.push_back(num);
            //count++;
            max_so_far = num;
        }
    }

    return result;
    //return count; // If you want to return the count instead of the elements
}
int main() {
    vector<int> arr = {5, 3, 20, 15, 25, 10, 50, 100};
    vector<int> res = greaterThanPrevious(arr);

    for (int x : res)
        cout << x << " ";
    cout << endl;       
    return 0;
}