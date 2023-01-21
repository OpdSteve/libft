#Asignamos el nombre del recurso a crear (libreria generica).
NAME    = libft.a

#Nombramos las Flags utilizadas.
CFLAGS  = -Wall -Wextra -Werror

#Estos son los argumentos que empleara en la funcion (AR) y sus recursos correspondientes (SRC)
AR		= ar -rcs
SRC		= \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c \
	ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memcpy.c ft_memmove.c \
	ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
	ft_calloc.c ft_strdup.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_striteri.c ft_strmapi.c ft_substr.c \
	ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c

#Transforma los SRC en su estado base (.c) en objetos que serviran para la libreria (.o)
OBJ		= ${SRC:.c=.o}

#Recursos de bonificación y su transformación a objetos.
SRCBON	= \
		ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
	ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c
OBJBON	= ${SRCBON:.c=.o}

#A partir de aqui, son los comandos para utilizar en el MAKEFILE, se usan de manera complementaria (Ejem: MAKEFILE all; MAKEFILE bonus; etc.)

#Este es el comando principal, realiza la conversión a objetos de las funciones obligatorias en la libreria
all: $(NAME)

$(NAME): $(OBJ)
	@$(AR) $(NAME) $(OBJ)
	@echo Se han creado las librerias estandar ✓

#Realiza el anterior, pero añadiendo el bonus en la libreria
bonus: $(OBJBON) $(OBJ)
	@$(AR) $(NAME) $(OBJBON) $(OBJ)
	@echo Se han creado las librerias de BONUS ✓

#Elimina todos los objetos creados
clean:
	@rm -rf *.o
	@echo Se han eliminado los archivos .o ✓

#Elimina todos los archivos creados con el make
fclean: clean
	@rm -f $(NAME)
	@echo Se han eliminado los archivos .a ✓

#indica la manera de generar los archivos
%.o: %.c
	@gcc $(CFLAGS) -I libft.h -o $@ -c $<

re: fclean all

#Indica que en el caso que alguna función, se llame igual a un comando; los ignore y elija ejecute el comando y no el archivo.
.PHONY: all clean fclean re bonus

#\
         888                                                              \
         888                                                              \
         888                                                              \
 .d88b.  888  .d88b.   .d88b.  88888b.          .d88b.   .d88b.           \
d8P  Y8b 888 d8P  Y8b d88""88b 888 "88b        d88P"88b d88""88b          \
88888888 888 88888888 888  888 888  888 888888 888  888 888  888          \
Y8b.     888 Y8b.     Y88..88P 888  888        Y88b 888 Y88..88P          \
 "Y8888  888  "Y8888   "Y88P"  888  888         "Y88888  "Y88P"           \
                                                    888                   \
                                               Y8b d88P                   \
                                                "Y88P"                    \
 .d88888b.                888  .d8888b.  888                              \
d88P" "Y88b               888 d88P  Y88b 888                              \
888     888               888 Y88b.      888                              \
888     888 88888b.   .d88888  "Y888b.   888888 .d88b.  888  888  .d88b.  \
888     888 888 "88b d88" 888     "Y88b. 888   d8P  Y8b 888  888 d8P  Y8b \
888     888 888  888 888  888       "888 888   88888888 Y88  88P 88888888 \
Y88b. .d88P 888 d88P Y88b 888 Y88b  d88P Y88b. Y8b.      Y8bd8P  Y8b.     \
 "Y88888P"  88888P"   "Y88888  "Y8888P"   "Y888 "Y8888    Y88P    "Y8888  :)\
            888                                                           \
            888                                                           \
            888                                                           