#include <stdio.h>

// Function to copy a string using a for loop
char *my_strcpy(char *dest, const char *src) {
    char *original_dest = dest;  // Store the starting address of dest

    for (; *src != '\0'; src++, dest++) {
        *dest = *src;  // Copy character
    }
    *dest = '\0';  // Null-terminate the destination string

    return original_dest;  // Return the destination pointer
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Ensure enough space

    // Copy using my_strcpy
    my_strcpy(dest, src);

    printf("Source: %s\n", src);
    printf("Copied: %s\n", dest);

    return 0;
}
