/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/22 12:16:25 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/22 13:08:06 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *list;

	list = begin_list;

	if (list)
		while(list)
		{
			if (cmp(list->data, data_ref) == 0)
				free(list->data);
			list = list->next;		
		}
}








typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;


