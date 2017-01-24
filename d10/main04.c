/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lyoung <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/23 15:13:45 by lyoung            #+#    #+#             */
/*   Updated: 2017/01/23 15:46:28 by lyoung           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_checkstr(char *str);
int		ft_count_if(char **tab, int (*f)(char*));

int		main(int argc, char **argv)
{
	int res;

	(void)argc;
	res = ft_count_if(argv, &ft_checkstr);
	printf("%d\n", res);
	return (0);
}
