/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:04:18 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 12:42:36 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*#include <stdio.h>*/

char	*ft_strrchr(const char *s, int c)
{
	char	*last_occurrence;
	char	ch;

	last_occurrence = NULL;
	ch = (char)c;
	while (*s)
	{
		if (*s == ch)
			last_occurrence = (char *)s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (last_occurrence);
}
