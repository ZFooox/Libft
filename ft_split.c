/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jocroon <jocroon@student.s19.be>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 14:14:18 by jocroon           #+#    #+#             */
/*   Updated: 2024/11/03 13:53:32 by jocroon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//sert à diviser un tableau en plusieurs autres tableau 
//dés que le séparateur est trouvé

//pour compter les mots
static int	word_counter(const char *str, char sep)
{
	int	count;
	int	is_word;

	count = 0;
	is_word = 0;
	while (*str)
	{
		if (*str != sep && is_word == 0)
		{
			is_word = 1;
			count++;
		}
		else if (*str == sep)
			is_word = 0;
		str++;
	}
	return (count);
}

//pour allouer la mémoire pour les mots
static char	*word_alloc(const char *start, const char *end)
{
	char	*word;
	int		i;

	i = 0;
	word = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!word)
		return (NULL);
	while (start < end)
		word[i++] = *start++;
	word[i] = '\0';
	return (word);
}

// initialise le tableau de résultats
static char	**init_result(char const *str, char sep)
{
	char	**result;

	result = (char **)malloc(sizeof(char *) * (word_counter(str, sep) + 1));
	if (!result)
		return (NULL);
	return (result);
}

//remplir le tableaux de résultats
static int	fill_result(char **result, char const *str, char sep)
{
	int		i;
	char	*start;

	i = 0;
	while (*str)
	{
		if (*str != sep)
		{
			start = (char *)str;
			while (*str && *str != sep)
				str++;
			result[i] = word_alloc(start, str);
			if (!result[i])
				return (i);
			i++;
		}
		else
			str++;
	}
	result[i] = NULL;
	return (-1);
}

//fonction principale
char	**ft_split(char const *str, char sep)
{
	char	**result;
	int		i;

	if (!str)
		return (NULL);
	result = init_result(str, sep);
	if (!result)
		return (NULL);
	i = fill_result(result, str, sep);
	if (i != -1)
	{
		while (i >= 0)
			free(result[i--]);
		free(result);
		return (NULL);
	}
	return (result);
}
