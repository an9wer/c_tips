.PHONY: all
all: target1 target2

variable := 1

target1:
	@echo 'variable' in target1 is $(variable).

# redefine variable
variable := 2

target2:
	@echo 'variable' in target2 is $(variable).
