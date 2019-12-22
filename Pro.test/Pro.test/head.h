#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <conio.h> //函数声明
struct yezhu
{ 
  //业主结构体
  char id[100];
  char name[20];
  int age;
  int family_num;
  int floor_num;
  char room_num[100];
  float lost;
  int area;
  char rz_time[20];
  struct yezhu *next;
};
struct wuye
{ //物业信息结构体
  char ID[100];
  int last_year;
  int last_month;
  float money;
  int to_time;
  struct wuye *link;
};
struct Foreign_personnel
{ 
  //外来人员结构体
  char id[100];
  char name[20];
  int age;
  char car_License_plate[100];//车牌号
  int Parking_space_num;//停车位号
  char come_time[20];
  char leave_time[20];
  struct Foreign_personnel *next;
};
struct Equipment_record
{ 
  //设备报修结构体
  char name[20]; 
  char room_num[100];
  int floor_num;
  char time[20];//维修时间
  char Whether_deal_with[100];//是否进行处理
  struct Equipment_record *next;
};
struct yezhu *phead; //业主头结点
struct wuye *pHead;  //物业头结点
struct Foreign_personnel *phead_Foreign;  //外来人员头结点
struct Equipment_record *phead_Equipment_record;  //设备维修管理头结点