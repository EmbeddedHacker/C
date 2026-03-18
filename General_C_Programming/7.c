// Probleam : Find the maximum element in an Array
// Description : find the maximum element in an integer array
// e.g. [1,5,3] return 5

#include<stdio.h>
#include<limits.h>

int findMax(int* arr, int size){
    if(arr == NULL || size <= 0) 
        return INT_MIN;     // handle edge cases
    int max = arr[0];
    for(int i = 0 ; i < size ; i++) {
        if(arr[i] > max)
            max = arr[i];
    }

    return max;
}

// Unit test helper
void assertFindMax(int expected, int actual, const char* testName) { 
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit test for findMax
void testFindMax() {
    int arr_1[] = {1,5,3,8,2};
    assertFindMax(8, findMax(arr_1,5), "Test 7.1 - Normal array");
    int arr_2[] = {1};
    assertFindMax(1, findMax(arr_2,1), "Test 7.2 - single element");
}

int main(void) { 
    // testing findMax
    testFindMax();

    return (0);
}