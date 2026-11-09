# Timing Instrumentation Report

## Measurement Results

| Phase | Execution Time (seconds) |
|---|---:|
| TOTAL | 0.000706 |
| BUILD_DATA | 0.000261 |
| PROCESS | 0.000291 |
| REDUCE | 0.000149 |

## Measurement Boundaries

- TOTAL: Measures the complete execution of the three phases.
- BUILD_DATA: Measures only the build_dataset() function.
- PROCESS: Measures only the process_dataset() function.
- REDUCE: Measures only the reduce_checksum() function.

## Timing Method
- Used clock_t and clock() from time.h.
- Converted clock ticks to seconds using CLOCKS_PER_SEC.
- Used consistent start and end boundaries for each measurement.
- Kept the original algorithm logic unchanged.
