void min heapify(int i){
  int li=left(i),ri=right(i);
  int smallest=i;
  if(li<size and arr[li]<arr[smallest]){
    smallest=li;
  }
    if(ri<size and arr[ri]<arr[smallest]){
      smallest=ri;
    }
  if(smallest!=i){
    swap(arr[i],arr[smallest])
    }
  minheapify(smallest);
  ]
    
