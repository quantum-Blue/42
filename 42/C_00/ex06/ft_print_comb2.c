/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/26 09:05:28 by mubal             #+#    #+#             */
/*   Updated: 2024/01/26 11:55:36 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	fonx(int s1, int s2)
{
	char	c1;
	char	c2;
	char	c3;
	char	c4;

	c1 = '0' + (s1 / 10);
	c2 = '0' + (s1 % 10);
	c3 = '0' + (s2 / 10);
	c4 = '0' + (s2 % 10);
	write(1, &c1, 1);
	write(1, &c2, 1);
	write(1, " ", 1);
	write(1, &c3, 1);
	write(1, &c4, 1);
	if (!(s1 == 98 && s2 == 99))
		write(1, ", ", 2);
}

void	ft_print_comb2(void)
{
	int		s1;
	int		s2;

	s1 = 0;
	s2 = 1;
	while (s1 < 100)
	{
		while (s2 < 100)
		{
			fonx(s1, s2);
			s2++;
		}
		s1++;
		s2 = s1 + 1;
	}
}