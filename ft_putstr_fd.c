/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:14:23 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:14:25 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		return ;
	write(fd, s, ft_strlen(s));
}

/*#include <unistd.h>  // Para la función write
#include "libft.h"   // Incluye tu implementación de ft_putstr_fd y ft_strlen

int main(void)
{
    char *message = "Hello, world!";

    // Escribe el mensaje en la salida estándar (descriptor de archivo 1)
    ft_putstr_fd(message, 1);

    // Escribe otro mensaje en el error estándar (descriptor de archivo 2)
    ft_putstr_fd("This is an error message.\n", 2);

    return 0;
}
*/
