#include <iostream>
#include <fstream>
#include <cstdlib>
#include<windows.h>
#include <conio.h>
#include <stdlib.h>
using namespace std;
int main()
{
  //int cj[5][4] ={ {89, 78, 56},{88,99,100},{72,80,61}, {60,70,75}}; 

int cj[5][4]={0};    
int  i, j;
int choose=-1;
fstream  infile;
//成绩录入

infile.open("cj1.txt"); 
 for(i=0; i<4; i++)      // i 控制行数 
    {    
	for(j=0; j<3; j++) // j 控制列数 
        infile >> cj[i][j];   //  文件数据读入到内存a[i][j] 
     }  
      

cout<<"欢迎使用学生成绩管理系统1.0\n";
	cout << "    1. 输出学生的成绩表\n";
	cout << "    2. 求每人的平均分\n";
	cout << "    3. 求每门课的平均分\n";
	
	
	cout << "    7. 导出到文件\n";
	cout << "    0. 退出\n\n";
	cout << "请输入你的选择(0-7)：\n" ;
cin >> choose;
int m=0;
while (choose != 0) 
{
// cin >> choose;
// if(choose==0) break;
  switch (choose) 
  {
	case 1:for(int i=0; i<5; i++)      
            {    for(int j=0; j<4; j++) 
                   cout << cj[i][j]<<" ";  
		         cout<<endl;   
             }	;break;
    case 2:
//	       cout<<"功能2：求每人的平均分\n";
           for(int i=0;i<4;i++)
           {  m=0;
           	for( j=0;j<3;j++)
           	{
           		m+=cj[i][j];
			}
			   cj[i][j]=m/3;
		   }
		   
		   for(int i=0; i<5; i++)      
            {    for(int j=0; j<4; j++) 
                   cout << cj[i][j]<<" ";  
		         cout<<endl;   
             }	; 
			 break;
    
    case 3:
//	cout<<"功能3：求每门课的平均分\n";
         for(int i=0;i<3;i++)   //lie
         {
         	m=0;
         	for(j=0;j<4;j++)    //hang
         	{
         	    m+=cj[j][i];
				 
         		
			 
			 }
			cj[j][i]=m/4;
		 }
		 
		 for(int i=0; i<5; i++)      
            {    for(int j=0; j<4; j++) 
                   cout << cj[i][j]<<" ";  
		         cout<<endl;   
             }	; 

	break;
    case 7:cout<<"功能7: 导出到文件\n";
    for(int i=0;i<4;i++)
           {  m=0;
           	for( j=0;j<3;j++)
           	{
           		m+=cj[i][j];
			}
			   cj[i][j]=m/3;
		   }
    for(int i=0;i<3;i++)   //lie
         {
         	m=0;
         	for(j=0;j<4;j++)    //hang
         	{
                m += cj[j][i];
			 }
			cj[j][i]=m/4;
		 }
    ofstream outfile("cj2.txt");
    if (!outfile.is_open()) {
                cout << "cj2.txt 创建失败(可能正被 Excel 打开）" << endl;
                break;
            }
    outfile<<"学生\t"<<"课程1\t"<<"课程2\t"<<"课程3\t"<<"个人平均分\t"<<endl;
    for (int i=0;i<5;i++)
    {
        if (i < 4)
        {
            outfile << "学生" << i + 1 << "\t";
        }
        else if (i == 4)
        {
            outfile << "平均成绩" << "\t";
        }
    	for(int j=0;j<4;j++)
    	{
    		outfile<<cj[i][j]<<"\t";
		}
		outfile<<endl;
	}
	outfile.close();                    // ★ 关闭，确保数据落盘

            cout << "已导出到 cj2.txt" << endl;
	break;
  }
  system("pause");//pause 
 //getchar(); 使用getchar()也可以达到暂停效果 

  system("CLS");//cls 
  //menu
  cout<<"欢迎使用学生成绩管理系统1.0\n";
	cout << "    1. 输出学生的成绩表\n";
	cout << "    2. 求每人的平均分\n";
	cout << "    3. 求每门课的平均分\n";
	
	
	cout << "    7. 导出到文件\n";
	cout << "    0. 退出\n\n";
	cout << "请输入你的选择(0-7)：\n" ;
cin >> choose; 
  
}
 infile.close();
return 0;
}

