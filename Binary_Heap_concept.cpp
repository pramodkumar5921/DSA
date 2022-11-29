class minheap{
  int arr[];
  int size;
  int capacity;
  minheap(int c){
    arr=new int[c];
    size=0;
    capacity=c;
  }
  int left(int i){
    return (2*i+1);
  }
  int right(int i){
    return (2*i+2);
  }
  int parent(int i){
    return (i-1)/2;
  }
  // important points 
  1) when ever we do some changes in heap makesure 
  2) it should maintain property of heap (min/max);
  3) it should be complete binary tree;
  4) from left to right 
  5) Always remember we are showing it as a tree but we are mainly modifying the array;
