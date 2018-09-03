# https://www.gnu.org/software/make/manual/html_node/Interrupts.html

prerequisite := $(shell mktemp -u)

.PRECIOUS: $(prerequisite)

target: $(prerequisite)

$(prerequisite):
	@touch $@
	@echo You have 10s to hit Ctrl-C to kill make and \'$(prerequisite)\' will \
		not be deleted.
	@sleep 10
