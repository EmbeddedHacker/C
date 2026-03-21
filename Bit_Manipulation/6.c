// Probleam 6: Find the Single Number in an array Where Every Element Appears Twic
// Description: In an array where every element appears twice except one, 
// find the single number e.g [4,1,2,1,2] returns 4.

#include<stdio.h>

int SingleNumber(int *arr, int size) {
    if(arr == NULL || size <= 0)
        return 0;
    int result = 0;
    for(int i = 0; i < size; i++) {
        result ^=arr[i]; // Paired numbers cancel each other
    }
    return result;
}

// Unit test helper
void assertIntEquals(int expected, int actual, const char* testName) {
    printf("%s : %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests
void testSingleNumber() {
    int arr[] = {4,1,2,1,2};
    assertIntEquals(4, SingleNumber(arr,5), "Test 6.1 - Normal case");
}

int main(void) {
    // testing SingleNumber
    testSingleNumber();

    return (0);
}