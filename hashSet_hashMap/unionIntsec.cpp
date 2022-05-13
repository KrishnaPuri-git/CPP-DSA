//watch anuj bhaiya and hello world vid
//Union 

/*

int doUnion(int a[], int n, int b[], int m)  {

    unordered_set<int>uset;
    for(int i=0; i<n; i++){
            
        uset.insert(a[i]);
    }
        
    for(int i=0; i<m; i++){
            
        uset.insert(b[i]);
    }
        
    return uset.size();
}

*/

//int.sec

/*
int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        unordered_set<int>uset;
    
        for(int i=0; i<n; i++){
        
            uset.insert(a[i]);
        }
    
        int count=0;
    
        for(int i=0; i<m; i++){
        
            int key=b[i];
            if(uset.find(key) != uset.end()){
            
                count++;
                uset.erase(key);
            }
        }
    return count;
*/