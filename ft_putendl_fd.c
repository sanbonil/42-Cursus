/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:39 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:14:41 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	write(fd, "\n", 1);
}

/*#include <stdio.h>
#include <unistd.h>  // Para el descriptor de archivo 1 (stdout)
#include "libft.h"   // Incluye tu implementación de ft_putendl_fd

int main(void)
{
    char *message = "Hello, world!";

    // Escribe el mensaje seguido de una nueva línea en la salida estándar
    ft_putendl_fd(message, 1);

    // Escribe el mensaje seguido de una nueva línea en el error estándar
    ft_putendl_fd("This is an error message.", 2);

    return 0;
}
*/
