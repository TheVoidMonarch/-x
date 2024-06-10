char *ft_strdup(const char *str)
{
	size_t len;
	len = 0;
	while (str[len] != '\0')
		len++;

	char *dup;
	dup = malloc ((len +1) * sizeof (char));
	if (!dup)
		return (NULL);

	size_t i;

	i = 0;
	while (i <= len)
	{
	dup[i] = str[i];
	i++;
	}
	return (dup);
}
