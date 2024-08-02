#!/bin/bash

# This script links the folder ./build_macos_arm64/UI/Debug to /Application/obs_folder/

SOURCE_DIR="./build_macos_arm64/UI/"
TARGET_DIR="/Applications/obs_folder/Debug/"

# Check if the source directory exists
if [ ! -d "$SOURCE_DIR" ]; then
  echo "Source directory $SOURCE_DIR does not exist."
  # create source
  mkdir -p "$SOURCE_DIR"
  echo "Created source directory $SOURCE_DIR"
fi

# Create the target directory if it does not exist
if [ ! -d "$TARGET_DIR" ]; then
  mkdir -p "$TARGET_DIR"
fi

# Create the symbolic link
ln -sfn "$TARGET_DIR" "$SOURCE_DIR"

echo "Linked $SOURCE_DIR to $TARGET_DIR"