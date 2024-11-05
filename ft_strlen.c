/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 11:22:59 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 18:05:29 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}

/*  #include <stdio.h>

int	main(int argc, char **argv)
{
	//char	str[] = "Hello World";
	(void) argc;
	printf("%zu\n", ft_strlen(argv[1]));
	return (0);
}  */