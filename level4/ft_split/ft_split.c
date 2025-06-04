/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pedde-so <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 13:56:29 by pedde-so          #+#    #+#             */
/*   Updated: 2025/06/04 13:56:30 by pedde-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <stdio.h>

/*prototypes*/
char	**ft_split(char *str);
char	*get_word(char *str, int i);
int	count_words(char *str);
int	ft_isspace(char c);
char	**cleanup(char **result, int i);

int	main(int argc, char **argv)
{
	char	**result;
	int	i;

	if (argc == 2)
	{
		i = 0;
		result = ft_split(argv[1]);
		while (result[i] != NULL)
		{
			printf("[%d]: |%s|\n", i, result[i]);
			i++;
		}
		printf("[%d] : NULL\n\n", i);
	}
	return (0);
}

char	**ft_split(char *str)
{
	char	**result;
	int	i;
	int	word_count;

	word_count = count_words(str);
	result = malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return NULL;
	result[word_count] = NULL;
	i = 0;
	while (i < word_count)
	{
		result[i] = get_word(str, i);
		if (!result[i])
			return (cleanup(result, i));
		i++;
	}
	return (result);
}

char	*get_word(char *str, int index)
{
	int	i;
	int	count;
	int	j;
	char	*result;
	int	k;

	i = 0;
	count = 0;
	while (*(str + i))
	{
		while(ft_isspace(*(str + i)))
			i++;
		if (*(str + i))
			count++;
		if (count == (index + 1))
		{
			j = i;
			while (*(str + j) && !ft_isspace(*(str + j)))
				j++;
			result = malloc(j - i + 1);
			if (!result)
				return (NULL);
			k = 0;
			while (i < j)
			{
				*(result + k) = *(str + i);
				i++;
				k++;
			}
			*(result + k) = '\0';
			return (result);
		}
		while (*(str + i) && !ft_isspace(*(str + i)))
			i++;
	}
	return (NULL);
}

int	count_words(char *str)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (*(str + i))
	{
		while(ft_isspace(*(str + i)))
			i++;
		if (*(str + i))
			count++;
		while (*(str + i) && !ft_isspace(*(str + i)))
			i++;
	}
	return (count);
}

int	ft_isspace(char c)
{
	if (c == ' ' || c == '\n' || c == '\t')
		return (1);
	return (0);
}

char	**cleanup(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
	return (NULL);
}
