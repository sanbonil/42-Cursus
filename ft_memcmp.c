/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:06:40 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:54:12 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr;
	unsigned char	*ptr2;
	int				i;

	ptr = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (n-- > 0)
	{
		if (*(ptr + i) == *(ptr2 + i))
			i++;
		else
			return (*(ptr + i) - *(ptr2 + i));
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>  // Para la función estándar memcmp
#include "libft.h"   // Incluye tu implementación de ft_memcmp

int main(void)
{
    char buffer1[] = "Hello, world!";
    char buffer2[] = "Hello, world!";
    char buffer3[] = "Hello, C programming!";
    char buffer4[] = "Hello, world!!!"; 

    int result;

    // Comparar buffer1 y buffer2 (deberían ser iguales)
    result = ft_memcmp(buffer1, buffer2, sizeof(buffer1));
    if (result == 0)
    {
        printf("ft_memcmp: buffer1 y buffer2 son iguales.\n");
    }
    else
    {
        printf("ft_memcmp: buffer1 y buffer2 son diferentes. Resultado: %d\n", result);
    }

    // Comparar buffer1 y buffer3 (deberían ser diferentes)
    result = ft_memcmp(buffer1, buffer3, sizeof(buffer1));
    if (result == 0)
    {
        printf("ft_memcmp: buffer1 y buffer3 son iguales.\n");
    }
    else if (result < 0)
    {
        printf("ft_memcmp: buffer1 es menor que buffer3. Resultado: %d\n", result);
    }
    else
    {
        printf("ft_memcmp: buffer1 es mayor que buffer3. Resultado: %d\n", result);
    }

    // Comparar buffer1 y buffer4 (deberían ser diferentes, buffer4 tiene un carácter extra al final)
    result = ft_memcmp(buffer1, buffer4, sizeof(buffer1));
    if (result == 0)
    {
        printf("ft_memcmp: buffer1 y buffer4 son iguales.\n");
    }
    else if (result < 0)
    {
        printf("ft_memcmp: buffer1 es menor que buffer4. Resultado: %d\n", result);
    }
    else
    {
        printf("ft_memcmp: buffer1 es mayor que buffer4. Resultado: %d\n", result);
    }

    return 0;
}
*/
