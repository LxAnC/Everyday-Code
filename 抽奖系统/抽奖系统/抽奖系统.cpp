﻿/*
程序名：抽奖系统.cpp
程序功能：消费者输入一个数字，判断是否与系统随机的抽奖数字相同，相同则输出中奖信息否则输出111未中奖的信息
作者：陆宣臣
日期：2023.3.6
*/
#include<iostream>  //预处理命令
#include<ctime>  //预处理因为函数内要用到该库中的函数
using namespace std;  //命名空间
int main() 
{
    int x, user;  //x为系统随机的号码，user是用户输入的号码
    cout << "请输入号码：";  //提示信息
    cin >> user;   //输入号码
    srand(time(0));  //设置种子随系统时钟变化
    x = 1 + rand() % 5;  //随机产生号码
    if (x == user)  //判断是否中奖
        cout << "恭喜您中奖啦，商品现金劵100元！！" << endl;  //输出中奖信息
    else
        cout << "非常遗憾，您没有中奖！欢迎下次再来" << endl;  //输出未中奖信息
    cout << "中奖号码是" << x ;  //输出中奖号码
    return 0; //结束
}
