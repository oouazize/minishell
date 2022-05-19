/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tjoin.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oouazize <oouazize@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 14:25:01 by mmounib           #+#    #+#             */
/*   Updated: 2022/05/16 16:59:28 by oouazize         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../minishell.h"

char **tjoin(char *s1, char **s2)
{
	int len;
	char **s3;

	len = 0;
	while (s2[len])
		len++;
	s3 = malloc(sizeof(char *) * (len + 2));
	s3[0] = s1;
	len = 0;
	while (s2[len])
	{
		s3[len + 1] = s2[len];
		len++;
	}
	s3[len + 1] = 0;
	return (s3);
}