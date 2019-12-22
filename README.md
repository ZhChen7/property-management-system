# 综合专题学期实训

> 大二上学期 数据结构 期末实训
>
> 系统 ：小区物业管理系统

| 题    目 | 小区物业管理系统                             |
| -------- | -------------------------------------------- |
| 学院     | 计算机信息与工程学院                         |
| 班    级 | 1701                                         |
| 学    号 | 201711501024、201711501026、201711501007     |
| 姓    名 | 周琛（组长）、陶逸辉（组员）、李春菊（组员） |
| 开发时间 | 大二上学期 数据结构 期末实训                 |

​             

> 还是花了一些心血的！！！！感觉不错的帮忙点个 star呗！
>
> 嘻嘻嘻！😀

------



#### 成员

组长：周琛

组员：李春菊、陶逸辉



#### 开发工具：**vs2010**

![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131929505.png)



### 打开方式

- vs系列工具可直接打开（例如vs2010）

![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222132449756.png)

![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222132629445.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)



> 也可以自行拆解；运行代码。



### 说明

- head.h :  头函数
- Array.h : 函数定义
- main.c :  主函数入口
- Array_achieve.c : 函数体（函数实现）




## 小区物业管理系统

### 1．题目要求

（1）居民信息管理：建立住户信息库，实现住户档案数据的计算机化管理，使居民的登记与查询简易而快速，对居民的信息查询应有一定的权限检测，按权限进行查询，分级管理，同是应有更新功能。  
（2）物业收费管理：对纳入社区收费管理的收费项目进行电子收费管理（主要是指对煤气表、电表、水表的自动抄表与电子收费），提供应缴费用的查询、定期催缴、收费项目和计费方式的变更维护、定期统计收费情况等功能，同时将其他各子系统相应的收费信息递交收费管理中进行统一结算。
（3）来客访问管理：对出入小区的外来人员进行人员信息、出入信息的登记、汇总、监督管理，并提供查询功能。  
（4）设备报修管理：对日常设备的报修信息进行登记，对设备报修，及其处理情况有查询、考核与统计等管理功能，定期产生考核情况明细，报修信息的录入具有多条途径，相应的费用通过收费管理功能进行统一的结算。

### 2．需求分析

  住户信息、物业收费信息要用文件储存（来客访问管理、设备报修管理原理是一样的）因而提供文件的输入/输出操作；另外，还要提供键盘选择菜单以实现功能选择。
首先充分了解到用户的各个方面需求,包括现有的以及将来可能增加的需求，通过对洛阳周边小区进行详细的实地考察以及利用网络等多种渠道，了解到洛阳本地在小区物业管理方面的一-些现状以及业主、物业管理人员对小区物业管理系统的各种要求，业主可以查看缴费信息，查看公告信息,进而获得自己所需要知道的物业管理信息,因此查看这两种信息不能对其进行数据的修改、编辑;业主可以参与报修，将所需要维修的设备信息保存。



### 3.系统分析

该程序具有菜单栏，信息输入，信息搜索，信息查找，信息修改，信息删除，读取文件，录入文件等功能。
（1）菜单栏模块：使用printf，switch case语句编写菜单。
（2）信息输入模块：主要运用for语句，printf语句，scanf语句。
（3）信息搜索模块：主要运用if和scanf语句，可以通过编号来搜索信息。
（4）信息查找模块：主要运用if和scanf语句，可以通过名称来查找信息。
（5）信息修改模块：主要运用if，scanf，printf语句，可以通过输入编号修改信息。
（6）信息删除模块：主要运用if，for循环语句寻找需要删除的采购信息，然后使用scanf语句删除。
（7）读取文件模块：主要功能是读取外部文件数据，实现输入功能。
（8）录入文件模块：主要功能是将输入的信息存入外部文件。

### 4.主函数流程分析

启动主函数后，界面会首先出现菜单画面，然后根据提示选择所需的功能，通过switch语句调用相应的功能。

![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130501872.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

主要功能函数分析
（1）Xinxi_Menu（）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130655849.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
（2）Tongji_Menu（）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130737493.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
（3）YeZhu_Menu（）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130810613.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
（4）WuYe_Menu（）
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130826339.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
（5）Doreign_personnel()
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130851518.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

（6）Equipment_record()
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222130907922.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

### 5．功能模块图
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131352375.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
### 6．数据结构

   可以把住户信息、物业收费信息、来客访问管理、设备报修管理分别放在4个结构体内。
住户信息结构体：

```c
struct yezhu
{ 
  //业主结构体
  char id[100];
  char name[20];
  int age;
  int family_num;
  int floor_num;//所在楼号
  char room_num[100];//单元房间号
  float lost;
  int area;
  char rz_time[20];
  struct yezhu *next;
};
物业收费结构体：
struct wuye
{ //物业信息结构体
  char ID[100];
  int last_year;
  int last_month;
  float money;
  int to_time;
  struct wuye *link;
};
来客访问管理结构体：
struct Foreign_personnel
{ 
  //来客访问管理结构体
  char id[100];
  char name[20];
  int age;
  char car_License_plate[100];//车牌号
  int Parking_space_num;//停车位号
  char come_time[20];
  char leave_time[20];
  struct Foreign_personnel *next;
};
设备报修管理结构体：
struct Equipment_record
{ 
  //设备报修管理结构体
  char name[20]; 
  char room_num[100];
  int floor_num;
  char time[20];//维修时间
  char Whether_deal_with[100];//是否进行处理
  struct Equipment_record *next;
```



### 7．程序运行结果

图1 业主信息录入
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131548197.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图2 业主信息修改
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019122213161662.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)


图3 业主信息删除
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131650880.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图4 业主信息浏览
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131655598.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图5 业主信息保存

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131654868.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
图6 物业信息录入
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131704961.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图7 外来人员信息录入

 、![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131702944.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
图8 外来人员信息修改
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131712351.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图9 外来人员信息浏览
![在这里插入图片描述](https://img-blog.csdnimg.cn/2019122213171791.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图10 设备保修信息录入
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131720360.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)

图11 设备保修信息修改

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131729622.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
图12 设备保修信息浏览

 ![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131735150.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)
图13 查询缴费信息
![在这里插入图片描述](https://img-blog.csdnimg.cn/20191222131745564.png?x-oss-process=image/watermark,type_ZmFuZ3poZW5naGVpdGk,shadow_10,text_aHR0cHM6Ly9ibG9nLmNzZG4ubmV0L3dlaXhpbl80Mzk0OTc4OA==,size_16,color_FFFFFF,t_70)



## 8．总结

这次课程设计为期约3星期，虽然时间不长，但感受很深。此次实训是分为3个人一组来进行对C语言数据结构的学习与巩固，与之前的实训方式有所不同，对每个人的能力来完成相应的编码，实现分组完成一个完整的功能实现。无论是在学习知识，还是在解决问题的能力上都有了深刻的认识。 首先就是对理论知识的进一步巩固，再一次接触C语言的数据类型、语句、数组、指针结构等等一系列与c语言有关的东西，通过“庖丁解牛”，我开始懂得不管一个程序多么复杂，其实它都是由最基本的函数组成，只要我们弄清结构、一切都会迎刃而解。

 编程是一项考验综合能力的事情，仅仅有课本知识还不够，必须要有自己的知识框架才能通过所学理论解决实际问题。尽管只有八天，但我却碰到许多问题，诸如无法抽象出问题模型，不知道用哪一个或哪几个知识点来解决问题等等，并且一开始设计的程序冗长复杂，效率低，通过与同学的交流和在老师的帮助下，让程序成功地运行，虽然不是自己全部编写的。说实话，我还没达到完全靠自己编写的能力。通过在网上找答案并进行修改调试，还是坚持了下来并取得了成功。此次实习很有意义，它将教会我不断的提高自己的时间能力，挖掘自己解决问题的能力。