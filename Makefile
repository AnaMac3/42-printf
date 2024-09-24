CC= cc
CFLAGS=-Wall -Wextra -Werror
SRC_FILES= ft_printf.c ft_pfchar.c ft_pfstr.c  \
			ft_pfnbr.c ft_pfunsgn.c ft_pfhex.c
OBJ_FILES= $(SRC_FILES:.c=.o)
HEADER_FILE= libftprintf.h 
NAME= libftprintf.a

//AUX_DIR= ../Libft
//AUX_LIB= $(AUX_DIR)/libft.a 

all: $(NAME)
$(NAME): $(OBJ_FILES)
	ar rcs $(NAME) $(OBJ_FILES)
	ar rcs $(NAME) $(AUX_LIB)

%.o: %.c $(HEADER_FILE)
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ_FILES)
fclean: clean
	rm -f $(NAME)
re: fclean all