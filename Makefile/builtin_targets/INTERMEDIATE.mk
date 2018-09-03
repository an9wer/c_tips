# If make creates the intermediate file while updating another target and the
# file belongs to .INTERMEDIATE target, the file will be deleted automatically
# when make exits. If the file already exists when make considers updating the
# file, the file will not be deleted.


# intermediate1 and intermediate2 are all not existed before now.
intermediate1 := $(shell mktemp -u)
intermediate2 := $(shell mktemp)
# intermediate2 now is created, but intermediate1 is still not existed.

.INTERMEDIATE: $(intermediate1) $(intermediate2)

.PHONY: all
all: target1 target2

target1: $(intermediate1)
	@echo intermediate file \'$(intermediate1)\' will be deleted, cause it \
		doesn\'t exist when make considers updating it.

target2: $(intermediate2)
	@echo intermediate file \'$(intermediate2)\' will not be deleted, cause \
		it\'s already been existed before make considers updating it.

$(intermediate1) $(intermediate2): %:
	touch $@
