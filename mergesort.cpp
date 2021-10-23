#include<iostream>

 

using namespace std;

 

void Mergesort(int A[], int p, int r);
void Merge(int A[], int p, int q, int r);
void printArray(int A[], int n);

 

int main()
{
  int A[20], n, i;
  
  cout << "Program for sorting an array using Merge Sort \n";
  cout << "Author : Dr. Paras Jain \n";
  cout << "Experiment Date : 15-03-2021 \n";                                                      //self details
  cout << "Submission Date : \n";

 

  cout << "Enter the array size : ";
  cin>>n;
  cout << "Enter the array elements : \n";
    for (i=0;i<=n-1;i++)
    {
    cin >> A[i];
    }
    cout << "The array before sorting is : [ ";
    printArray(A, n);
    cout <<"]\n";

 

    Mergesort(A,0,n-1);
     
    cout << "The array after sorting is : [ ";
    printArray(A, n);
    cout <<"]";
    return 0;

 

}

 

void Mergesort(int A[], int p, int r)
{
    int q;
    if(p<r)
    {
    q = (p+q)/2;
    Mergesort(A, p, q);
    Mergesort(A, q+1, r);
    Merge(A, p, q, r);
    }    
}

 

void Merge(int A[], int p, int q, int r)
{
   int i, j, k;
   int n1 = q-p+1;
   int n2 = r-q;
   int L[n1+1], R[n2+1];
   for(i=0; i<=n1-1; i++)
   {
        L[i] = A[p+i];
   }
   for(j=0; j<=n2-1; j++)
   {
        R[j] = A[q+j+1];
   }
   L[n1]=9999;
   R[n2]=9999;
   i=0;
   j=0;
   for(k=p; k<=r; k++)
   {
         if(L[i]<=R[j])
         {
             A[k]=L[i];
             i = i+1;
      }
      else
      {
          A[k]=R[j];
          j = j+1;
      }
   }    
}

 

void printArray(int A[], int n) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        cout << A[i] << " "; 
     
}