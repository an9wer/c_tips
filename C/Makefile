.PHONY: all
all: unistd sys_wait

unistd:
	gcc -Iinclude unistd.h/main.c unistd.h/fork.c -o $@

sys_wait:
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c -o $@


.PHONY: clean
clean:
	rm -f unistd sys_wait
