# Assignment2_Q2

c)

      int max(int arr[], int start, int end) {                                                        	
            int largestIndex = start;
            if(start >  end) {
                      return largestIndex;
            }	
            if(arr[largestIndex] < arr[start+1]) {
                    largestIndex = start+1;
            }
            max(arr, largest, end);
            return largestIndex;			
       

      
  d)
        
        void rec_ssort(int arr[], int n) {
               	int i=n-1;
                  if(i > 0 ) {
                        maxIndex = max(arr, i, 0);
                        swap(arr, i, maxIndex);
			      i--;
		      }
        }
