# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eleon-go <eleon-go@student.42malaga.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/23 16:59:59 by eleon-go          #+#    #+#              #
#    Updated: 2023/01/26 19:18:31 by eleon-go         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS 			= 	ft_bzero.c \
					ft_isalnum.c \
					ft_isalpha.c \
					ft_isascii.c \
					ft_isdigit.c \
					ft_isprint.c \
					ft_memcpy.c \
					ft_memset.c \
					ft_strlen.c \
					ft_tolower.c \
					ft_toupper.c \
					ft_memmove.c \
					ft_strlcpy.c \
					ft_strlcat.c \
					ft_strchr.c \
					ft_strrchr.c \
					ft_strncmp.c \
					ft_memchr.c \
					ft_memcmp.c \
					ft_strnstr.c \
					ft_atoi.c \
					ft_calloc \

OBJS			= $(SRCS:.c=.o)

BONUS			=	ft_lstadd_back.c \
					ft_lstadd_front.c \
					ft_lstclear.c \
					ft_lstdelone.c \
					ft_lstiter.c \
					ft_lstlast.c \
					ft_lstmap.c \
					ft_lstnew.c \
					ft_lstsize.c \
					
BONUS_OBJS		= $(BONUS:.c=.o)

CC				= cc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
				ar -rcs $(NAME) $(OBJS)

clean:
				$(RM) $(OBJS) $(BONUS_OBJS)

fclean:			clean
				$(RM) $(NAME)

re:				fclean all

#bonus:			$(OBJS) $(BONUS_OBJS)
#				ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)
#
.PHONY:			all clean fclean re bonus
