// Probleam 9: Check if Number is Even or Odd Using Bit Manipulation
// Description: Determine if a number is even or odd using bit Manipulation.
// e.g. 4 returuns true(even) , 7 return false(odd)

#include<stdio.h>
#include<stdbool.h>

bool evenOrOdd(int num) {
    return (num & 1 ) == 0; // LSB is 0 for even
}

// Unit test helper
void assertBoolEquals(bool expected, bool actual, const char* testName) {
    printf("%s: %s\n" , testName, expected == actual ? "TEST_PASSED":"TEST_FAILED");
}

// Unit tests
void testEvenOrOdd() {
    assertBoolEquals(true, evenOrOdd(4), "Test 9.1 - Even number (4)");
    assertBoolEquals(false, evenOrOdd(7), "Test 9.2 - Odd number (7)");
}

int main(void) {
    // testing evenOrOdd
    testEvenOrOdd();

    return (0);
}
