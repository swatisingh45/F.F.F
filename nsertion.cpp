#include<iostream>
using namespace std;
void insertion(int a[10], int n);

int main(){

int a[10], n, i;

cout<<"Enter the number of elements you wanna enter in the array \n";
cin>>n;
cout<<"Enter the elements \n";
for(i=0;i<n;i++){
    cin>>a[i];
}

insertion(a,n);
cout<<"Elements after sorting are as follows\n";
for(i=0;i<n;i++){
    cout<<a[i];
    cout<<endl;
}




}

void insertion(int a[10],int n){

int i, key,j,pass=1;

for(i=1;i<n;i++){
 key = a[i];
 j = i-1;
 while(j>=0 && a[j]>key){
     a[j+1]=a[j];
      j = j-1;

 }
 a[j+1]=key;
 cout<<"After"<<pass<<" "<<"pass \n"<<endl;
 for(int k =0; k<n;k++){
     cout<<a[k]<<endl;
     pass++;
 }

}
}
