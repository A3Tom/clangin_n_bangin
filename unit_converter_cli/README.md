# uconv — Unit Converter CLI in C

## Goal

Build a small command-line unit converter that accepts simple inputs and prints converted values.

## MVP (5 pts total) 
- [ ] Parse and validate arguments.  
- [ ] Reject unknown units with a clear error and non-zero exit.  
- [ ] Reject cross-category conversions (e.g., `kg` to `m`) with a clear error and non-zero exit.  
- [ ] Correct conversions for all supported units.  
- [ ] `--list` prints all units grouped by category and exits 0.  

## Bonus Points (5 pts total) 
- [ ] `--help` prints usage and exits 0.  
- [ ] Warning-clean build: `-Wall -Wextra -Wpedantic` (ideally `-Werror`).  
- [ ] Good error messages to `stderr`.  
- [ ] Deterministic formatting based on flags.  
- [ ] Missing args / extra args -> exits non-zero and prints usage hint

## Super Bonus Points (6 pts total) 
- [ ] (2 pts) Precision CLI option.  
- [ ] (2 pts)  Scientific notation CLI option.  
- [ ] (2 pts)  Rounding CLI option.  

## CLI Specification

### Synopsis
`uconv [options] <value> <from_unit> <to_unit>`

Examples:
- `uconv 10 km mi`
- `uconv 72 F C`
- `uconv 5.5 lb kg`
- `uconv --precision 4 1 m ft`

Alternative input mode (optional):
- `uconv "10 km -> mi"`

### Options
- `--list`: print supported units and exit 0
- `--precision <P>`: digits after decimal (default 3, range 0..12)
- `--scientific`: use scientific notation
- `--round half-up|bankers` (optional; default: standard printf rounding)
- `--help`

### Output format
Single line:
- Default format: `<value> <from_unit> = <converted> <to_unit>`

Example:
`10 km = 6.214 mi`

## Supported Conversions 

### Length
- `mm`, `cm`, `m`, `km`
- `in`, `ft`, `yd`, `mi`

### Mass
- `g`, `kg`
- `oz`, `lb`

### Temperature
- `C`, `F`, `K`

### Volume
- `ml`, `l`
- `tsp`, `tbsp`, `cup`, `pt`, `qt`, `gal`