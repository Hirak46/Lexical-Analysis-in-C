#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char input[100];
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';
    if (strlen(input) == 0) {
        printf("Empty string is recognized under rule 'a*'\n");
    } else if (strcmp(input, "abb") == 0) {
        printf("%s is recognized under rule 'abb'\n", input);
    } else {
        int i = 0;
        if (input[i++] == 'a') {
            while (input[i] == 'a') {
                i++;}
            if (input[i] == 'b') {
                i++;
                while (input[i] == 'b') {
                    i++;}
                if (input[i] == '\0') {
                    printf("%s is recognized under rule 'a*b+'\n", input);
                }}
            if (input[i] == '\0') {
                printf("%s is recognized under rule 'a*'\n", input);
            }}
        if (input[i] != '\0') {
            printf("%s is not recognized.\n", input);
        }
    }

    return 0;
}
