# Makefile

.PHONY: all clean

CC       =g++
CFLAGS   =-g -Wall -ansi -pedantic
TARGET   =count
SRC      =count.cpp
HEADERS  =
INCLUDES =
LDFLAGS  =
LIBS     =

all: $(TARGET)

$(TARGET): $(SRC) $(HEADERS) Makefile
	$(CC) -o $@ $(CFLAGS) $(SRC) $(INCLUDES) $(LDFLAGS) $(LIBS)

clean:
	rm -f $(TARGET)
