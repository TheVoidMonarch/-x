#include <stdlib.h>
#include <string.h>

char *ft_substr(char const *s, unsigned int start, size_t len) {
    char *substr;
    size_t i;

    if (!s)
        return NULL;

    if (start >= strlen(s))
        return strdup("");  // If start is beyond the end of s, return an empty string.

    substr = (char *)malloc(len + 1);
    if (!substr)
        return NULL;

    i = 0;
    while (i < len && s[start + i]) {
        substr[i] = s[start + i];
        i++;
    }
    substr[i] = '\0';

    return substr;
}
