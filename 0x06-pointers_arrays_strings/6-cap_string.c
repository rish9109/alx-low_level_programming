#include <stdio.h>
#include <string.h>
#include <ctype.h>

void capitalize_words(char* string) {
    char* token = strtok(string, " \t\n,;.!?\"(){}");
    while (token != NULL) {
        *token = toupper(*token);
        token = strtok(NULL, " \t\n,;.!?\"(){}");
    }
}

int main() {
    char string[] = "this is a sample string. it contains multiple sentences!";
    capitalize_words(string);
    printf("%s\n", string);
    return 0;
}

/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * @entry: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *entry)
{
void capitalize_words(char* string) {
    char* token = strtok(string, " \t\n,;.!?\"(){}");
    while (token != NULL) {
        *token = toupper(*token);
        token = strtok(NULL, " \t\n,;.!?\"(){}");
    }
}

int main() {
    char string[] = "this is a sample string. it contains multiple sentences!";
    capitalize_words(string);
    printf("%s\n", string);
    return 0;
}
