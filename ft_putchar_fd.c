/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:07 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:14:08 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*#include <stdio.h>

int main(void)
{
    char ch = 'A';

    // Escribir el carácter 'A' en la salida estándar (descriptor de archivo 1)
    ft_putchar_fd(ch, 1);

    // Escribir el carácter 'B' en el error estándar (descriptor de archivo 2)
    ft_putchar_fd('B', 2);

    return 0;
}
*/
