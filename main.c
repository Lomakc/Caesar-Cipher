#include <stdio.h>
#include <string.h>

void xor_cipher(char *data, const char *key) {
    size_t data_len = strlen(data);
    size_t key_len = strlen(key);

    for (size_t i = 0; i < data_len; i++) {
        data[i] ^= key[i % key_len];
    }
}

int main(void) {
    char message[] = "Confidential Data 123!";
    const char key[] = "SecretKey";

    printf("Original:  %s\n", message);

    // Encrypt
    xor_cipher(message, key);
    printf("Encrypted (raw bytes): ");
    for (size_t i = 0; i < strlen(message); i++) {
        printf("%02X ", (unsigned char)message[i]);
    }
    printf("\n");

    // Decrypt (running XOR again with the same key)
    xor_cipher(message, key);
    printf("Decrypted: %s\n", message);

    return 0;
}
