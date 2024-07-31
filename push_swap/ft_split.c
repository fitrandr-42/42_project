/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/14 10:49:17 by fitrandr          #+#    #+#             */
/*   Updated: 2024/05/21 09:28:47 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static size_t	count_word(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
		else
			s++;
	}
	return (count);
}

static char	*extract_next_word(const char **s, char c)
{
	const char	*s_ptr;
	size_t		start;
	size_t		end;

	s_ptr = *s;
	while (**s && **s == c)
		(*s)++;
	start = *s - s_ptr;
	while (**s && **s != c)
		(*s)++;
	end = *s - s_ptr;
	return (ft_substr(s_ptr, start, end - start));
}

void	free_tab(char **tab, size_t i)
{
	while (i-- > 0)
	{
		free(tab[i]);
	}
	free(tab);
}

char	**ft_split(char const *s, char c)
{
	size_t	nb_words;
	char	**tab;
	size_t	i;

	if (!s)
		return (NULL);
	nb_words = count_word(s, c);
	tab = (char **)malloc(sizeof(char *) * (nb_words + 1));
	if (!tab)
		return (NULL);
	i = 0;
	while (i < nb_words)
	{
		tab[i] = extract_next_word(&s, c);
		if (!tab[i])
			free_tab(tab, i);
		i++;
	}
	tab[i] = NULL;
	return (tab);
}
