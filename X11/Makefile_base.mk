# required to define variable ROOT_DIR, TARGET and PREREQUISITES,

INCLUDE_DIR = $(ROOT_DIR)/include
TARGETS_DIR = $(ROOT_DIR)/targets

RM := rm
CC := gcc

LIBS = -lX11
CFLAGS = -Wall
CPPFLAGS = -I$(INCLUDE_DIR)
COMPILE.c = $(CC) $(CPPFLAGS) $(CFLAGS)

$(TARGETS_DIR)/$(TARGET): $(PREREQUISITES)
	$(COMPILE.c) $^ $(LIBS) -o $@

.PHONY: clean
clean:
	-$(RM) $(TARGETS_DIR)/$(TARGET)
