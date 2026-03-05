#!/bin/bash

# Check arguments, warn and exit if none provided
if [ $# -eq 0 ]; then
    echo "Warning: No Verilog file specified"
    echo "Usage: $0 <file.v>"
    echo "Example: $0 AS.v"
    exit 1  # Exit, do not run yosys
fi

FILE="$1"
TOP_MODULE=$(basename "$FILE" .v)

echo "Synthesizing $FILE (top: $TOP_MODULE)"
yosys -p "
  read_verilog $FILE;
  hierarchy -check -top $TOP_MODULE;
  synth -top $TOP_MODULE;
  stat;
  show;
"
