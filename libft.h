/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/09 19:23:37 by eleon-go@st       #+#    #+#             */
/*   Updated: 2023/01/02 13:04:07 by eleon-go         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Indicamos que LIBFT_H no esta definido de serie, para definirlo nosotros*/
#ifndef LIBFT_H
# define LIBFT_H

/*Incluimos las librerias necesarias para nuestras funciones*/
# include <stdlib.h>
# include <string.h>
# include <unistd.h>
# include <stdio.h>

/*Indicamos el tipo de estructura de s_list y que es un valor void*/
typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* -V- Ahora vamos a integrar las funciones que componen esta libreria	-V- */

/* -V-							PRIMERA PARTE 							-V- */

/*Esta funcion devuelve "1" si cumple que el imput sea un caracter alfabetico*/
int		ft_isalpha(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un numero (0-9)*/
int		ft_isdigit(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un numero o letra*/
int		ft_isalnum(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea un ASCII*/
int		ft_isascii(int c);

/*Esta funcion devuelve "1" si cumple que el imput sea imprimible*/
int		ft_isprint(int c);

/* Esta función cuenta los caracteres del imput y devuelve la longitud*/
size_t	ft_strlen(const char *s);

/*Este codigo convierte las minusculas en mayuscula, todo un lujo...*/
int		ft_toupper(int c);

/*Este codigo convierte las mayusculas en minusculas, UP2u*/
int		ft_tolower(int c);

/*Esta funcion escribe 0 bytes en el espacio n, si n es 0, no hace nada utilizamos*/
void	ft_bzero(void *s, size_t n);

/*copia el caracter c (un char sin signo) a los primeros n caracteres de str*/
void	*ft_memset(void *b, int c, size_t len);

/*Se utiliza para copiar una cantidad especificada de bytes de una ubicación de memoria a otra*/
void	*ft_memcpy(void *dst, const void *src, size_t n);

void	*ft_memmove(void *dst, const void *src, size_t len);

size_t	ft_strlcpy(char *dst,
			const char *src,
			size_t dstsize);

size_t	ft_strlcat(char *dst,
			const char *src,
			size_t dstsize);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strnstr(const char *haystack, const char *needle, size_t len);

int		ft_atoi(const char *str);

void	*ft_calloc(size_t count, size_t size);

char	*ft_strdup(const char *s);

/* -V-							SEGUNDA PARTE 							-V- */

char	*ft_substr(char const *s, unsigned int start, size_t len);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned
				int, char));

void	ft_striteri(char *s, void (*f)(unsigned int,
				char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

/* -V-							PARTE DE BONUS 							-V- */

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void *));

void	ft_lstclear(t_list **lst, void (*del)(void *));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst,
			void *(*f)(void *), void (*del)(void *));

#endif