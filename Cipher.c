#include <stdio.h>
#include <ctype.h>
#include <string.h>

void encrypt_caesar(char *text, int shift) {
    shift = (shift % 26 + 26) % 26; // Normalize shift to range [0, 25]

    for (int i = 0; text[i] != '\0'; i++) {
        if (isupper(text[i])) {
            text[i] = (char)('A' + (text[i] - 'A' + shift) % 26);
        } else if (islower(text[i])) {
            text[i] = (char)('a' + (text[i] - 'a' + shift) % 26);
        }
    }
}

void decrypt_caesar(char *text, int shift) {
    // Decrypting is equivalent to shifting in reverse
    encrypt_caesar(text, 26 - (shift % 26));
}

int main(void) {
    char text[] = "Hello, World! 2026";
    int shift = 4;

    printf("Original:  %s\n", text);

    encrypt_caesar(text, shift);
    printf("Encrypted: %s\n", text);

    decrypt_caesar(text, shift);
    printf("Decrypted: %s\n", text);

    return 0;
}
