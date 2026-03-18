// Probleam: Remove duplicates from sorted array in place
// Description: remove duplicated from  sorted array in-place, returning new length.
// e.g. [1,1,2] becomes [1,2].

#include<stdio.h>

int removeDuplicates(int* arr, int size) {
    if(arr == NULL || size <= 0)
        return 0;
    if(size == 1)
        return 1;
    int unique = 1; // next unique position
    for(int i = 1; i < size; i++) {
        if(arr[i] != arr[unique - 1]) 
            arr[unique++] = arr[i];
    }

    return unique;
}
// Unit test helper
void assertArrayEquals(int* expected, int* actual, int size, const char* testName) {
    int pass = 1;
    for(int i =0 ; i < size; i++)
        if(expected[i] != actual[i]) 
            pass = 0;
    printf("%s : %s\n", testName, pass ? "TEST_PASSED" : "TEST_FAILED");
}
// Unit test for removeDuplicates
void testRemoveDuplicates() {
    int arr_1[] = {1,1,2,2,3};
    int expected [] = {1,2,3};
    int length = removeDuplicates(arr_1, 5);
    assertArrayEquals(expected, arr_1, length, "Test 8.1 - Normal case");
}

int main(void) {
    // testing removeDuplicates
    testRemoveDuplicates();

    return(0);
}