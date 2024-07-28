# Here we are using the variable $FT_USER, the tr command adds the comma instad of the spaces
# and tr -d deletes all the newlines so that we get a clean one line input
groups $FT_USER | tr ' ' , | tr -d '\n'
