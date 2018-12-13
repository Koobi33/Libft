# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lnolan <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/30 18:12:10 by lnolan            #+#    #+#              #
#    Updated: 2018/12/13 16:35:45 by lnolan           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS	=	ft_range.c \
			ft_min.c \
			ft_max.c \
			ft_swap.c \
			ft_strichr.c \
			ft_lstmap.c \
			ft_lstiter.c \
			ft_lstadd.c \
			ft_lstdel.c \
			ft_lstdelone.c \
			ft_lstnew.c \
			ft_strtrim.c \
			ft_strsplit.c \
			ft_itoa.c \
			ft_strsub.c \
			ft_strjoin.c \
			ft_strequ.c \
			ft_strnequ.c \
			ft_strmapi.c \
			ft_strmap.c \
			ft_striteri.c \
			ft_striter.c \
			ft_strdel.c \
			ft_strnew.c \
			ft_memdel.c \
			ft_memalloc.c \
			ft_strclr.c \
			ft_putendl_fd.c \
			ft_putendl.c \
			ft_putstr_fd.c \
			ft_putstr.c \
			ft_putnbr.c \
			ft_putnbr_fd.c \
			ft_putchar_fd.c \
			ft_putchar.c \
			ft_strlcat.c \
			ft_memcmp.c \
			ft_memchr.c \
			ft_memmove.c \
			ft_memccpy.c \
			ft_memcpy.c \
			ft_memset.c \
			ft_strrchr.c \
			ft_strchr.c \
			ft_strnstr.c \
			ft_strstr.c \
			ft_bzero.c \
			ft_isalnum.c \
			ft_isdigit.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isprint.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_atoi.c \
			ft_strncpy.c \
			ft_strcpy.c \
			ft_strncmp.c \
			ft_strcmp.c \
			ft_strncat.c \
			ft_strcat.c \
			ft_strlen.c \
			ft_strdup.c \

OBJ	= $(SRCS:.c=.o)

all: $(NAME)

$(NAME):
		gcc -c -Wall -Wextra -Werror $(SRCS) -I .
		ar rc $(NAME) $(OBJ)
		ranlib $(NAME)

clean:
		rm -f $(OBJ)

fclean:	clean
		rm -f $(NAME)

re:	fclean all

