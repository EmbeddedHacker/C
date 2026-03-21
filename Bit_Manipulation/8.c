// Probleam 8: find the XOR of all elements in an array
// Description: Compute the XOR of all numbers in an array
// e.g. [4,3,2] return 5 [4^3^2]

#include<stdio.h>

int xorOfArray(int* arr, int size) { 
    if(arr == NULL || size <= 0)
        return 0;
    int result = 0;
    for(int i = 0; i < size; i++) {
        result ^= arr[i];
    }
    return result;
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED":"TEST_FAILED");
}

// Unit tests
void testXorOfArray() {
    int arr[] = {4,2,3};
    assertIntEquals(5, xorOfArray(arr,3),"Test 8.1 - Normal case (4^2^3 = 5)");
}

int main(void) {
    // testing xorOfArray
    testXorOfArray();

    return (0);
}