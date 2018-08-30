.PHONY: all
all: target1 target2 target3

target1: msg
	@echo "target1"

target2: msg
	@echo "target2"

target3: msg
	@echo "target3"

.PHONY: msg
msg:
	@echo "msg"
