// Probleam : Merge Two sorted array
// Description : merge two sorted arrays into the first array, which has enough space.
// e.g. [1,3,0,0] and [2,4] becomes [1,2,3,4]

#include<stdio.h>

void mergeSortedArray(int* arr_1, int a, int* arr_2, int b) {
    int i = a - 1 , j = b - 1, k = a + b - 1;

    while(i >= 0 && j >= 0) {
        arr_1[k--] = (arr_1[i] > arr_2[j]) ? arr_1[i--] : arr_2[j--];
    }

    while(j >= 0) arr_1[k--] = arr_2[j--]; // copy remaining
}

// Unit test helper
void assertArrayEquals(int* expected, int* actual, int size, const char* testName) {
    int pass = 1;
    for(int i =0 ; i < size; i++)
        if(expected[i] != actual[i]) 
            pass = 0;
    printf("%s : %s\n", testName, pass ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit test for mergeSortedArray
void testMergeSortedArray() {
    int arr_1[6] = {1,3,5,0,0,0}, arr_2[] ={2, 4,6};
    int expected[6] = {1,2,3,4,5,6};
    mergeSortedArray(arr_1, 3, arr_2, 3);
    assertArrayEquals(expected, arr_1, 6, "Test 6.1 - Normal merge");
}

int main(void) {
    // testing MergeSortedArray
    testMergeSortedArray();

    return (0);
}