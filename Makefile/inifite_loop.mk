target := /tmp/tmp.siIuEjpSlM

include $(target)

.PHONY: dummy
$(target): dummy
	touch $@
