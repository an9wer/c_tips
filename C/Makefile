.PHONY: all
all: unistd.h/unistd sys_wait

unistd.h/unistd: unistd.h/Makefile
	cd unistd.h && make

sys_wait:
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c sys/wait.h/waitpid.c -o $@


.PHONY: clean
clean:
	rm -f unistd.h/unistd sys_wait
