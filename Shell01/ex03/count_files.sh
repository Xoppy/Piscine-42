# type "f" restric the seatch to files and "d" to directories
# word count -l counts the number of lines
find . -type f -o -type d | wc -l
