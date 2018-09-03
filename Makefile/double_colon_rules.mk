depend1 := $(shell mktemp)
depend2 := $(shell mktemp)

target:: $(depend1)
	@echo 1
	@rm $(depend1)

target:: $(depend2)
	@echo 2
	@rm $(depend2)

target::
	@echo 3
