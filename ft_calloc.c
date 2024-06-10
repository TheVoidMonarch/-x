#include <unistd.h>
#include <stdlib.h>

void	*ft_calloc(size_t count, size_t size)
}
{

	void *ptr;
	size_t i;
	unsigned char *temp_ptr;

	ptr = malloc(count * size);
	if (!ptr)
		return (NULL);

	temp_ptr = (unsigned char *) ptr;
	i = 0;
	while ( i < count * size)
	{
		temp_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
