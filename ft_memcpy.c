/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 21:21:58 by sanbonil          #+#    #+#             */
/*   Updated: 2024/06/18 21:23:14 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n-- > 0)
		*d++ = *s++;
	return (dest);
}

/* #include <stdio.h>
#include <string.h>  // Para la función estándar memcpy
#include "libft.h"   // Incluye tu implementación de ft_memcpy

int main(void)
{
    char source[] = "Hello, world!";
    char destination[50];  // Un buffer más grande para mostrar la copia
    char destination2[50]; // Buffer adicional para comparar con memcpy

    // Inicializar el destino y el destino2 con algún valor
    memset(destination, 'A', sizeof(destination) - 1);
    destination[sizeof(destination) - 1] = '\0';
    memset(destination2, 'B', sizeof(destination2) - 1);
    destination2[sizeof(destination2) - 1] = '\0';

    printf("Contenido original del destino: '%s'\n", destination);
    printf("Contenido original del destino2: '%s'\n", destination2);

    // Usar ft_memcpy para copiar datos
    ft_memcpy(destination, source, sizeof(source));

    // Usar memcpy para comparación
    memcpy(destination2, source, sizeof(source));

    printf("Contenido del destino después de ft_memcpy: '%s'\n", destination);
    printf("Contenido del destino2 después de memcpy: '%s'\n", destination2);

    // Verificar si ambos buffers son iguales
    if (strcmp(destination, destination2) == 0)
    {
        printf("ft_memcpy y memcpy producen el mismo resultado.\n");
    }
    else
    {
        printf("ft_memcpy y memcpy producen resultados diferentes.\n");
    }

    return 0;
}
*/
