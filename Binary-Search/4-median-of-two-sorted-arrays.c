#include<limits.h>
double findMedianSortedArrays(int* nums1, int m, int* nums2, int n) {
if(m>n)
    return findMedianSortedArrays( nums2,  n,  nums1, m) ;
int low = 0 , high = m ;
while(low<= high ){
    int i = (low + high)/2;
    int j = (m + n + 1)/2-i;

    int maxleft1, maxleft2;
    int minright1 , minright2 ;

    if(i == 0){
        maxleft1= INT_MIN;
    }
    else 
    maxleft1 = nums1[i-1];

    if (i==m){
        minright1 = INT_MAX;
    }
    else 
    minright1 = nums1[i];

    if ( j == 0){
        maxleft2 = INT_MIN ;
    }
    else 
    maxleft2 = nums2[j-1];

    if ( j==n){
        minright2 = INT_MAX ;
    }
    else 
    minright2 = nums2[j];

    if( maxleft1 <= minright2 && maxleft2 <= minright1){

    if ((m+n)%2 == 0){
    int leftmax , rightmin;
    if (maxleft1>maxleft2)
    leftmax = maxleft1;
    else 
    leftmax = maxleft2 ;

    if(minright1<minright2)
    rightmin = minright1;
    else
    rightmin = minright2;

    return ((double)leftmax + rightmin) / 2.0;
    }
    else{
        if(maxleft1>maxleft2){
        return maxleft1;
         } else
        return maxleft2;
    }
}else if (maxleft1 > minright2)
    high = i-1 ;
    else
    low = i +1;
}
return 0.0;
}
