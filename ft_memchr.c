/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:05:49 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:53:40 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*ptr;
	unsigned char	cs;
	size_t			i;

	ptr = (unsigned char *)s;
	cs = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(ptr + i) == cs)
		{
			return (ptr + i);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h> // Para el uso de memchr para comparación

int main(void)
{
    char buffer[] = "Hello, world!";
    unsigned char search_char = 'o';
    size_t length = sizeof(buffer);
    void *result;

    result = ft_memchr(buffer, search_char, length);

    if (result)
    {
        printf("ft_memchr encontró el carácter '%c' en la posición: %ld\n",
               search_char, (unsigned char *)result - (unsigned char *)buffer);
    }
    else
    {
        printf("ft_memchr no encontró el carácter '%c'\n", search_char);
    }

    // Comparar con la implementación estándar
    void *standard_result = memchr(buffer, search_char, length);

    if (standard_result)
    {
        printf("memchr encontró el carácter '%c' en la posición: %ld\n",
               search_char, (unsigned char *)standard_result - (unsigned char *)buffer);
    }
    else
    {
        printf("memchr no encontró el carácter '%c'\n", search_char);
    }

    return 0;
}
*/
