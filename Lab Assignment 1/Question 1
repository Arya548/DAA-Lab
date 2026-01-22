#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int x){
	int low=0;
	int high=arr.size()-1;
	while(low<=high){
		int mid=low+(high-low)/2;
	    if(arr[mid]==x){
		    return mid;
	    }
	    else if(arr[mid]<x){
		    low=mid+1;
	    }
	    else if(arr[mid]>x){
		    high=mid-1;
	    }
	}  
	return -1;
}
int main(){
	vector<int>arr={2,5,8,12,16,23,38,56,72,91};
	int x=23;
	int result=binarysearch(arr,x);
	cout<<"index of target is="<<result;
	return 0;
}

/* 
Output:
index of target is=5
 */
