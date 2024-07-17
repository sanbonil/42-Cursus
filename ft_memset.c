/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/14 10:58:47 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 12:37:51 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *ptr, int c, size_t len)
{
	unsigned char	*s;
	size_t			i;

	i = 0;
	s = ptr;
	while (i < len)
	{
		s[i] = (unsigned char)c;
		i++;
	}
	return (ptr);
}

/* #include <stdio.h>

int main() 
{
    char buffer[10];
    int i = 0;
    
    ft_memset(buffer, 'A', sizeof(buffer));
    while(buffer[i]) 
    {
        printf("%c ", buffer[i]);
	i++;
    }
    printf("\n");
    return 0;
}
*/
