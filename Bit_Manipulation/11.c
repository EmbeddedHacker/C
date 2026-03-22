// Probleam 11: find the parity of a Number(Odd/Even Number of 1s)
// Description: Determine if the number of 1s in the binary repesentation of 32-bit
// integer is odd or even (odd parity return 1, even returns 0).
// e.g. 11(1011 3 ones) returns 1.

#include<stdio.h>

int parityCheck(int num) {
    int result = 0;
    for(int i = 0; i < 32 ; i++) { // check each bit
        result ^= (num >> i) & 1; // XOR bit i with result
    }
    
    return result;
}

// Unit test helper
void assertIntEquals(int expected , int actual, const char* testName) {
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED":"TEST_FAILED");
}

// Unit tests
void testParityCheck() { 
    assertIntEquals(1, parityCheck(11),"Test 11.1 - Odd Parity(1011, 3 ones)");
    assertIntEquals(0, parityCheck(10), "Test 11.2 - Even parity(1010, 2 ones)");
}

int main(void) {
    // testing parityCheck
    testParityCheck();

    return (0);
}