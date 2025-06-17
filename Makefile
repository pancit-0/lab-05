CC = gcc
INC = include
CFLAGS = -Wall -I$(INC)
SRC = src/ 

SRC_STACK = main_stack.c $(SRC)stack.c
SRC_LL = main_enlazadas.c $(SRC)listas_enlazadas.c
SRC_DLL = main_doblemente.c $(SRC)doblemente_enlazadas.c

OBJ_STACK = $(SRC_STACK:.c=.o)
OBJ_LL = $(SRC_LL:.c=.o)
OBJ_DLL = $(SRC_DLL:.c=.o)

TARGET_STACK = stack
TARGET_LL = listas_enlazadas
TARGET_DLL = doblemente_enlazadas

all: $(TARGET_STACK) $(TARGET_LL) $(TARGET_DLL)

$(TARGET_STACK): $(OBJ_STACK)
	$(CC) $(CFLAGS) $^ -o $@
	
$(TARGET_LL): $(OBJ_LL)
	$(CC) $(CFLAGS) $^ -o $@

$(TARGET_DLL): $(OBJ_DLL)
	$(CC) $(CFLAGS) $^ -o $@


%.o: %.c 
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm $(TARGET_STACK) $(TARGET_LL) $(TARGET_DLL) *.o
