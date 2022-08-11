/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: equesnel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 21:12:03 by equesnel          #+#    #+#             */
/*   Updated: 2022/04/06 23:23:56 by equesnel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>

typedef struct s_lst
{
	void			*content;
	struct s_lst	*next;
}t_lst;

typedef struct s_dlist
{
	int				data;
	struct s_dlist	*next;
	struct s_dlist	*preview;
}t_dlist;

int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_isalnum(int c);
int			ft_isascii(int c);
int			ft_isprint(int c);
size_t		ft_strlen(const char *s);
void		*ft_memset(void *s, int c, size_t n);
void		ft_bzero(void *s, size_t n);
void		*ft_memcpy(void *dest, const void *src, size_t n);
void		*ft_memmove(void *dest, const void *src, size_t n);
size_t		ft_strlcpy(char *dst, const char *src, size_t size);
size_t		ft_strlcat(char *dst, const char *src, size_t size);
int			ft_toupper(int c);
int			ft_tolower(int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
int			ft_strncmp(const char *s1, const char *s2, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
char		*ft_strnstr(const char *big, const char *little, size_t len);
int			ft_atoi(const char *nptr);
void		*ft_calloc(size_t nmemb, size_t size);
char		*ft_strdup(const char *s);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strtrim(char const *s1, char const *set);
void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void		ft_striteri(char *s, void (*f)(unsigned int, char*));
char		**ft_split(char const *s, char c);
char		*ft_itoa(int n);

	/*ft_prinf*/

int			ft_putchar_rl(char c);
int			ft_putstr_rl(char *str);
int			ft_putnbr_base_rl(char *base, long int nb);
long long	ft_putnbr_base_rlu(char *base, unsigned long long nb);
long long	ft_putadr_rl(unsigned long long adr);
size_t		ft_strlen_p(const char *s);
int			ft_printf(const char *s, ...);

	/*bonus_list*/

t_lst		*ft_lstnew(void *content);
void		ft_lstadd_front(t_lst **lst, t_lst *new);
int			ft_lstsize(t_lst *lst);
t_lst		*ft_lstlast(t_lst *lst);
void		ft_lstadd_back(t_lst **lst, t_lst *new);
void		ft_lstdelone(t_lst *lst, void (*del)(void*));
void		ft_lstclear(t_lst **lst, void (*del)(void*));
void		ft_lstiter(t_lst *lst, void (*f)(void *));
t_lst		*ft_lstmap(t_lst *lst, void *(*f)(void *), void (*del)(void *));

#endif
