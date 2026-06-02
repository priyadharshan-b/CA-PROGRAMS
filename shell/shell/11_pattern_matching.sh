#!/bin/bash

read -p "Enter a word to search for: " search_word


read -p "Enter the filename to search in: " filename


if [ ! -f "$filename" ]; then
    echo "Error: File '$filename' does not exist."
    exit 1
fi


echo "Searching for '$search_word' in '$filename':"
grep -n "$search_word" "$filename"


if [ $? -eq 0 ]; then
    echo "Search completed."
else
    echo "No matches found for '$search_word'."
fi
