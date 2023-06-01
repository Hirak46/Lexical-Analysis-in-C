#include <stdio.h>
#include <ctype.h>

int main() {
    int i, ic = 0, cc = 0, oc = 0, j, n;
    char b[30], operators[30], identifiers[30], constants[30];

    printf("String size: ");
    scanf("%d", &n);
    printf("Enter the string: ");
    for (i = 0; i < n; i++)
        scanf(" %c", &b[i]);

    for (i = 0; i < n; i++) {
        if (isspace(b[i])) {
            continue;
        } else if (isalpha(b[i])) {
            identifiers[ic] = b[i];
            ic++;
        } else if (isdigit(b[i])) {
            constants[cc] = b[i];
            cc++;
        } else {
            if (b[i] == '*') {
                operators[oc] = '*';
                oc++;
            } else if (b[i] == '-') {
                operators[oc] = '-';
                oc++;
            } else if (b[i] == '+') {
                operators[oc] = '+';
                oc++;
            } else if (b[i] == '=') {
                operators[oc] = '=';
                oc++;
            }
        }
    }

    printf("Identifiers: ");
    for (j = 0; j < ic; j++) {
        printf("%c ", identifiers[j]);
    }

    printf("\nConstants: ");
    for (j = 0; j < cc; j++) {
        printf("%c ", constants[j]);
    }

    printf("\nOperators: ");
    for (j = 0; j < oc; j++) {
        printf("%c ", operators[j]);
    }

    return 0;
}
