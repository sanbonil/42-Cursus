/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:13:20 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:13:22 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbrlen(int n)
{
	int	i;

	i = 0;
	if (n <= 0)
		i = 1;
	while (n)
	{
		n /= 10;
		++i;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_nbrlen(n);
	str = ft_calloc(len + 1, sizeof(char));
	if (!str)
		return (NULL);
	if (n == 0)
		str[0] = '0';
	if (n < 0)
	{
		str[0] = '-';
		if (n == INT_MIN)
		{
			str[--len] = '8';
			n /= 10;
		}
		n = -n;
	}
	while (len-- && n != 0)
	{
		str[len] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

/* #include <stdio.h>

int main(void)
{
    int numbers[] = {0, 123, -123, 2147483647, -2147483648};
    char *result;
    size_t i = 0;
    size_t num_count = sizeof(numbers) / sizeof(numbers[0]);

    while (i < num_count)
    {
        result = ft_itoa(numbers[i]);
        if (result)
        {
            printf("El número %d convertido a cadena es: %s\n", numbers[i], result);
            free(result);
        }
        else
        {
            printf("Error al convertir el número %d\n", numbers[i]);
        }
        i++;
    }

    return 0;
}

*/
