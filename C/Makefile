#MAKE := make

MAKEFLAGS := --no-print-directory

TARGETS_DIR := targets
TARGETS := unistd sys/wait stdlib sys/times sys/resource

.PHONY: all
all: unistd.h/unistd sys_wait stdlib.h/stdlib sys_times sys_resource

unistd.h/unistd: unistd.h/Makefile
	$(MAKE) $(MAKEFLAGS) --directory=unistd.h

stdlib.h/stdlib:
	gcc -Iinclude stdlib.h/main.c stdlib.h/system.c -o $@

sys_wait:
	gcc -Iinclude sys/wait.h/main.c sys/wait.h/wait.c sys/wait.h/waitpid.c -o $@

sys_times:
	gcc -Iinclude sys/times.h/main.c sys/times.h/times.c -o $@

sys_resource:
	gcc -Iinclude sys/resource.h/main.c sys/resource.h/priority.c -o $@

.PHONY: clean
clean:
	rm -f unistd.h/unistd stdlib.h/stdlib sys_wait sys_times sys_resource
