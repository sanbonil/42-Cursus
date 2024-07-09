/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:12:59 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 10:52:24 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trimmed;
	size_t	start;
	size_t	end;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	while (s1[start] && ft_strchr(set, s1[start]))
		++start;
	end = ft_strlen((char *)s1);
	if (end == 0 || start == end)
		return (ft_strdup(""));
	while (end > start && ft_strchr(set, s1[end - 1]))
		--end;
	trimmed = ft_substr(s1, start, end - start);
	return (trimmed);
}
