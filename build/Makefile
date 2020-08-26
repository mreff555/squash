CC = /usr/bin/g++
SRC = *.cpp
SRC_DIR = ../src/
OBJ = $(SRC:.cpp=.o)
CFLAGS = -std=c++11
LDFLAGS =
EXE=squash

all: $(EXE)

$(EXE): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@ $(LDFLAGS)

$(OBJ): $(SRC_DIR)$(SRC)
	$(CC) $(CFLAGS) -c $(SRC_DIR)$^

clean:
	rm ./*.o
