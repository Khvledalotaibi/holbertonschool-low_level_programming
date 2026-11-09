# Green Efficiency Analysis

## Measurement Methodology

The experiments used three C programs to investigate execution time and algorithmic efficiency. All programs were compiled using GCC with warning and error checks. The timing measurements used the `clock()` function from `<time.h>`, with clock ticks converted into seconds using `CLOCKS_PER_SEC`.

In Task 0, the baseline program executed 100,000,000 iterations. Three measurements were recorded: 0.208981, 0.208460, and 0.207336 seconds. The average execution time was approximately 0.208259 seconds.

In Task 1, two implementations counted even numbers in an array containing 50,000 elements. The naive implementation used nested loops, while the single-pass implementation examined each element once. Both implementations were executed three times, and their execution times were recorded separately.

In Task 2, timing instrumentation measured the complete execution and three individual phases: data construction, data processing, and checksum reduction. The measurements were recorded using consistent start and end boundaries around each phase.

## Observed Performance Differences

The baseline experiment produced relatively consistent execution times across its three runs, ranging from 0.207336 to 0.208981 seconds. This indicates that the measured workload had similar execution times across the repeated tests.

The largest performance difference appeared in Task 1. The naive algorithm required 2.496040, 2.499054, and 2.499118 seconds. Its average was approximately 2.498071 seconds.

In comparison, the single-pass algorithm required 0.000097, 0.000097, and 0.000096 seconds, producing an average of approximately 0.000096667 seconds.

Based on these averages, the naive implementation was approximately 25,842 times slower than the single-pass implementation. Both implementations produced their respective recorded results consistently. The difference demonstrates the significant runtime impact of algorithm design and the number of operations performed.

Task 2 recorded a total execution time of 0.000706 seconds. The individual measurements were 0.000261 seconds for BUILD_DATA, 0.000291 seconds for PROCESS, and 0.000149 seconds for REDUCE. PROCESS was the longest measured phase in this particular run.

## Relation Between Runtime and Energy Consumption

Execution time is relevant when considering energy efficiency because a program that runs for less time may require less energy if its average power consumption remains comparable.

The Task 1 results demonstrate a substantial reduction in execution time when using the single-pass implementation instead of the naive implementation. This suggests a potential opportunity to reduce energy consumption by selecting more efficient algorithms.

However, these experiments measured execution time, not electrical energy. No power measurements or energy-monitoring equipment were used. Therefore, the results cannot establish the actual energy savings of either implementation.

## Limitations of the Experiment

There are several limitations. First, execution times were measured in a single computing environment, so the results may differ on other processors or systems.

Second, Tasks 0 and 1 used three runs each, which provides only a limited sample. Task 2 recorded one run, making it insufficient to establish consistent performance across repeated executions.

Third, the experiments did not measure CPU power consumption, electricity usage, or total energy in joules. The results therefore describe runtime performance rather than directly measured environmental impact.

Finally, very short measurements, such as the single-pass execution time, can be affected by timer resolution and measurement overhead.

## Practical Engineering Takeaway

The experiments demonstrate that software efficiency depends significantly on implementation choices. Task 1 provides the clearest evidence: the single-pass algorithm completed the same counting task substantially faster than the naive implementation.

The practical lesson is to consider algorithmic complexity and avoid unnecessary repeated operations. Developers should measure performance rather than assume that two implementations are equally efficient.

For greener software engineering, runtime benchmarking is a useful starting point, but it should be combined with direct energy measurements before making quantitative claims about environmental benefits.
