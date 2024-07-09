/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sanbonil <sanbonil@student.42barcelon      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/08 17:13:09 by sanbonil          #+#    #+#             */
/*   Updated: 2024/07/09 12:02:50 by sanbonil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <stdio.h>*/
#include "libft.h"

static int	numwords(char const *s, char c)
{
	int	cur;
	int	word_num;

	cur = 0;
	word_num = 0;
	while (s[cur] != 0)
	{
		if (s[cur] != c && (s[cur + 1] == c || s[cur + 1] == 0))
			word_num++;
		cur++;
	}
	return (word_num);
}

static void	free_result(char **result, int words_allocated)
{
	int	i;

	i = 0;
	while (i < words_allocated)
	{
		if (result[i])
			free(result[i]);
		i++;
	}
	free(result);
}

static int	split_words(char **result, char const *s, char c, int word)
{
	int	start_cur;
	int	end_cur;

	end_cur = 0;
	start_cur = 0;
	while (s[end_cur])
	{
		if (s[end_cur] == c)
			start_cur = end_cur + 1;
		if (s[end_cur] != c && (s[end_cur + 1] == c || s[end_cur + 1] == 0))
		{
			result[word] = malloc(sizeof(char) * (end_cur - start_cur + 2));
			if (!result[word])
			{
				free_result(result, word);
				return (0);
			}
			ft_strlcpy(result[word], (s + start_cur), end_cur - start_cur + 2);
			word++;
		}
		end_cur++;
	}
	result[word] = 0;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = malloc(sizeof(char *) * (numwords(s, c) + 1));
	if (!result)
		return (NULL);
	if (!split_words(result, s, c, 0))
		return (NULL);
	return (result);
}

/*int main(int argc, char **argv)
{
	char	**result;
	int i = 0;
	
	if (argc != 2)
		return 0;
	result = ft_split(argv[1], ' ');
	while (result[i])
	{
		printf("%s\n", result[i]);
		free(result[i]);
		i++;
	}
	free(result);
	return 0;
}*/
