#!/bin/bash

echo "Creating data files..."


cat <<EOL > file1.txt
apple
banana
cherry
date
fig
grape
EOL


cat <<EOL > file2.txt
banana
cherry
date
kiwi
lemon
mango
EOL

echo "Data files created: file1.txt and file2.txt"


sort file1.txt -o file1.txt
sort file2.txt -o file2.txt


echo "Comparing files for unique and common entries..."
comm -3 file1.txt file2.txt
