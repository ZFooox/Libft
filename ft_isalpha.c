/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:15:07 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 13:21:32 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//vérifie si un caractère est alpha
int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}

/* #include <stdio.h>

int	main(void)
{
	printf("%d\n", ft_isalpha('e'));
	return (0);
} */