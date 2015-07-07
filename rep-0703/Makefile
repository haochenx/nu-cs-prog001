CC=gcc
CFLAGS=-O2 -Wall -Wextra -Werror

targets=13-04 13-05 14-01 14-02 14-03 14-04 14-05 15-01 15-02
obj=
args=

export obj
export args

run: $(obj)
	@echo "*** *** RUN: $(obj) *** ***"
	@./$(obj) $(args)

report: $(targets:=.c)
	tail -n+1 $+ > report.txt

clean:
	rm -f *.o
	rm -f $(targets)

