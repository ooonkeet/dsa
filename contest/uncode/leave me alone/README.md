The title ”LeaveMeAlone” is a hint to focus on the leaf nodes.

If a node is a leaf, its computed value is just its own index. For any internal node, its value is the bitwise XOR sum of its children’s values.

Essentially, every node’s final answer is the XOR sum of all the leaf node indices located within its subtree.

Just run a bottom-up Depth First Search (DFS) from the root to calculate these values recursively.
