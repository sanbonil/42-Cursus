/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:57 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:14:59 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n < 0)
	{
		if (n == -2147483648)
		{
			ft_putstr_fd("-2147483648", fd);
			return ;
		}
		ft_putchar_fd('-', fd);
		n = -n;
	}
	if (n / 10 > 0)
	{
		ft_putnbr_fd(n / 10, fd);
	}
	ft_putchar_fd('0' + (n % 10), fd);
}

/*#include <stdio.h>
#include <unistd.h>  // Para el descriptor de archivo 1 (stdout)
#include "libft.h"   // Incluye tu implementación de ft_putnbr_fd

int main(void)
{
    int number = -12345;
    int large_number = 2147483647;  // El valor máximo para un entero de 32 bits

    // Imprimir el número negativo en la salida estándar
    ft_putnbr_fd(number, 1);
    write(1, "\n", 1);  // Nueva línea para separar salidas

    // Imprimir el número positivo en la salida estándar
    ft_putnbr_fd(large_number, 1);
    write(1, "\n", 1);  // Nueva línea para separar salidas

    // Imprimir el valor mínimo para un entero de 32 bits
    ft_putnbr_fd(-2147483648, 1);
    write(1, "\n", 1);  // Nueva línea para separar salidas

    return 0;
}
*/
