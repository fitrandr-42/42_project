/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 07:49:28 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 09:52:15 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

char	*get_next_line(void)
{
	char	*tab;
	int		byte_read;
	int		len;
	char	buffer[1];

	tab = malloc(sizeof(char) * 5);
	if (!tab)
		return (NULL);
	len = 0;
	byte_read = read(STDIN_FILENO, buffer, 1);
	while (byte_read > 0)
	{
		if (byte_read > 0 && buffer[0] != '\n')
			tab[len++] = buffer[0];
		else if (byte_read > 0 && buffer[0] == '\n')
		{
			tab[len] = buffer[0];
			tab[++len] = '\0';
			return (tab);
		}
		byte_read = read(STDIN_FILENO, buffer, 1);
	}
	free(tab);
	return (NULL);
}
