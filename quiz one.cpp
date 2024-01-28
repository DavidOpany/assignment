
#include <iostream>
#include <vector>

int removeDuplicates(std::vector<int>& nums) {
    if (nums.empty()) {
        return 0;
    }

    int newLength = 1;  // Length of the new array with unique elements

    for (int i = 1; i < nums.size(); ++i) {
        // Check if the current element is different from the previous one
        if (nums[i] != nums[i - 1]) {
            // Update the array in-place by moving the unique element to the next position
            nums[newLength] = nums[i];
            // Increment the length of the new array with unique elements
            ++newLength;
        }
    }

    return newLength;
}

int main() {
    // Example usage:
    std::vector<int> nums = {1, 1, 2, 2, 3, 4, 4, 5};
    int resultLength = removeDuplicates(nums);

    std::cout << "Original array: ";
    for (int i = 0; i < resultLength; ++i) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;

    std::cout << "New length: " << resultLength << std::endl;

    return 0;
}
