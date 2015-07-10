CC=gcc
CFLAGS=-O2 -Wall -Wextra -Werror

targets=15-03 16-01 16-02 16-03 16-04
obj=
args=

export obj
export args

run: $(obj)
	@echo "*** *** RUN: $(obj) *** ***"
	@./$(obj) $(args)

compile_all: $(targets:=.c)
	$(CC) -c $(CFLAGS) $+

report: $(targets:=.c)
	tail -n+1 $+ > report.txt

clean:
	rm -f *.o
	rm -f $(targets)

