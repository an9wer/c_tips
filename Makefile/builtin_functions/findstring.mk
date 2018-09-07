text := some words other words

tip1 = $(findstring some, $(text))
tip2 = $(findstring word, $(text))
tip3 = $(findstring %o, $(text))

all:
	@printf "%s: %s\n" '$(value tip1)' '$(call tip1)'
	@printf "%s: %s\n" '$(value tip2)' '$(call tip2)'
	@printf "%s: %s\n" '$(value tip3)' '$(call tip3)'
