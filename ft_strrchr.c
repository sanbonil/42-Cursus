/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:04:18 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:52:12 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	*ptr2;
	int		i;

	ptr = (char *)s;
	ptr2 = 0;
	i = 0;
	while (*(ptr + i))
	{
		if (*(ptr + i) == c)
			ptr2 = ptr + i;
		i++;
	}
	if (c == '\0')
		return (ptr + i);
	return (ptr2);
}
