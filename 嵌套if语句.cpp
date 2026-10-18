#include<iostream> 
using namespace std;

int main() {
	
	//1.提示输入一个高考的分数
	int score=0 ;
	cout<<"请输入高考考试分数："<<endl;
	cin >> score; 
	
	//2.显示分数
	cout<<"您输入的分数为："<<score<<endl; 
	
	//3.做出一个判断
	//如果大于600 一本
	   //大于700北大
	   //大于650清华
	   //大于600人大 
	//如果大于500 二本
	//如果大于400 三本 
	if(score>600)
	{
		cout<<"恭喜您考上一本大学"<<endl;
		if(score>700)
		{
			cout<<"您能考上北京大学"<<endl;
		 } 
		 	else if(score>650)
		 	{
		 		cout<<"您能考上清华大学"<<endl; 
			 }
			 else
			 {
			 	cout<<"你能考上人民大学"<<endl; 
			 }
			 
		 	
		
	}
	else if(score>500)
	{
		cout<<"恭喜您考上二本大学"<<endl; 
	}
	else if(score>400)
	{
		cout<<"恭喜您考上三本大学"<<endl; 
	}
	else
	{
		cout<<"恭喜您去烤地瓜"<< endl; 
	}
	system("pause");
	
	return 0;
}
