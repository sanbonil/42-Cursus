/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:24:01 by sanbonil          #+#    #+#             */
/*   Updated: 2024/06/18 21:24:13 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	const unsigned char	*s;
	unsigned char		*d;

	if (!dest && !src)
		return (NULL);
	s = (const unsigned char *)src;
	d = (unsigned char *)dest;
	if (d < s)
	{
		while (n--)
			*d++ = *s++;
	}
	else if (d > s)
	{
		s += n;
		d += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

/* #include <stdio.h>
#include <string.h>  // Para la función memmove

int main(void)
{
    char buffer[] = "Hello, world!";
    
    // Mostrar el buffer original
    printf("Original buffer: %s\n", buffer);

    // Uso de memmove para mover una parte del buffer a otra parte del mismo buffer
    memmove(buffer + 7, buffer, 6); // Mueve "Hello," a la posición después de "world!"

    // Mostrar el buffer después del movimiento
    printf("Buffer después de memmove: %s\n", buffer);

    return 0;
}
*/
