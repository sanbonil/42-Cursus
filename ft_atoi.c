/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:08:30 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 12:45:13 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	res;
	int	negative;

	negative = 1;
	res = 0;
	while (*str && (*str == ' ' || *str == '\n' || *str == '\t'
			|| *str == '\v' || *str == '\f' || *str == '\r'))
		++str;
	if (*str == '-')
		negative = -1;
	if (*str == '-' || *str == '+')
		++str;
	while (*str && *str >= '0' && *str <= '9')
	{
		res = res * 10 + (*str - 48);
		++str;
	}
	return (res * negative);
}

/*int main()
{
	const char *str1 = " -123";
    const char *str2 = "42";
    const char *str3 = "    +13";
    const char *str4 = "0";
    const char *str5 = "    -0";
    const char *str6 = "99999999999999999999999999";
    const char *str7 = "notanumber";

    printf("'%s' -> %d\n", str1, ft_atoi(str1));
    printf("'%s' -> %d\n", str2, ft_atoi(str2));
    printf("'%s' -> %d\n", str3, ft_atoi(str3));
    printf("'%s' -> %d\n", str4, ft_atoi(str4));
    printf("'%s' -> %d\n", str5, ft_atoi(str5));
    printf("'%s' -> %d\n", str6, ft_atoi(str6));
    printf("'%s' -> %d\n", str7, ft_atoi(str7));

    return 0;
}*/
