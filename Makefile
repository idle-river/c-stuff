CC = gcc
CFLAGS = -std=c99 -Wall -Wextra
INPUT = guessing

build: $(INPUT).c
	$(CC) $(CFLAGS) $(INPUT).c -o $(INPUT)

clean:
	rm -f $(INPUT)