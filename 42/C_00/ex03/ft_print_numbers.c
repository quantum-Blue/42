/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:05:37 by mubal             #+#    #+#             */
/*   Updated: 2024/01/26 11:02:21 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	c;
	int		n;

	n = 0;
	while (n < 10)
	{
		c = '0' + n;
		write (1, &c, 1);
		n++;
	}
}
