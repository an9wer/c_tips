.PHONY: all
all: unistd.h/unistd sys_wait stdlib.h/stdlib

unistd.h/unistd: unistd.h/Makefile
	cd unistd.h && make

stdlib.h/stdlib:
	gcc -Iinclude stdlib.h/main.c stdlib.h/system.c -o $@

sys_wait:
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c sys/wait.h/waitpid.c -o $@

.PHONY: clean
clean:
	rm -f unistd.h/unistd stdlib.h/stdlib sys_wait
