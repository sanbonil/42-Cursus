/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/11 16:02:55 by sanbonil          #+#    #+#             */
/*   Updated: 2024/06/11 16:05:10 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <stdio.h>

int main() {
    char test_char1 = 'a';
    char test_char2 = '5';
    char test_char3 = '*';
    
    printf("'%c' es alfanumérico: ", test_char1);
    if (ft_isalnum(test_char1)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    printf("'%c' es alfanumérico: ", test_char2);
    if (ft_isalnum(test_char2)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    printf("'%c' es alfanumérico: ", test_char3);
    if (ft_isalnum(test_char3)) {
        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
*/
