// Probleam : Check if Two Strings are Anagrams
// Description : Check if two strings are anagrams( same characters, same frequencies) 
// e.g "listen" and "silent" 

#include<stdio.h>
#include<stdbool.h>
#include<string.h>

bool areAnagrams(const char* str_1, const char* str_2) {
    if(str_1 == NULL || str_2 == NULL || strlen(str_1) != strlen(str_2))
        return false;
    int frequency[26] = {0};    // frequency count array
    for(int i = 0; str_1[i] != '\0' ; i++) {
        frequency[str_1[i] - 'a']++;
        frequency[str_2[i] - 'a']--;
    }
    for(int i = 0; i < 26 ; i++) {
        if(frequency[i] != 0) 
            return false;
    }

    return true;
}

// Unit test helper
void assertBoolEquals(bool expected, bool actual, const char* testName) {
    printf("%s: %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit tests for areAnagrams
void testAreAnagrams() {
    assertBoolEquals(true, areAnagrams("listen", "silent"), "Test 3.1 - Valid anagrams");
    assertBoolEquals(true, areAnagrams("hello","world"),"Test 3.2 - Not anagrams");
}

int main(void) {
    // testing areAnagreams
    testAreAnagrams();

    return (0);
}