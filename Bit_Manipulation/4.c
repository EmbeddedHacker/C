// Probleam 4: Set nth bit of a number to 1
// Description: Set the nth bit of a 32-bit integer to 1
// e.g. num = 10(1010), n= 1 returns 10(1010, already 1)
// n = 0 return 11 (1011)

#include<stdio.h>


int setNthBit(int num, int n) {
    if(n < 0 || n > 31) 
        return num;     // validate bit position

    return num | (1 << n); // OR with mask to set the nth bit
}

// Unit test helper 
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s\n",testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testSetNthBit() {
    assertIntEquals(11, setNthBit(10, 0), "Test 4.1 - set bit 0 (1010 -> 1011)");
    assertIntEquals(10, setNthBit(10, 1), "Test 4.2 - set bit 1( already 1)");
}

int main(void) {
    // tesing setNthBit
    testSetNthBit();

    return (0);
}
