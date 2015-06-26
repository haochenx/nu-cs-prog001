CC=gcc
CFLAGS=-O2 -Wall -Wextra -Werror

targets=12-01 12-02 12-03 12-04 13-01 13-02 13-03
obj=

export obj

run: $(obj)
	@echo "*** *** RUN: $(obj) *** ***"
	@./$(obj)

report: $(targets:=.c)
	tail -n+1 $+ > report.txt

clean:
	rm -f *.o
	rm -f $(targets)

