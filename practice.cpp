#include<iostream>
using namespace std;
//finding minimum and maximum value in array
/*int getMax(int arr[],int n){
    int max =INT_MIN;
    for(int i=0;i<n;i++){
    if(arr[i]>max){
        max = arr[i];
    }
    }
    return max;
}
int getMin(int arr[],int n){
    int min = INT_MAX;
    for(int i =0; i<n; i++ ){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int arr[5]={4,7,9,2,6};
    cout<<"the maximum value is " << getMax(arr,5)<<endl;
    cout<<"the minimum value is " << getMin(arr,5)<<endl;
 return 0;
}*/
// linear search
/*bool search(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}
int main(){
    int arr[5]={2,4,6,8,20};
    int key;
    cin>>key;
    bool found=search(arr,5,key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is absent"<<endl;
    }
}*/
//reverse a array
/*void reverseArray(int arr[],int n){
    int start=0;
    int end =n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
}
void printArray(int arr[] , int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr[6]={1,2,3,4,5,6};
    reverseArray(arr,6);
    printArray(arr,6);
}*/

//swap alternate
/*  
void swap(int arr[],int n){
    for(int i =0;i<n ; i+=2){
        if(i+1<n){
        swap(arr[i],arr[i+1]);
}
    }
}
void printArray(int arr[] , int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;}
int main(){
    int arr[5]={3,4,5,6,7};
    swap(arr,5);
    printArray(arr,5);
}*/

//unique element
/*int uniqueElement(int arr[],int n){
    int ans = 0;
    for(int i=0; i<n ;i++){
        ans = ans^arr[i];
    }
    return ans;
}

    
    int main(){
        int arr[7]={2,2,3,3,4,4,5};
       cout<<"the unique number is "<< uniqueElement(arr,7)<<endl;
        
    }
    */
  /**/ void bubbleSort(int arr[],int n){
    for(int i=1;i<n;i++){
        bool swapped = false;
        for(int j =0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped= true;
            }
        }
        if(swapped==false){
            //already sorted
            break;
        }
    }
   }
   void printArray(int arr[] , int n){
    for(int i=0;i<=n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;}
    int main(){
        int arr[5]={7,4,9,3,2};
        bubbleSort(arr,5);
        printArray(arr,5);
        return 0;
    }