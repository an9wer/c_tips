text := some words other words

tip1 = $(subst words,sentences,$(text))
tip2 = $(subst words, sentences, $(text))

all:
	@printf "%s: %s\n" '$(value tip1)' '$(call tip1)'
	@printf "%s: %s\n" '$(value tip2)' '$(call tip2)'
