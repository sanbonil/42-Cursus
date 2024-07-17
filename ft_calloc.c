/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:10:11 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/08 17:10:14 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	char	*mem;
	size_t	i;

	total = count * size;
	mem = malloc(total);
	if (mem == NULL)
		return (NULL);
	i = 0;
	while (i < total)
	{
		mem[i] = 0;
		i++;
	}
	return (mem);
}

/*
#include <stdio.h>

int main() 
{    
    size_t elementos = 5;
    int i = 0;
    
    char *array = (char *)ft_calloc(elementos, sizeof(char));
    if (array == NULL) {
        fprintf(stderr, "Error: No se pudo asignar memoria.\n");
        return 1;
    }
    while(array[i]) 
    {
        printf("%d ", array[i]);
	i++;
    }
    printf("\n");
    free(array);
    return 0;
}
