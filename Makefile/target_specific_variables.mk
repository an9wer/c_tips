.PHONY: all
all: target1 target2

variable := gotcha

target1: variable += target1
target1:

target2:

%:
	@echo $(variable)
