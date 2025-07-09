# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: javilla- <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/30 19:48:35 by javilla-          #+#    #+#              #
#    Updated: 2025/07/02 18:54:08 by javilla-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre de la librería final
NAME = libft.a

# Compilador y flags
CC = cc
CCFLAGS = -Wall -Wextra -Werror

# Comando para borrar archivos
RM = rm -rf

# Archivo de cabecera
INC = libft.h

# Lista de archivos fuente
SRCS = ft_isalpha.c\
       ft_isdigit.c\
       ft_isalnum.c\
       ft_isascii.c\
       ft_isprint.c\
       ft_strlen.c\
       ft_memset.c\
       ft_bzero.c\
       ft_memcpy.c\
       ft_memmove.c\
       ft_strlcpy.c\
       ft_strlcat.c\
       ft_toupper.c\
       ft_tolower.c\
       ft_strchr.c\
       ft_strrchr.c\
       ft_strncmp.c\
       ft_memchr.c\
       ft_memcmp.c\
       ft_strnstr.c\
       ft_atoi.c\
       ft_calloc.c\
       ft_strdup.c\
       ft_substr.c\
       ft_strjoin.c\
       ft_strtrim.c\
       ft_split.c\
       ft_itoa.c\
       ft_strmapi.c\
       ft_striteri.c\
       ft_putchar_fd.c\
       ft_putstr_fd.c\
       ft_putendl_fd.c\
       ft_putnbr_fd.c

# Archivos objeto (convertimos .c en .o)
OBJS = $(SRCS:.c=.o)

# Regla principal para construir la librería
$(NAME): $(OBJS)
	ar crs $(NAME) $(OBJS)

# Regla por defecto
all: $(NAME)

# Regla genérica para compilar .c a .o
%.o : %.c Makefile $(INC)
	$(CC) $(CCFLAGS) -c -o $@ $<

# Borrar archivos objeto
clean:
	$(RM) $(OBJS)

# Borrar todo (incluyendo libft.a)
fclean: clean
	$(RM) $(NAME)

# Recompilar desde cero
re: fclean all

# Evitar conflictos con archivos llamados 'all', etc.
.PHONY: all clean fclean re
