/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: niarygin <niarygin@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 11:15:48 by niarygin          #+#    #+#             */
/*   Updated: 2024/05/01 18:04:59 by niarygin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Allocates and returns an array of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end with a NULL pointer.
Parameters:
- s: The string to be split.
- c: The delimiter character.
Return value: The array of new strings resulting from the split. 
NULL if the allocation fails.*/

static int	ft_count_words(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static char	**free_array(char **array, int i)
{
	while (i > 0)
	{
		i--;
		free(array[i]);
	}
	free(array);
	return (NULL);
}

static char	*add_word_to_array(char *word, char const *s, int i, int word_len)
{
	int	j;

	j = 0;
	while (word_len > 0)
	{
		word[j] = s[i - word_len];
		j++;
		word_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_str(char const *s, char c, char **str_array, int word_count)
{
	int	str_i;
	int	word_i;
	int	word_len;

	str_i = 0;
	word_i = 0;
	word_len = 0;
	while (word_i < word_count)
	{
		while (s[str_i] && s[str_i] == c)
			str_i++;
		while (s[str_i] && s[str_i] != c)
		{
			str_i++;
			word_len++;
		}
		str_array[word_i] = (char *)malloc(sizeof(char) * (word_len + 1));
		if (!str_array)
			return (free_array(str_array, word_i));
		add_word_to_array(str_array[word_i], s, str_i, word_len);
		word_len = 0;
		word_i++;
	}
	str_array[word_i] = NULL;
	return (str_array);
}

char	**ft_split(char const *s, char c)
{
	char			**str_array;
	unsigned int	word_count;

	if (!s)
		return (NULL);
	word_count = ft_count_words(s, c);
	str_array = (char **)malloc(sizeof(char *) * (word_count + 1));
	if (!str_array)
		return (NULL);
	str_array = ft_split_str(s, c, str_array, word_count);
	return (str_array);
}