#include <stdlib.h>

static size_t get_num_len(int n) {
    size_t len = (n <= 0) ? 1 : 0;
    while (n) {
        n /= 10;
        len++;
    }
    return len;
}

char *ft_itoa(int n) {
    char *str;
    size_t len;
    unsigned int num;

    len = get_num_len(n);
    str = (char *)malloc(len + 1);
    if (!str)
        return NULL;

    str[len] = '\0';
    num = (n < 0) ? -n : n;
    while (len--) {
        str[len] = num % 10 + '0';
        num /= 10;
    }

    if (n < 0)
        str[0] = '-';

    return str;
}
