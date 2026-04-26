This is the hard version of the problem. The difference between the versions is that in this version, there are no constraints on the regions defined by each logger and can overlap.

Even programming geniuses are hit hard in this age of LLMs and Agentic Workflows. Frustrated by the rampant layoffs across the IT industry, Samrat decides to take a career shift, going back to his hometown to build a farm and start afresh.

Samrat's plot can be defined as N×M grid and Samrat plants a fruit tree in each cell of the grid. Samrat visits his farmland and collects the ripe fruits from the trees, over a span of T days. However, owing to various factors all the trees have varying yield, and do not produce fruits at the same time. Specifically, on the ith day exactly one of the trees, specified by row ri and column ci, gives a yield of vi fruits.

Samrat being the brilliant problem-solver he is, seeks to expertly capture the output from his plot and maximize his profits (layoffs are not going to stop him from making bank). He sets up a set of Q loggers to capture the outputs produced by specific regions of his plot. Each logger monitors a specific sub-grid of the farmland defined by the rows r1 to r2 and columns c1 to c2, and has a fixed threshold of X. The logger generates a signal when the total produce from the trees in it's region reaches the threshold X.

Unfortunately, as it turns out network connectivity is very poor in Samrat's hometown and he has lost all access to his logger data. Samrat provides you with the yield on each day and the set of loggers he has installed on his plot, and asks you to find the day on which each logger triggered it's signal.

Input

The first line contains four integers N,M,T,Q (1≤N,M≤400,1≤T,Q≤10^5) — the dimensions of the grid, the number of days over which yield was collected and the number of loggers installed.

This is followed by T lines, each containing three integers ri,ci,vi (1≤ri≤N,1≤ci≤M,1≤vi≤10^9) — the cell which produced output on the ith day and the number fruits collected from that cell.

This is followed by Q lines, each containing five integers r1,r2,c1,c2,X (1≤r1≤r2≤N,1≤c1≤c2≤M,1≤X≤10^18) — the sub-grid which the jth logger monitors and it's threshold.

Note that the regions defined by each logger can overlap.

Output

Output Q space separated integers in one line, representing the day on which the each logger generated it's signal or "−1" if the logger did not reach it's threshold.

Example

Input

3 3 5 3

1 1 5

2 3 3

3 2 3

1 1 5

3 3 6

1 2 1 2 8

2 2 2 2 4

2 3 2 3 6

Output

4 -1 3 

Note

In the given testcase, the following events occur:

Day 1 - Cell (1,1) gives yield of 5 fruits, Logger 1 reaches total output of 5.

Day 2 - Cell (2,3) gives yield of 3 fruits, Logger 3 reaches total output of 3.

Day 3 - Cell (3,2) gives yield of 3 fruits, Logger 3 reaches total output of 6 and generates it's signal.

Day 4 - Cell (1,1) gives yield of 5 fruits, Logger 1 reaches total output of 10 and generates it's signal.

Day 5 - Cell (3,3) gives yield of 6 fruits, Logger 3 reaches total output of 12.
