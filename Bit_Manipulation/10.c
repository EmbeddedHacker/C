// Probleam 10: reverse the Bits of 32-bit integer
// description: Reverse the bits of a 32-bit integer.
// e.g. 43261596 return 964176192

#include<stdio.h>

unsigned int reverseBits(int num) {
    unsigned int result = 0;
    for(int i = 0; i < 32; i++) {
        result |= ((num >> i) & 1) << (31-i); //extract bit i, place at 31-i
    }
    return result;
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s\n", testName, expected == actual ? "TEST_PASSED": "TEST_FAILED");
}

// Unit tests
void testReverseBits() {
    assertIntEquals(964176192, reverseBits(43261596), "Test 10.1 - Normal case");
    assertIntEquals(0,reverseBits(0),  "Test 10.2 - All zeros");
}

int main(void) { 
    // testing reverseBits
    testReverseBits();

    return (0);
}