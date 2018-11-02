DIRS := display window

MAKE := make
MAKEFLAGS = --no-print-directory

.PHONY: all
all:
	for dir in $(DIRS); do \
		$(MAKE) $(MAKEFLAGS) --directory=$${dir}; \
	done

.PHONY: clean
clean:
	for dir in $(DIRS); do \
		$(MAKE) $(MAKEFLAGS) --directory=$${dir} clean; \
	done
