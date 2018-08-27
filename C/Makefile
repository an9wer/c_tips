.PHONY: all
all: unistd sys_wait

unistd:
	gcc -Iinclude unistd.h/main.c unistd.h/fork.c unistd.h/exec.c -o $@

sys_wait:
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c sys/wait.h/waitpid.c -o $@


.PHONY: clean
clean:
	rm -f unistd sys_wait
