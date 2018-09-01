OBJECTS = static_pattern_rules

$(OBJECTS): %: %.mk
	@echo "This is a static pattern rule"
