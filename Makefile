CC=cc
CFLAGS= -g -Wall
BINDIR=bin
BIN = $(BINDIR)/main
SRC=src
OBJ=obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

all:$(BIN)
release: CC=clang
release: CFLAGS=-Wall -O2 -DNDEBUG
release: clean
release: $(BIN)

$(BIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@
clean:
	$(RM) -r $(BINDIR)/* $(OBJ)/*