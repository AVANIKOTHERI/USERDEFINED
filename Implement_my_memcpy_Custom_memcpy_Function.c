#include <stdio.h>

// Function to copy memory from source to destination
void *mymemcpy(void *dest, const void *src, size_t n) {
    // Typecast src and dest to char pointers
    char *d = (char *)dest;
    const char *s = (const char *)src;

    // Copy data byte by byte
    for (size_t i = 0; i < n; i++) {
        d[i] = s[i];
    }

    return dest;  // Return destination pointer
}

int main() {
    char src[] = "Hello, World!";
    char dest[20];  // Ensure enough space

    // Copy using mymemcpy
    mymemcpy(dest, src, sizeof(src));

    printf("Source: %s\n", src);
    printf("Copied: %s\n", dest);

    return 0;
}
