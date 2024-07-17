/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 15:52:49 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 10:43:13 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <libft.h>

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/*
#include <stdio.h>

int main()
	{
char	test1 = '3';
char	test2 = 'a';

if (ft_isdigit(test1) == 1)
	printf("'%c' es un dígito.\n", test1);
else
	prinf("'%c' no es un dígito.\n", test1);
if (ft_isdigit(test2) == 1)
	printf("'%c' es un dígito.\n", test2);
else
	prinf("'%c' no es un dígito.\n", test2);
return(0);
	}
*/
