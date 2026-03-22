// Probleam 12: Get the value of the nth Bit
// Desription: Return the value of (0 or 1) of the nth bit in an 32-bit integer(0-based)
// e.g. num = 10 (1010) n = 1, returns 1.

#include<stdio.h>

int getNthBit(int num , int n) {
    if( n < 0 || n > 31)
        return 0;          // validate the nth position
    return (num >> n) & 1; // shift and mask to get nth bit
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testGetNthBit() {
    assertIntEquals(1, getNthBit(10, 1), "Test 12.1 - bit 1 of 10 (1010)");
    assertIntEquals(0, getNthBit(10, 0), "Test 12.2 - Bit 0 of 10 (1010)");
}

int main(void) {
    // testing getNthBit()
    testGetNthBit();

    return (0);
}