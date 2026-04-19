class Solution {
private:
    // Helper to calculate the sum of squares of digits
    int getNext(int n) {
        int totalSum = 0;
        while (n > 0) {
            int digit = n % 10;
            totalSum += digit * digit; // FIXED: square the digit, not 'n'
            n /= 10;
        }
        return totalSum;
    }

public:
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);

        // Standard Floyd's Cycle-Finding (Tortoise and Hare)
        // Keep going until fast hits 1 or they collide in a cycle
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }

        // If fast reaches 1, the number is Happy!
        return fast == 1;
    }
};