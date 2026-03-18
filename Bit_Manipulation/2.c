// Probleam 2: Check if Number is a Power of 2 Using Bit Manipulation
// Description : check if a number is a power of 2. (4,8,16).
// e.g. 16 return true 10 returns false

#include<stdio.h>
#include<stdbool.h>

bool isPowerOfTwo(int num) {
    if(num <= 0) 
        return false;   // validate non-positive
    return (num & (num-1)) == 0; // check single set bit
}

// Unit test helper
void assertBoolEquals(bool expected , bool actual, const char* testName) {
    printf("%s : %s \n",testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testIsPowerOfTwo() {
    assertBoolEquals(true, isPowerOfTwo(16), "Test 2.1 - Power of 2 (16)");
    assertBoolEquals(false, isPowerOfTwo(10), "Test 2.2 - Not power of 2 (10)");
}

int main(void) {
    // testing isPowerOfTwo
    testIsPowerOfTwo();

    return 0;
}