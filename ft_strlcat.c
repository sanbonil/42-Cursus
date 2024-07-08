/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 20:26:44 by sanbonil          #+#    #+#             */
/*   Updated: 2024/03/26 21:02:13 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
#include "libft.h"

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	ldest;
	unsigned int	lsrc;
	unsigned int	totlen;
	unsigned int	i;

	i = 0;
	ldest = 0;
	lsrc = 0;
	while (dest[ldest] && ldest < size)
		ldest++;
	while (src[lsrc])
		lsrc++;
	totlen = ldest + lsrc;
	if (ldest < size)
	{
		while (ldest < size - 1 && src[i])
		{
			dest[ldest] = src[i];
			i++;
			ldest++;
		}
		dest[ldest] = '\0';
	}
	return (totlen);
}
/* int main() {
    char dest[20] = "Hello, ";
    char src[] = "world!";
    unsigned int result = ft_strlcat(dest, src, sizeof(dest));
    printf("Concatenated string: %s\n", dest);
    printf("Total length: %u\n", result);
    return 0;
}*/
