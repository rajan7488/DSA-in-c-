#include<bits/stdc++.h>
using namespace std;

int trapRainWater(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                waterTrapped += leftMax - height[left];
            left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                waterTrapped += rightMax - height[right];
            right--;
        }
    }

    return waterTrapped;
}

int main() {
    vector<int> height = {7,0,1,0,0,8};
    cout << "Trapped rainwater -> " << trapRainWater(height) << endl;
    return 0;
}
