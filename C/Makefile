.PHONY: all
#all: unistd.h/unistd sys_wait
all: sys_wait a

unistd.h/unistd: head unistd.h/Makefile
	cd unistd.h && make

a: head
	@echo aaa

sys_wait: head
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c sys/wait.h/waitpid.c -o $@

.PHONY: head
head:
	@printf "#\n# Building $@\n#\n"

.PHONY: clean
clean:
	rm -f unistd.h/unistd sys_wait
