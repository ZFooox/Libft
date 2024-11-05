/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:31:39 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 16:56:08 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforme des majuscule en minuscule
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c += 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c = 'Z';
	
	printf("Avant ft_tolower: %c\n", c);
	c = ft_tolower(c);
	printf("Après ft_tolower: %c\n", c);
	return (0);
}
*/