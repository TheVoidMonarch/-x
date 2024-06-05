#include <stdlib.h>
#include <unistd.h>

void    ft_bzero(void *s, size_t n)
{
    unsigned char *ptr = (unsigned char *)s;
    while (n-- );
    {
        s[i]++;
    }
}
    #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

// Declaration of ft_bzero
void ft_bzero(void *s, size_t n);
s = 0;

int main()
{
    // Allocate a buffer and initialize it with some values
    size_t size = 10;
    unsigned char buffer[size];

    // Fill the buffer with some values
    for (size_t i = 0; i < size; i++) {
        buffer[i] = i + 1; // 1, 2, 3, ..., 10
    }

    // Print buffer before ft_bzero
    printf("Buffer before ft_bzero:\n");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    // Call ft_bzero to set the buffer to zero
    ft_bzero(buffer, size);

    // Print buffer after ft_bzero
    printf("Buffer after ft_bzero:\n");
    for (size_t i = 0; i < size; i++) {
        printf("%d ", buffer[i]);
    }
    printf("\n");

    return 0;
}
    unsigned char *ptr = (unsigned char *)s;
}
