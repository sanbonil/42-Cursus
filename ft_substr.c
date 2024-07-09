/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:12:27 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 14:28:14 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*dst;
	size_t	i;
	size_t	s_len;

	if (s == NULL)
		return (NULL);
	s_len = ft_strlen((char *)s);
	if (start >= s_len)
	{
		dst = malloc(sizeof(char));
		if (dst == NULL)
			return (NULL);
		dst[0] = '\0';
		return (dst);
	}
	if (start + len > s_len)
		len = s_len - start;
	dst = malloc(sizeof(char) * (len + 1));
	if (dst == NULL)
		return (NULL);
	i = -1;
	while (++i < len)
		dst[i] = s[start + i];
	dst[i] = '\0';
	return (dst);
}
