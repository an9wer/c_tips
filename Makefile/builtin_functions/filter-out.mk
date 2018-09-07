text := a.mk a.txt a.%

tip1 = $(filter-out %.mk, $(text))
tip2 = $(filter-out a.%, $(text))
tip3 = $(filter-out %.%, $(text))
tip4 = $(filter-out %.mk %.txt, $(text))

all:
	@printf "%s: %s\n" '$(value tip1)' '$(call tip1)'
	@printf "%s: %s\n" '$(value tip2)' '$(call tip2)'
	@printf "%s: %s\n" '$(value tip3)' '$(call tip3)'
	@printf "%s: %s\n" '$(value tip4)' '$(call tip4)'
