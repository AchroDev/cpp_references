.PHONY: clean All

All:
	@echo "----------Building project:[ cpp_references - Debug ]----------"
	@"$(MAKE)" -f  "cpp_references.mk"
clean:
	@echo "----------Cleaning project:[ cpp_references - Debug ]----------"
	@"$(MAKE)" -f  "cpp_references.mk" clean
