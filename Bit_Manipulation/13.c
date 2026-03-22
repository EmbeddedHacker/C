// Probleam 13: Find two Numbers in an Array that Appear Only Once(Others Appear Twice)
// Description: In an arrray where all the elements appears twice except two, find the two single numbers.
// e.g. [1,2,1,3,2,5] returns [3,5]

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int* singleNumberTwo(int* arr, int size, int* returnSize) {
    if(arr == NULL || size < 2) {
        *returnSize = 0;
        return NULL;
    }
    int x = 0;
    for(int i = 0; i < size; i++) {
        x ^= arr[i];        // XOR all numbers
    }
    int rightmost = x & -x; // Get rightmost set bit
    int* result = (int*)malloc(2 * sizeof(int));
    result[0] = 0;  result[1] = 0;
    for(int i = 0; i < size; i++) {
        if(arr[i] & rightmost) 
            result[0] ^= arr[i]; // bit set
        else
            result[1] ^= arr[i]; // bit not set
    }
    *returnSize = 2;
    return result;
}

// Unit test helper
void testSingleNumberTwo() {
    int arr[] = {1,2,1,3,2,5};
    int returnSize;
    int* result = singleNumberTwo(arr, 6, &returnSize);
    bool pass = returnSize == 2 && ((result[0] == 3 && result[1] == 5) 
                                     || (result[0] == 5 && result[1] == 3));
    printf("Test 13.1 - Normal case: %s\n",pass ? "TEST_PASSED":"TEST_FAILED");
    free(result);
}

int main(void) {
    // testing singleNumberTwo
    testSingleNumberTwo();

    return (0);
}