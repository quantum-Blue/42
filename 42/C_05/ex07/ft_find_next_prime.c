/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 11:35:11 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 12:31:50 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
	{
		return (0);
	}
	
	while (nb >= i)
	{
		if ((nb % i == 0) && (i != nb))
			return (0);
		i++;
	}
	return (1);
}


int ft_find_next_prime(int nb)
{
    int i;
    int	flag;

    i = nb;
	flag = 0;
    while (flag !=  1)
    {
      flag = ft_is_prime(i);
	  i++;
    }
    return (i - 1);
}
