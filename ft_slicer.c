#include <stdio.h>
#include <stdlib.h>

char	*ft_slicer(char *src, int a,  int b)
{
	int		i;
	int		j;
	char 	*dest;

	if ((src == NULL) || (b > a) || (a < 0) || (b < 0))
	{
		dest = (char *)malloc(sizeof(char));
		dest[0] = '\0';
		return (dest);
	}
	i = 0;
	j = 0;
	while (i != (int)a)
		i++;
	dest = (char *)malloc(sizeof(char) * (a - b + 2));
	while (i - 1 != (int)b)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest);
}