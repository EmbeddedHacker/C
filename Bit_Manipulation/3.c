// Probleam 3: Count the Number of Set Bits in an Integer
// Description: Count the no of 1s in the binary representation of a 32 bit integer. 
// e.g. 11(binary 1011) return 3.

#include<stdio.h>

int countSetBits(int num) {
    int count = 0;
    while(num) {
        num &= (num -1); //Brian kernighan's method
        count++;
    }
    return count;
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s \n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testCountSetBits() {
    assertIntEquals(3, countSetBits(11), "Test 3.1 - 11 (1011 has 3 bits)");
    assertIntEquals(0, countSetBits(0), "Test 3.2 - 0 (no bits)");
}

int main(void) {
    // testing countSetBits
    testCountSetBits();

    return (0);
}