/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/14 14:47:27 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/22 18:02:41 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}
/*
#include <stdio.h>

int main(void)
{
    char array[16] = "I love Campus 19";

    printf("Avant ft_bzero: %s\n", array);
    ft_bzero(array + 7, 6);
    printf("Après ft_bzero: %s\n", array);

    return 0;
}
*/