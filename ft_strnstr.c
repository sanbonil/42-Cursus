/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:07:47 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:54:56 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *cadena, const char *subcadena, size_t len)
{
	size_t	i;
	int		j;

	if (*subcadena == '\0')
		return ((char *)cadena);
	i = 0;
	while (cadena[i] != '\0' && i < len)
	{
		if (cadena[i] == subcadena[0])
		{
			j = 0;
			while (subcadena[j] && cadena[i + j] && i + j < len
				&& cadena[i + j] == subcadena[j])
				j++;
			if (subcadena[j] == '\0')
				return ((char *)cadena + i);
		}
		i++;
	}
	return (0);
}
