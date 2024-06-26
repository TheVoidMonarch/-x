#include <stdlib.h>
#include <string.h>

char *ft_strjoin(char const *s1, char const *s2) {
    char *join;
    size_t len1;
    size_t  len2;
    size_t  i;
    size_t  j;

    if (!s1 || !s2)
        return NULL;

    len1 = strlen(s1);
    len2 = strlen(s2);

    join = (char *)malloc(len1 + len2 + 1);
    if (!join)
        return NULL;

    i = 0;
    while (i < len1) {
        join[i] = s1[i];
        i++;
    }
    j = 0;
    while (j < len2) {
        join[i + j] = s2[j];
        j++;
    }
    join[i + j] = '\0';

    return join;
}
