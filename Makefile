# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: chrhuang <chrhuang@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/11/07 14:51:18 by sregnard          #+#    #+#              #
#    Updated: 2019/10/27 14:50:10 by sregnard         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME					:=	mod1

HEADDIR					:=	includes/
SDL2					:=	libs/SDL2.framework/Headers
INCLUDES				:=	-I $(HEADDIR) \
							-I $(HEADDIR)classes/ \
							-I $(HEADDIR)classes/mvc \
							-I $(HEADDIR)classes/obs \
							-I $(SDL2)

HEADERS					:=	mod1.h \
							classes/point.h \
							classes/window.h \
							classes/map.h \
							classes/cell.h \
							classes/mvc/controller.h \
							classes/mvc/model.h \
							classes/mvc/view.h \
							classes/obs/observable.h \
							classes/obs/observer.h

DEPENDENCIES			:=	$(addprefix $(HEADDIR), $(HEADERS))

SRCDIR					:=	srcs/
SRC						:=	$(SRC)

SUBDIR					:=	mod1/
SRCNAME					:=	mod1.cpp \
							parsing.cpp \
							SDL.cpp
SRC						+=	$(addprefix $(SRCDIR)$(SUBDIR), $(SRCNAME))

SUBDIR					:=	classes/
SRCNAME					:=	window.cpp \
							point.cpp \
							map.cpp \
							cell.cpp
SRC						+=	$(addprefix $(SRCDIR)$(SUBDIR), $(SRCNAME))

SUBDIR					:=	classes/mvc/
SRCNAME					:=	controller.cpp \
							model.cpp \
							view.cpp
SRC						+=	$(addprefix $(SRCDIR)$(SUBDIR), $(SRCNAME))

SUBDIR					:=	classes/obs/
SRCNAME					:=	observable.cpp
SRC						+=	$(addprefix $(SRCDIR)$(SUBDIR), $(SRCNAME))

OBJDIR					:=	objs/
OBJ						:=	$(SRC:$(SRCDIR)%.cpp=$(OBJDIR)%.o)

CC						:=	g++
CFLAGS					:=	-Wall -Wextra -Werror -std=c++11
LFLAGS					:= `sdl2-config --libs`

_RED					:=	\033[1;31m
_GREEN					:=	\033[1;32m
_YELLOW					:=	\033[1;33m
_BLUE					:=	\033[1;34m
_MAGENTA				:=	\033[1;35m
_CYAN					:=	\033[1;36m
_BG_RED					:=	\033[1;41m
_BG_GREEN				:=	\033[1;42m
_BG_YELLOW				:=	\033[1;43m
_BG_BLUE				:=	\033[1;44m
_BG_MAGENTA				:=	\033[1;45m
_BG_CYAN				:=	\033[1;46m
_RESET					:=	\033[0m

all						:	$(NAME)

$(NAME)					:	$(OBJ)
	@$(CC) $(CFLAGS) $(LFLAGS) $(INCLUDES) -o $@ $(OBJ)
	@printf "\r" ; tput el
	@printf "$(_GREEN)%-10s : Executable\tbuilt.\n\a$(_RESET)" $(NAME)

$(OBJDIR)%.o			:	$(SRCDIR)%.cpp $(DEPENDENCIES)
	@if [ ! -d $(dir $@) ]; \
	then \
		printf "\r"; \
		tput el; \
		printf "$(_YELLOW)%-10s : %s $(_RESET)\a" $(NAME) $(dir $<); \
	fi;
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDES) -o $@ -c $<
	@printf "$(_BG_GREEN) $(_RESET)"

clean					:
	@printf "$(_BLUE)%-10s : Objects\tcleaned.\n$(_RESET)" $(NAME)
	@rm -rf $(OBJDIR)

fclean					:	clean
	@rm -rf $(NAME)
	@printf "$(_MAGENTA)%-10s : Executable\tcleaned.\n$(_RESET)" $(NAME)

re						:	fclean	all

m1						:
	@rm -rf objs/
	@printf "$(_BLUE)%-10s : Objects\tcleaned.\n$(_RESET)" $(NAME)
	@rm -rf $(NAME)
	@printf "$(_MAGENTA)%-10s : Executable\tcleaned.\n$(_RESET)" $(NAME)
	@make
