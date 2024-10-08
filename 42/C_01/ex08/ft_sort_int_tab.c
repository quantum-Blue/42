/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/03 19:38:06 by mubal             #+#    #+#             */
/*   Updated: 2024/02/07 13:55:22 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	*temp;

	i = 0;
	j = 0;
	while (i > 0)
	{
		while (j > 0)
		{
			if (tab[j] < tab[i])
			{
				*temp = tab[i];
				tab[i] = tab[j];
				tab[j] = *temp ;
			}
			j--;
		}
		i--;
	}
}
