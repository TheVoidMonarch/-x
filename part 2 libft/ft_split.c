#include <stdlib.h>

static size_t count_words(char const *s, char c) {
    size_t count = 0;
    int in_word = 0;

    while (*s) {
        if (*s != c && !in_word) {
            in_word = 1;
            count++;
        } else if (*s == c) {
            in_word = 0;
        }
        s++;
    }
    return count;
}

static char *word_dup(const char *start, size_t len) {
    char *word = (char *)malloc(len + 1);
    if (!word)
        return NULL;
    word[len] = '\0';
    while (len--)
        word[len] = start[len];
    return word;
}

char **ft_split(char const *s, char c) {
    char **split;
    size_t words, i, j, start;

    if (!s)
        return NULL;

    words = count_words(s, c);
    split = (char **)malloc((words + 1) * sizeof(char *));
    if (!split)
        return NULL;

    i = 0;
    j = 0;
    while (i < words) {
        while (s[j] == c)
            j++;
        start = j;
        while (s[j] && s[j] != c)
            j++;
        split[i] = word_dup(s + start, j - start);
        if (!split[i])
            return NULL; // Memory allocation failed.
        i++;
    }
    split[i] = NULL;

    return split;
}
