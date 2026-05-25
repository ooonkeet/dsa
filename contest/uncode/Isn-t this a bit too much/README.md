The hidden logic simulates an evolving system over K generations. Convert N into an
8-bit binary string. Think of these bits as a row of 8 cells. In each new generation, the
first and last cells always die and become 0. For the middle cells, look at their left and
right neighbors from the previous generation. If the neighbors are in the exact same
state, the new cell becomes a 1. If they differ, it becomes 0.
The real trick is the massive number of generations. Simulating K = 109 steps will
instantly give you a Time Limit Exceeded. However, an 8-cell system only has 256
possible states. This means the evolution is guaranteed to hit a repeating loop very
quickly. Simulatetheprocessstep-by-stepandkeeparecordofeverystateyousee.Once
astaterepeats,youhavefoundthe loop. Usethe loop’s lengthandmoduloarithmetic
toeasilyfast-forwardthroughtheremaininggenerations.Grabthefinal8-cellstateand
convert itbacktoadecimalnumber
