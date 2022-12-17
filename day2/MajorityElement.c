int majorityElement(int* a, int n){
    int voter=a[0];
    int votecount=1;
    for(int i=1;i<n;i++){
        if(a[i]==voter){
            ++votecount;
        }
        else{
            --votecount;
        }
        if(votecount==0){
            voter=a[i];
            votecount=1;
        }
    }
    return 0;
}
