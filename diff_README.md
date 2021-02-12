1) Install pyelftools
	python3 -m pip install --user pyelftools`

2) Install dependencies
	python3 -m pip install --user colorama ansiwrap watchdog python-Levenshtein cxxfilt

3) Make a folder named obj-expected and copy the contents of obj to it

4) Run diff
	python3 diff.py -mwo [name of the function in the ASM]