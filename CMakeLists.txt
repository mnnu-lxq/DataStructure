cmake_minimum_required(VERSION 3.12)
project(Data_Structure)

set(CMAKE_CXX_STANDARD 14)

add_executable(Data_Structure main.cpp SortAlgorithm/SortTestHelper.h SortAlgorithm/SelectionSort.h SortAlgorithm/InsertionSort.h SortAlgorithm/MergeSort.h SortAlgorithm/QuickSort.h DataStucture/Heap/MaxHeap.h SortAlgorithm/HeapSort.h DataStucture/Heap/IndexHeap.h DataStucture/Tree/BinarySearchTree.h DataStucture/UnionFind/UnionFind.h DataStucture/Graph/DenseGraph.h DataStucture/Graph/SparseGraph.h DataStucture/Graph/ReadGraph.h DataStucture/Graph/Component.h DataStucture/Graph/Path.h DataStucture/Graph/BFS.h DataStucture/MinimumSpanTrees/Edge.h DataStucture/MinimumSpanTrees/DenseGraph.h DataStucture/MinimumSpanTrees/LazyPrim.h DataStucture/Heap/MinHeap.h DataStucture/MinimumSpanTrees/Kruskal.h DataStucture/MinimumSpanTrees/Dijkstra.h DataStucture/Heap/IndexMinHeap.h DataStucture/MinimumSpanTrees/Bellman-Ford.h)