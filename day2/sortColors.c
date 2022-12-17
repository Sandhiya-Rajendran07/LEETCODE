void swap(int *p1,int *p2){
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}
void sortColors(int* a, int n){
int zi=0,ti=n-1,i=0;
while(i<=ti){
    if(a[i]==0) swap(&a[i++],&a[zi++]);
    else if(a[i]==1)i++;
    else swap(&a[i],&a[ti--]);
}

}
