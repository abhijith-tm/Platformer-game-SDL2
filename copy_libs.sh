#!/bin/bash

# Set the path to your game executable
game_exe="./a.out"

# Set the destination directory where you want to copy the libraries
dest_dir="./libraries"

# Get the list of libraries that your game depends on
libs=$(ldd $game_exe | awk '{print $3}' | grep -v "^/$")

# Create the destination directory if it doesn't exist
mkdir -p $dest_dir

# Loop through the list of libraries and copy them to the destination directory
for lib in $libs; do
  # Skip if the library is a symbolic link
  if [ -L $lib ]; then
    continue
  fi

  # Get the full path to the library
  full_lib=$(readlink -f $lib)

  # Copy the library to the destination directory
  cp $full_lib $dest_dir
done
