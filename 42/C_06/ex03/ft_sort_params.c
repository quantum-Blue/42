/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mubal <mubal@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/08 12:49:14 by mubal             #+#    #+#             */
/*   Updated: 2024/02/08 13:35:19 by mubal            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	esitle(int argc, char argv[],char *c)
{
	int		i;

	i = argc-1;
	while (i > 0)
	{
		*c = argv[i];
		i--;
	}
}

void	sirala(int argc, char argv[],char *c)
{
	char	temp;
	int		i;

	i = argc-1;
	i = argc-1;
	while (i > 0)
	{
		if (c[i] < c[i+1])
		{
			temp = c[i];
			c[i] = c[i+1];
			c[i+1] = temp;
		}
		
	}
}

void	bastir(int argc, char argv[],char *c)
{
	int		i;

	i = argc-1;
	while (i >0)
	{
		write(1, argv[i-1] + '0', 1);
		i--;
	}
}

int		main(int argc, char argv[])
{
	char	*c;
	
	esitle(argc,argv,&c);
	sirala(argc,argv,&c);
	bastir(argc,argv,&c);

	return (0);
}
