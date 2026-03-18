// Probleam : Find the first non-repeating Character in a srting
// Description: Return a first character that 
// appears once in a string e.g 'h' in "hello"
// return '\0' if none

#include<stdio.h>

char firstNonRepeatedChar(const char* str) {
    if(str == NULL || str[0] == '\0') 
        return '\0';            // handle edge cases 

    int frequency[26] = {0}; // Frequency count array
    
    for(int i = 0; str[i] != '\0'; i++)
        frequency[str[i] - 'a']++; // count frequencies of each character in string

    for(int i = 0 ; str[i] != '\0'; i++) {
        if(frequency[str[i] - 'a'] == 1)
            return str[i];
    }
    return ('\0');
}

// Unit test helper
void assertCharEquals(char expected, char actual, const char* testName) {
    printf("%s : %s\n", testName, expected == actual ? "TEST_PASSED" : "TEST_FAILED");
}

// Unit test for firstNonRepeatedChar
void testFirstNonRepeatedChar(){
    assertCharEquals('h', firstNonRepeatedChar("hello"),"Test 2.1 - Normal case");
    assertCharEquals('\0',firstNonRepeatedChar("aabbcc"), "Test 2.2 - No non repeating char");
}

int main(void){
    // testing firstNonRepeatedChar
    testFirstNonRepeatedChar();
    
    return (0);
}
