/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bsq.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sycohen <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/09/19 20:57:03 by sycohen           #+#    #+#             */
/*   Updated: 2016/09/20 15:19:06 by sycohen          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_BSQ_H
# define FT_BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct		s_line
{
	struct s_line	*next;
	int				*str;
	struct s_line	*last;
}					t_line;

//typedef struct		s_coord
//{
//	int				x;
//	int				y;
//	int				max;
//}					t_coord;

typedef struct		s_list
{
	int				fline_index;
	long long int	height;
	long long int	width;
	long long int	width_comp;
	int				valid_char;
	int				obstacle;
	int				plain_char;
}					t_list;

typedef	struct		s_tepu
{
	int				fd;
	char			*str;
	char			buf[2];
	int				i;
	int				j;
	int				hauteur;
	char			tab[16];
	char			*file_name;
}					t_tepu;

typedef struct		s_ok
{
	int				i;
	int				k;
	int				hauteur;
	char			buf[2];
}					t_ok;

char				*ft_evaluate_first_line(char *str, int *fd);
//void				ft_help(t_line *line, t_coord *coord, t_list *sq_props);
int					ft_open(t_list *sq_props, int fd, int *j);
int					ft_er(t_tepu *bitch, t_list *sq_props);
void				ft_ok(int ac, t_tepu *bitch);
void				ft_create_file(void);
//void				ft_solve_grid(t_line *line,
		t_list *sq_props, t_coord *coord);
t_line				*ft_create_table(char *fd, t_list *sq_props);
t_line				*ft_line_push_back(t_line *list, int *str);
int					main(int ac, char **av);
int					ft_strlen(char *str);
int					ft_check(char c, t_list *info, int j, int *hauteur);
void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_info(char *str);
//void				ft_remplissage(t_line *list,
		t_coord *coord, t_list *sq_props);
void				ft_display(char **str, t_list *sq_props);
char				*ft_evaluate_first_line(char *str, int *fd);
char				*ft_remalloc(char *str, int size);
t_line				*ft_create_elem(int *str);
void				ft_error(void);

#endif
