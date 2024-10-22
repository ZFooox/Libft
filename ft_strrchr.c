/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 17:52:00 by jocroon           #+#    #+#             */
/*   Updated: 2024/10/22 19:03:30 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	unsigned int		i;
	char				d;

	i = 0;
	d = (char) c;
	while (str[i])
		i++;
	while (i >= 0)
	{
		if (str[i] == d)
			return ((char *) &str[i]);
		i--;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "Hello, World!";
	int	c = 'o';

	printf("%s\n", ft_strrchr(str, c));
	return (0);
}