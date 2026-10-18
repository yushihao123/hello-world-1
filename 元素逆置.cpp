#include <iostream>
using namespace std;
int main(){
	//1.创建一个数组 
	int arr[5]={1,3,2,5,4};
	cout<<"数组逆置前：" <<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	 } 
	
	//末尾元素下标 int end=sizeof(arr) /sizeof(arr[0])-1;因为是从0开始算的
	//2.实现逆置
	//2.1记录起始下标位置
	//2.2记录结束下标位置
	//2.3起始位置下标与结束位置下标元素互换
	//2.4起始位置++，结束位置--
	//2.5循环位置执行2.1操作，直到起始位置>=结束 
	int start=0;//起始下标
	int end=sizeof(arr)/sizeof(arr[0])-1;//结束下标 
	while(start<end)
	{
			int temp=arr[start];
	arr[start]=arr[end]; 
	arr[end]=temp;
	
	//下标更新
	start++;
	end--; 
	}
	cout<<"数组元素逆置后："<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<endl;
	 } 

	return 0;
	
	
	//start++;end--;
	//如果start<end执行互换 
	
	
	
	
	
}
