#include<stdio.h>
void swap(int *arr , int pos1 , int pos2)
{
  int temp;
  temp = arr[pos1];
  arr[pos1] = arr[pos2];
  arr[pos2] = temp;
}
void heapify(int *arr , int N , int parent)
{
  int left , right;
  left = parent * 2 + 1;
  right = left + 1;


  if(left >= N) return;
  if(right == N && arr[left] > arr[parent])
  {
    swap(arr ,  left , parent);
    return;
  }
  if(arr[left] > arr[parent] || arr[right] > arr[parent])
  {
    if(arr[left] > arr[right])
    {
      swap(arr , left , parent);
      heapify(arr , N , left);
    }
    else
    {
      swap(arr , right , parent);
      heapify(arr , N ,  right);
    }
  }


}
int main()
{

  int N , ind , itr;
  scanf("%d" , &N);
  int arr[N];
  for(ind = 0 ; ind < N ; ind++)
      scanf("%d" , &arr[ind]);


  for(itr = N/2 -1 ; itr >=0 ; itr--)
     heapify(arr , N , itr );



  for(ind = 0 ; ind < N ; ind++)
     printf("%d " , arr[ind]);


  return 0 ;
}
