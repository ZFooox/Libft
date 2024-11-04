/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/02 09:47:32 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/05 00:27:59 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//transforme des int en char (string)
static int	nbr_len(int nbr)
{
	int	len;

	len = 0;
	if (nbr <= 0)
		len = 1;
	while (nbr)
	{
		nbr /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int nbr)
{
	int		len;
	long	n;
	char	*str;

	n = nbr;
	len = nbr_len(nbr);
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	else if (n == 0)
		str[0] = '0';
	while (n > 0)
	{
		str[--len] = n % 10 + '0';
		n /= 10;
	}
	return (str);
}

/* #include <stdio.h>

int	main(void)
{
	int	nbr = -1234567890;

	printf ("%s\n", ft_itoa(nbr));
	return (0);
} */