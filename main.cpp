#include <iostream>
#include "SortAlgorithm/SortTestHelper.h"
#include "SortAlgorithm/SelectionSort.h"
#include "SortAlgorithm/InsertionSort.h"
#include "SortAlgorithm/MergeSort.h"
#include <cstring>
#include "SortAlgorithm/QuickSort.h"
#include <ctime>
#include "SortAlgorithm/HeapSort.h"
#include "DataStucture/Tree/BinarySearchTree.h"
#include "DataStucture/UnionFind/UnionFind.h"
#include "DataStucture/Graph/SparseGraph.h"
#include "DataStucture/Graph/DenseGraph.h"
#include "DataStucture/Graph/ReadGraph.h"

using namespace std;

int main() {
//    int n = 1000000, rangL = 0, rangR = 100000;
//    int *arr = SortTestHelper::generateRandomArray(n, rangL, rangR);
//    int *arr1 = SortTestHelper::CopyArray(arr, n);
//    int *arr2 = SortTestHelper::CopyArray(arr, n);
//    int *arr3 = SortTestHelper::CopyArray(arr, n);
//    int *arr4 = SortTestHelper::CopyArray(arr, n);
//    int *arr5 = SortTestHelper::CopyArray(arr, n);
//    int *arr6 = SortTestHelper::CopyArray(arr, n);
//
//    SortTestHelper::testSort("SelectionSort", SelectionSort, arr, n);
//    SortTestHelper::testSort("InsertionSort", InsertionSort, arr1, n);
//    SortTestHelper::testSort("InsertionSort_version2", InsertionSort_version2, arr2, n);
//    SortTestHelper::testSort("MergeSort", MergeSort, arr3, n);
//    SortTestHelper::testSort("upMergeSort", upMergeSort, arr4, n);
//    SortTestHelper::testSort("QuickSort", QuickSort, arr5, n);
//    SortTestHelper::testSort("HeapSort", HeapSort_version2, arr6, n);
//    delete[] arr6;
//    delete[] arr5;
//    delete[] arr4;
//    delete[] arr3;
//    delete[] arr;
//    delete[] arr1;
//    delete[] arr2;
/* ------Sort Test------ */
//BST<int, string> tree = BST<int, string>();
//tree.insertNode(89, "one");
//tree.insertNode(23, "two");
//tree.insertNode(37, "three");
//tree.insertNode(24, "four");
//tree.insertNode(58, "five");
//cout << *tree.search(37) << endl;
/* ------Tree Test------ */
//    UF_version2::unionFind uF = UF_version2::unionFind(10);
//    uF.unionElements(1, 2);
//    uF.unionElements(5, 4);
//    uF.unionElements(3, 1);
//    cout << uF.isConnected(4, 5) << endl;
/* ------Graph------ */
//    int N = 20;
//    int M = 100;
//    srand(time(NULL));
//    Matrix::DenseGraph graph1 = Matrix::DenseGraph(N, false);
//    for (int i = 0; i < M; ++i) {
//        int a = rand() % N;
//        int b = rand() % N;
//        graph1.addEdge(a, b);
//    }
//    for (int j = 0; j < N; ++j) {
//        cout << j << " : ";
//        Matrix::DenseGraph::adjIterator adj(graph1, j);
//        for (int w = adj.begin(); !adj.end(); w = adj.next()) {
//            cout << w << " ";
//        }
//        cout << endl;
//    }
//    cout << endl;
    string filename = "D:\\C++\\Data Structure\\DataStucture\\Data\\testG1.txt";
    list::SparseGraph graph1(13, false);
    ReadGraph<list::SparseGraph> readgraph(graph1, filename);
    return 0;
}