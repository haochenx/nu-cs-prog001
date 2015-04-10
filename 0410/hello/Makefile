CC=gcc
LINK=gcc
CFLAGS=-o2

TARGET=hello

$(TARGET): hello.o
	$(LINK) -o $@ $<

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $<

.PHONY: clean run

run: $(TARGET)
	@echo
	@echo "--- RUNNING $(TARGET) ---"
	@./$(TARGET)

clean:
	rm -f *.o hello
	rm -f $(TARGET)
