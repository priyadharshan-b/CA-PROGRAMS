#!/bin/bash

echo "Enter the path of the file to copy:"
read source_file


if [ ! -f "$source_file" ]; then
    echo "Error: File '$source_file' does not exist."
    exit 1
fi


echo "Enter the destination directory:"
read destination_dir


if [ ! -d "$destination_dir" ]; then
    echo "Error: Directory '$destination_dir' does not exist."
    exit 1
fi


cp "$source_file" "$destination_dir"


if [ $? -eq 0 ]; then
    echo "File '$source_file' has been copied to '$destination_dir'."
else
    echo "Failed to copy '$source_file'."
fi
