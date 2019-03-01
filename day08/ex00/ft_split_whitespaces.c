/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkostrub <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/17 12:24:13 by kkostrub          #+#    #+#             */
/*   Updated: 2018/02/17 12:38:51 by kkostrub         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		separator(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		count_w(char *str)
{
	int	words;
	int	i;

	words = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (separator(str[i + 1]) == 1 &&
			separator(str[i]) == 0)
			words++;
		i++;
	}
	return (words);
}

void	print_word(char *word, char *str)
{
	int	i;

	i = 0;
	while (separator(str[i]) == 0)
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
}

void	print_arr(char **arr, char *str)
{
	int	i;
	int	j;
	int	word;

	i = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (separator(str[i]) == 0)
		{
			j = 0;
			while (separator(str[i + j]) == 0)
				j++;
			arr[word] = (char*)malloc(sizeof(char) * (j + 1));
			print_word((arr[word]), (str + i));
			word++;
			i += j;
		}
		else
			i++;
	}
	arr[word] = NULL;
}

char	**ft_split_whitespaces(char *str)
{
	char	**arr;
	int		count;

	count = count_w(str);
	arr = (char**)malloc(sizeof(char*) * (count + 1));
	print_arr(arr, str);
	return (arr);
}
