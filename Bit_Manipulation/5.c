// Probleam 5: Clear the nth Bit of a Number
// Description: Clear the nth Bit of a 32-bit integer (set to 0)
// e.g. num = 10 (1010), n = 1 returns 8(1000)

#include<stdio.h>

int clearNthBit(int num, int n) {
    if (n < 0 || n > 31)
        return num;

    return num & (~(1 << n));
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s\n",testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testClearNthBit() {
    assertIntEquals(8, clearNthBit(10, 1), "Test 5.1 - clear bit 1 (1010 -> 1000)");
    assertIntEquals(10,clearNthBit(10,0) , "Test 5.2 - clear bit 0 (already 0)");
}

int main(void) {
    // tesing clearNthBit
    testClearNthBit();

    return (0);
}
