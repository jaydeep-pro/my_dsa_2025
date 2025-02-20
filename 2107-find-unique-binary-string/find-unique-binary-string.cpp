class Solution {
public:
    // Converts an integer to an n-bit binary string
    string intToBinaryString(int num, int length) {
        string binary = bitset<32>(num).to_string(); // Ensure 32-bit to handle large numbers
        return binary.substr(32 - length); // Extract the required n-bit binary representation
    }

    string findDifferentBinaryString(vector<string>& nums) {
        if (nums.empty()) return "";

        int n = nums[0].length(); // Number of bits in each binary string
        int total = pow(2, n); // Maximum possible numbers (2^n)

        sort(nums.begin(), nums.end()); // Sort binary strings (not necessary but ensures order)

        for (int i = 0; i < nums.size(); i++) {
            int temp = stoi(nums[i], nullptr, 2); // Convert binary string to integer

            if (temp != i) { // If mismatch found, return missing binary string
                return intToBinaryString(i, n);
            }
        }

        // If all values exist, return the next available number
        return intToBinaryString(nums.size(), n);
    }
};
