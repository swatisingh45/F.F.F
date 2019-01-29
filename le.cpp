#include<iostream>
using namespace std;
void bubble(int a[10], int n );
int main(){
 int a[10], n,i;

 cout<<"Enter the number of elements you wanna enter in the array\n";
 cin>>n;

cout<<"Enter the elements in the array \n";
 for(i=0;i<n;i++){
     cin>>a[i];
 }

 bubble(a,n);
cout<<"Array after bubble sorting\n";
for(i=0;i<n;i++){
    cout<<a[i];
    cout<<endl;
}


}

void bubble( int a[10], int n){
int i,j,temp,pass=1;
bool swapped;

for(i=0;i<n-1;i++){
    for(j=0;j<n-1-i;j++){
        swapped = false;
        if( a[j] > a[j+1]){

            swapped = true;
            temp = a[j];
            a[j] = a[j+1];
            a[j+1] = temp;

            cout<<"Array after pass"<<" "<<pass<<endl;
            for(int k =0;k<n;k++)
            cout<<a[k]<<endl;
            pass++;

        }



    }

    if ( swapped == false){
        break;
    }
}



}
