/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fitrandr <fitrandr@student.42antananari    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/02 08:10:40 by fitrandr          #+#    #+#             */
/*   Updated: 2024/06/02 09:57:18 by fitrandr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker_bonus.h"

int	ft_strcmp(const char *str1, const char *str2)
{
	int	result;

	while (*str1 && *str2 && (*str1 == *str2))
	{
		str1++;
		str2++;
	}
	result = ((int)(*str1) - (int)(*str2));
	if (result == 0)
		return (0);
	else
		return (1);
}
