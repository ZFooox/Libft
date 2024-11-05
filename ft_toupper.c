/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 14:05:20 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 16:56:26 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforme des minuscule en majuscule
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}
/*
#include <stdio.h>

int	main(void)
{
	char	c = 'a';
	
	printf("Avant ft_toupper: %c\n", c);
	c = ft_toupper(c);
	printf("Après ft_toupper: %c\n", c);
	return (0);
}
*/