.PHONY: all
all: target11 target12 target22

variable := gotcha

target1%: variable += target1*

%:
	@echo $(variable)
