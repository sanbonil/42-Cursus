/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 13:41:57 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 11:19:50 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include "libft.h"

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (str[count])
		count++;
	return (count);
}

/*int main(void)
{
	char *str;

	str = NULL;
//	printf("strlen ---> %d", strlen(str));
	printf("tuyo ---> %d", ft_strlen(str));
}*/
