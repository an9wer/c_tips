INCLUDE_DIR = $(ROOT_DIR)/include
TARGETS_DIR = $(ROOT_DIR)/targets

RM := rm
CC := gcc

CFLAGS = -Wall
CPPFLAGS = -I$(INCLUDE_DIR)
COMPILE.c = $(CC) $(CPPFLAGS) $(CFLAGS)

$(TARGETS_DIR)/$(TARGET): $(PREREQUISITES)
	$(COMPILE.c) $^ -o $@

.PHONY: clean
clean:
	-$(RM) $(TARGETS_DIR)/$(TARGET)
