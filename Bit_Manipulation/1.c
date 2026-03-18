// Probleam 1: Toggle the nth bit of a 32-bit integer
// Description: Toggle nth bit of a 32-bit integer(0 based indexing)
// e.g. number=10 (binary 1010) n = 2 returns 14(binary 1110)

#include<stdio.h>

int toggleNthBit(int number, int n) {
    if( n < 0 || n > 32)
        return number;  // validate bit position
    return number ^ (1 << n); // XOR with mask to toggle nth bit
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) { 
    printf("%s : %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testToggleNthBit() {
    assertIntEquals(14, toggleNthBit(10, 2), "Test 1.1 - Toggle bit 2 (1010 -> 1110)");
    assertIntEquals(10 , toggleNthBit(14, 2),"Test 1.2 - Toggle back (1110 -> 1010)");
}

int main(void){
    // testing toggleNthBit
    testToggleNthBit();

    return (0);
}