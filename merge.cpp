 #include<iostream>
using namespace std;
void merge(int *a, int low, int high, int mid){
    int k=0,i,j;
    i=low;
    j=mid+1;
    int temp[high-low+1];

    while(i<=mid && j<= high){
        if(a[i]>a[j]){
            temp[k]=a[j];
            k++;
            j++;
        }
        else{
            temp[k]= a[i];
            k++;
            i++;
        }
    }

    //Enter the remaining elements
    while(i<=mid){
        temp[k]=a[i];
        k++;
        i++;
    }

    while(j <= high){
        temp[k]=a[j];
        j++;
        k++;
    }

//Entering all sorted elements from temp to a :

for(i=low;i<=high;i++){
/*    cout<<"Temp\n";
    cout<<temp[i-low]<<endl;
    cout<<"Low is\n";
    cout<<low<<endl;  */
 a[i] = temp[i-low];

}

}

void mergeSort( int *a, int low, int high){
    int  mid;
if( low < high){

 mid = (low+high)/2;
 mergeSort(a,low,mid);
 mergeSort(a,mid+1,high);
 // Merging the two divided array
 merge(a,low,high,mid);

}


}

int main(){
    int a[10], n,i;
    cout<<"Enter the number of elements you wanna enter in the array\n";
    cin>>n;
    cout<<"Enter the elements\n";

    for(i=0;i<n;i++){
        cin>>a[i];

    }

    mergeSort(a,0,n-1);
    cout<<"Array after sorting \n";
    for(i=0;i<n;i++){
        cout<<a[i]<<endl;
    }

    return 0;
}
