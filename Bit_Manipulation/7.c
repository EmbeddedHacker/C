// Probleam 7: swap two bits in a Number at Given Position
// Description: Swap the bits at positions i and j in 32-bit integer.
// e.g. num = 10(1010), i = 1, j = 3 return 6(0110)

#include<stdio.h>

int SwapBits(int num, int i, int j) {
    if(i < 0 || i > 31 || j < 0 || j > 31 )
        return num;     // validate position
    int bitI = (num >> i) & 1; // get bit at ith position;
    int bitJ = (num >> j) & 1; // get bit at jth position;
    if( bitI != bitJ) {         // swap only if different
        num ^= (1 << i) | (1 << j); // Toggle both bits
    }
    return num;
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testSwapBits() {
    assertIntEquals(6, SwapBits(10, 1, 3),"Test 7.1 - Swap bits 1,3 (1010 -> 0110)");
    assertIntEquals(10, SwapBits(10, 1, 1), "Test 7.2 - same position (no change)");
}

int main(void) {
    // testing SwapBits()
    testSwapBits();

    return (0);
}
