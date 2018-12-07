Min_RotateArray.hpp
#pragma once 
#include<iostream> 
using namespace std; 
  
int Min_RotateArray(int arry[],int size) 
{ 
  if(arry == NULL || size <= 0) 
  {cout<<"参数输入错误！！！"<<endl;} 
  int min = 0; 
  int index1 = 0; 
  int index2 = size-1; 
  int middle = (index1+index2)/2; 
  if(arry[0] < arry[size-1]) 
    return arry[0]; 
  while(arry[index1] >= arry[index2]) 
  { 
    if(index2-index1 == 1) 
    { 
      min=index2; 
      break; 
        
    } 
    middle = (index1+index2)/2; 
    if(arry[index1] <= arry[middle])//arry[middle]还在第一个递增序列中 
    { 
      index1 = middle; 
    } 
    else            
    { 
      if(arry[index1] >= arry[middle])//arry[middle]在第二个递增序列中 
      {index2 = middle;} 
        
      if(arry[index1] == arry[index2] && arry[index1] == arry[middle]) 
      { 
        for(int i=0;i<size;++i) 
        { 
          if(arry[min]>arry[i]) 
            { 
              min = i; 
              break; 
            } 
        } 
  
      } 
    } 
  } 
  return arry[min]; 
} 

Min_RotateArray.cpp
#include"Min_RotateArray.hpp" 
  
int main() 
{ 
  int arry[] = {3,4,5,1,2}; 
  int size = sizeof(arry)/sizeof(arry[0]); 
  int min = Min_RotateArray(arry,size); 
  cout<<"The min is:"<<min<<endl; 
  system("pause"); 
  return 0; 
} 