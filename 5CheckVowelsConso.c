#include <stdio.h>
#include <time.h>

int main() {
    char c;
    double time_spent=0.0;
    int lowercase_vowel, uppercase_vowel;
    printf("Enter an alphabet: ");
    scanf("%c", &c);

    clock_t begin=clock();
    // evaluates to 1 if variable c is a lowercase vowel
    lowercase_vowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    // evaluates to 1 if variable c is a uppercase vowel
    uppercase_vowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // evaluates to 1 (true) if c is a vowel
    if (lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel.", c);
    else
        printf("%c is a consonant.", c);
    
    clock_t end=clock();
    
    time_spent +=(double) (end-begin)/CLOCKS_PER_SEC;
    printf("\n\nThe elapsed time is %f seconds\n",time_spent);  
        
    return 0;
}
