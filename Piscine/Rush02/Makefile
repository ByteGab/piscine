#name of program
NAMEP = rush-02

#source files
SRC_FILE = ft_putchar.c ft_putstr.c main.c

#directories
SRC_DIR = src/

#complete address of sources files
SRC = $(addprefix $(SRC_DIR), $(SRC_FILE))

#create obj files from sources files
OBJC = $(SRC:.c=.o)

#flags to compile
CC = cc
CFLAGS = -Wall -Werror -Wextra
INCLUDE = -I include
RM = rm -rf

#build the exect file
all: $(NAMEP)

#compile objects with libraries and files
$(NAMEP) : $(OBJC)
		$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) -o $(NAMEP)

#remove all obj files
clean :
	${RM} $(OBJC)

#remove all the files created
fclean : clean
	${RM} $(NAMEP)

#indicates that they aren't real files
.PHONY:	all clean fclean























