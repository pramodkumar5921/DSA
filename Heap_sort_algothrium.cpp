Given array (max heap) using bulid Heap
swap Last element ->max element
Reduced size of Heap
Can Heapify(0);
// Build the max Heapify 
void buildheap(int arr[],int n){
  for(i=(n-2)/2;i>=0;i--){
    max heapify(arr,n,i);
  }
}
// heap sort is similar to selection sort algorithm
Time Complexity : selection sort o(n2);
                :Heap sort o(log n);
// algothrium of Heap sort
void maxheapify(int arr[],int n,int i){
  int largest=i;
  int left = 2*i+1;
  int right = 2*i+2;
  if(left<n and arr[left]>arr[largest]){
    largest=left;
  }
  if(right<n and arr[right]>arr[largest])
    largest=right;
  if(largest!=i)
    swap(arr[largest],arr[i]);
  max heapify(arr,n,largest);
}
}
