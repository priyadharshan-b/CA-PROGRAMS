#!/bin/bash


echo "Enter the name of the file to copy:"
read source_file


if [ ! -f "$source_file" ]; then
    echo "File '$source_file' does not exist."
    exit 1
fi


echo "Enter the name for the new copy:"
read destination_file

cp "$source_file" "$destination_file"


if [ $? -eq 0 ]; then
    echo "File '$source_file' has been copied to '$destination_file'."
else
    echo "Failed to copy '$source_file'."
fi

echo ""

