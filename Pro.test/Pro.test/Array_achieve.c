#include"head.h"
#include"Array.h"

//主菜单
int Main_Menu()     
{

  int n;
  system("cls");
 printf("**************************欢迎进入小区物业管理系统***************************\n"); 
 printf("-----------------------------------------------------------------------------\n");  
 printf("⒈物业信息系统 \n");  
 printf("⒉统计查询系统 \n"); 
 printf("⒊退出程序\n"); 
 printf("请您输入选项:"); 
 scanf("%d",&n); 
 return n;
}
//物业信息菜单显示
void XinXi_Menu()
{
  int choose;
  system("cls");
  do
  {
  printf("*****************************物业信息系统************************************\n");  
  printf("-----------------------------------------------------------------------------\n");  
  printf("1.居民信息管理\n");    
  printf("2.物业收费管理\n");  
  printf("3.来客访问管理\n");  
  printf("4.设备报修管理\n");  
  printf("5.返回主菜单\n");  
  printf("请您输入选项:"); 
 scanf("%d",&choose);  
  switch(choose)  
   {
    case 1:
      YeZhu_Menu();
      break;
    case 2:
      WuYe_Menu();
	   break;
	case 3:
	  Foreign_personnel();
      break;
	case 4:
	  Equipment_record();
      break;
    case 5:
      return;
    default:
      printf("输入错误请重新输入\n"); 
   }
  } while (1);
}
//统计查询菜单显示
void TongJi_Menua() 
{
  int choose;
   system("cls");
  do
  {
  printf("******************************统计查询系统***********************************\n"); 
  printf("-----------------------------------------------------------------------------\n");  
  printf("⒈查询缴费信息\n"); 
  printf("⒉欠费名单一览表\n");    
  printf("⒊返回主菜单 \n"); 
  printf("请您输入选项:"); 
  scanf("%d",&choose); 
  switch(choose)  
   {
    case 1:
      myfind();
      break;
    case 2:
      Arrears_List();
      break;
    case 3:
      return;
    default:
      printf("输入错误请重新输入!\n\n"); 
   }
  } while (1);
}
//业主菜单函数
void YeZhu_Menu() 
{
  int choose;
    system("cls");
  do
  {
  printf("********************************业主信息编辑系统******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("⒈业主信息录入 \n");  
  printf("⒉业主信息修改 \n"); 
  printf("⒊业主信息删除\n"); 
  printf("⒋业主信息浏览 \n"); 
  printf("⒌返回上级菜单\n"); 
  printf("请输入选项:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Owner();
      break;
    case 2:
      MyReplace1_Owner();
      break;
    case 3:
      MyDelete1_Owner();
      break;
    case 4:
      Display1();
      break;
    case 5:
      return;
    default:
      printf("输入错误请重新输入\n"); 
   }
  } while (1);
}
//录入业主信息
void MyAdd1_Owner() 
{
  struct yezhu *p;
  p = (struct yezhu *)malloc(sizeof(struct yezhu));
  printf("请录入业主信息\n");
  printf("ID:");
  scanf("%s", p->id);
  printf("姓名:");
  scanf("%s", p->name);
  printf("年龄");
  scanf("%d", &p->age);
  printf("家庭成员数");
  scanf("%d", &p->family_num);
  printf("所在楼号");
  scanf("%d", &p -> floor_num);
  printf("单元房间号:");
  scanf("%s", p->room_num);
  printf("住宅面积:");
  scanf("%d", &p->area);
  printf("入住时间");
  scanf("%s", p->rz_time);
  myAdd3(p);
  save1(p);
  printf("录入成功!\n");
}
//添加业主信息结点
struct yezhu *myAdd3(struct yezhu *p) 
{
  struct yezhu *t;
  if (phead == NULL)
  {
    phead = p;
    p->next = NULL;
  }
  else
  {
    t = phead;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead;

  }
}
//修改业主信息
void MyReplace1_Owner() 
{
  struct yezhu *k;
  char id[100];
  printf("请输入要修改的业主ID:");
  scanf("%s", id);
  k = find1(id);
  if (k != NULL)
  {
    printf("请输入要修改的业主信息\n");
    printf("ID:");
    scanf("%s", k->id);
    printf("姓名:");
    scanf("%s", k->name);
    printf("年龄");
    scanf("%d", &k->age);
    printf("家庭成员数");
    scanf("%d", &k->family_num);
    printf("所在楼号");
    scanf("%d", &k->floor_num);
    printf("单元房间号:");
    scanf("%s", k->room_num);
    printf("住宅面积:");
    scanf("%d", &k->area);
    printf("入住时间");
    scanf("%s", k->rz_time);
    save1(k);
    printf("修改成功!\n");
  }
  else
  {
    printf("无此业主ID!\n");
    return;
  }
}
//通过ID查找业主信息
struct yezhu *find1(char *id) 
{
  struct yezhu *p;
  p = phead;
  while (p != NULL)
  {
    if (strcmp(p->id, id) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}
struct Foreign_personnel *Foreign_personnel_find(char *id) 
{
  struct Foreign_personnel *p;
  p = phead_Foreign;
  while (p != NULL)
  {
    if (strcmp(p->id, id) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}

struct Equipment_record *Equipment_record_find(char *name) 
{
  struct Equipment_record *p;
  p = phead_Equipment_record;
  while (p != NULL)
  {
    if (strcmp(p->name, name) == 0)

      return p;
    p = p->next;
  }
  return NULL;
}

void Display1()
{
  struct yezhu *p;
  p = phead;
  while (p != NULL)
  {
    printf("\n\n");
    printf("ID:%s\n", p->id);
    printf("姓名:%s\n", p -> name);
    printf("年龄%d\n", p->age);
    printf("家庭成员数%d\n", p->family_num);
    printf("所在楼号%d\n", p->floor_num);
    printf("单元房间号:%s\n", p->room_num);
    printf("住宅面积:%d\n", p->area);
    printf("入住时间%s\n", p->rz_time);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Owner()
{
  struct yezhu *p, *pp;
  struct wuye *k, *kk;
  char id[100];
  pp = phead;
  kk = pHead;
  printf("请输入要删除人的ID:");
  scanf("%s", id);
  p = find1(id);
  k = find2(id);
  if (p != NULL)
  {
    if (p == phead)
    {
      phead = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("无此业主ID!\n");
    return;
  }
  printf("删除业主信息成功!\n");
  save1(p);
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
  else
  {
    printf("无此业主ID!\n");
    return;
  }
  printf("删除物业信息成功!\n");
  save2(k);
}

void save1(struct yezhu *p)
{
  FILE *fp;

  fp = fopen("yezhu.dat", "wb");
  p = phead;
  while (p != NULL)
  {
    fwrite(p, sizeof(struct yezhu), 1, fp);
    p = p->next;
  }
  fclose(fp);
}

void Read1()
{
  FILE *fp;
  struct yezhu *p;
  fp = fopen("yezhu.dat", "rb");
  while (1)
  {
    p = (struct yezhu *)malloc(sizeof(struct yezhu));
    if (feof(fp))
    {

      break;
    }
    if (fread(p, sizeof(struct yezhu), 1, fp))
    {
      myAdd3(p);
    }
  }
  fclose(fp);
}

void WuYe_Menu()
{
  int choose = 0;
    system("cls");
  do
  {
	printf("*********************************物业费用管理系统************************\n"); 
	printf("-------------------------------------------------------------------------\n"); 
	printf("⒈物业信息录入 \n");     
	printf("⒉物业信息修改 \n"); 
	printf("⒊物业信息删除 \n"); 
	printf("⒋物业信息浏览 \n");
	printf("⒌返回上级菜单\n");
	printf("请输入选项");  
	scanf("%d",&choose); 
 switch(choose)  
  {
    case 1:
      MyAdd2_Property();
      break;
    case 2:
      MyReplace2_Property();
      break;
    case 3:
      MyDelete2_Property();
      break;
    case 4:
      Display2();
      break;
    case 5:
      return;
    default:
      printf("输入错误请重新输入\n"); 
  }
  } while (1);
}

void MyAdd2_Property() //录入物业信息//
{
  struct wuye *p;
  struct yezhu *t;
  int x;
  p = (struct wuye *)malloc(sizeof(struct wuye));
  printf("请录入物业信息\n");
  printf("ID:");
  scanf("%s", p->ID);
  t = find1(p->ID);
  if (t != NULL)
  {
    printf("上一次缴费年份");
    scanf("%d", &p->last_year);
    printf("月份");
    scanf("%d", &p->last_month);
    printf("缴费金额");

    scanf("%f", &p->money);
    x = p->money / (0.4 * t->area);

    p->to_time = (int)x;
    myAdd4(p);
    save2(p);
    printf("录入成功!\n");
  }

  else
  {
    printf("无此业主ID!\n");
    return;
  }
}

struct wuye *myAdd4(struct wuye *p) //添加物业信息结点//
{

  struct wuye *t;
  if (pHead == NULL)
  {
    pHead = p;
    p->link = NULL;
  }
  else
  {
    t = pHead;
    while (t->link != NULL)
      t = t->link;
    t->link = p;
    p->link = NULL;
  }
  return pHead;
}

struct wuye *find2(char *id) //通过姓名查找缴费信息
{
  struct wuye *p;
  p = pHead;
  while (p != NULL)
  {
    if (strcmp(p->ID, id) == 0)
      return p;
    p = p->link;
  }
  return NULL;
}

void myfind()
{
  struct wuye *p;
  char a[100];
 printf("请输入要查找的业主id"); 
 scanf("%s",a); 
 p=find2(a); 
 if(p!=NULL) 
  {
    printf("业主已经存缴!\n"); 
  }
 
 else  
  {
    printf("业主尚没存缴信息!\n");
    return; 
  } 
 
 Display(p);
}

void MyReplace2_Property() 
{
  char id[20];
  int x;
  struct wuye *k;
  struct yezhu *t;
  printf("请输入要修改的业主ID:");
  scanf("%s", id);
  if (k != NULL)
  {
    printf("您要修改的信息为\n");
    printf("请输入新的信息\n");
    printf("ID:");
    scanf("%s", k->ID);
    printf("上一次缴费年份");
    scanf("%d", &k->last_year);
    printf("月份");
    scanf("%d", &k->last_month);
    printf("缴费金额");
    scanf("%f", &k->money);
    t = find1(k->ID);
    x = (int)k->money / (0.4 * t->area);
    k->to_time = (int)x;

    myAdd4(k);
    save2(k);
   printf("修改成功!\n"); 
  }
  else
  {
    printf("无此业主ID!\n");
    return;
  }
}

void MyDelete2_Property() 
{
  struct wuye *p, *pp;
  char id[100];
  pp = pHead;
  printf("请输入要删除人的ID:");
  scanf("%s", id);
  p = find2(id);
  if (p != NULL)
  {
    if (p == pHead)
    {
      pHead = p->link;
      free(p);
    }
    else
    {
      while (pp->link != p)
        pp = pp->link;
      pp->link = p->link;
      free(p);
    }
  }
  else
  {
    printf("无此业主ID!\n");
    return;
  }
  save2(p);
  printf("删除成功!\n");
}

void Display2()    
{
  struct wuye *p;
  p = pHead;
  while (p != NULL)
  {
    printf("ID:%s\n", p->ID);
   printf("最后一次缴费日期%d年%d月\n",p->last_year,p->last_month);  
   printf("缴费金额:%f元\n",p->money); 
   printf("费用有效期%d个月\n",p->to_time); 
   printf("\n\n\n");  
   p=p->link;
  }
}

void Display(struct wuye *p)
{
  printf("业主ID:%s\n", p->ID);
 printf("最后一次缴费日期%d年%d月\n",p->last_year,p->last_month); 
 printf("最后一次缴费金额%f\n",p->money); 
 printf("费用有效期%d个月\n",p->to_time);
}

void Read2()
{
  FILE *fp;
  struct wuye *p;
  fp = fopen("wuye.dat", "rb");
  while (1)
  {
    p = (struct wuye *)malloc(sizeof(struct wuye));
    if (feof(fp))
      break;
    if (fread(p, sizeof(struct wuye), 1, fp))
      myAdd4(p);
  }
  fclose(fp);
}

void save2(struct wuye *p)
{
  FILE *fp;
  fp = fopen("wuye.dat", "wb");
  p = pHead;
  while (p != NULL)
  {

    fwrite(p, sizeof(struct wuye), 1, fp);
    p = p->link;
  }
  fclose(fp);
}

void Arrears_List()
{
  int year, month;
  struct wuye *k;
  struct yezhu *l;
  k = pHead;
  l = phead;
  printf("请输入当前年份");
  scanf("%d", &year);
  printf("请输入当前月份");
  scanf("%d", &month);
  while (k != NULL)
  {
    if (year > k->last_year)
    {
      l = find1(k->ID);

      l->lost = (float)(month + 12 - k->to_time - k->last_month) * (0.4 * l->area);
      if (l->lost > 0)
      {
        printf("业主ID*:%s\n", l->id);
        printf("业主姓名*:%s\n", l->name);
        printf("最后一次缴费日期%d年%d月\n",k->last_year,k->last_month);
        printf("欠费金额*%f\n",l->lost); 
        printf("\n\n");
      }
    }
    if (year == k->last_year)
    {
      l = find1(k->ID);

      l->lost = (float)(month - k->to_time - k->last_month) * (0.4 * l->area);
      if (l->lost > 0)
      {
        printf("业主ID:%s\n", l->id);

        printf("业主姓名%s\n", l->name);
        printf("最后一次缴费日期%d年%d月\n", k->last_year, k->last_month);
        printf("欠费金额%f\n", l->lost);
        printf("\n\n");
      }
    }

    k = k->link;
  }

}

void Foreign_personnel() 
{
  int choose;
   system("cls");
  do
  {
  printf("********************************外来人员登记信息******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("⒈外来人员录入 \n");  
  printf("⒉外来人员修改 \n"); 
  printf("⒊外来人员删除\n"); 
  printf("⒋外来人员浏览 \n"); 
  printf("⒌返回上级菜单\n"); 
  printf("请输入选项:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Foreign_personnel();
      break;
    case 2:
      MyReplace1_Foreign_personnel();
      break;
     case 3:
      MyDelete1_Foreign_personnel();
      break;
    case 4:
      Display_Foreign_personnel();
      break;
    case 5:
      return;
    default:
      printf("输入错误请重新输入\n"); 
   }
  } while (1);
}
//录入外来人员信息
void MyAdd1_Foreign_personnel() 
{
  struct Foreign_personnel *p;
  p = (struct Foreign_personnel*)malloc(sizeof(struct Foreign_personnel));
  printf("请录外来人员信息\n");
  printf("ID:");
  scanf("%s", p->id);
  printf("姓名:");
  scanf("%s", p->name);
  printf("年龄");
  scanf("%d", &p->age);
  printf("输入车牌号：");
  scanf("%s", p->car_License_plate);
  printf("输入停车位号：");
  scanf("%d", &p-> Parking_space_num);
  printf("输入进入时间：");
  scanf("%s", p->come_time);
  printf("输入离开时间：");
  scanf("%s", p->leave_time);

  myAdd_Foreign_personnel(p);
  //save1_Foreign_personnel(p);
  printf("录入成功!\n");
}

//添加外来人员信息结点
struct Foreign_personnel *myAdd_Foreign_personnel(struct Foreign_personnel *p) 
{
  struct Foreign_personnel *t;
  if (phead_Foreign == NULL)
  {
    phead_Foreign = p;
    p->next = NULL;
  }
  else
  {
    t = phead_Foreign;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead_Foreign;

  }
}

//修改外来人员信息
void MyReplace1_Foreign_personnel() 
{
  struct  Foreign_personnel *k;
  char id[100];
  printf("请输入要修改的业主ID:");
  scanf("%s", id);
  k = Foreign_personnel_find(id);
  if (k != NULL)
  {
    printf("请输入要修改的外来人员信息\n");
    printf("ID:");
    scanf("%s", k->id);
    printf("姓名:");
	scanf("%s", k->name);
	printf("年龄");
	scanf("%d", &k->age);
	printf("输入车牌号：");
	scanf("%s", k->car_License_plate);
	printf("输入停车位号：");
	scanf("%d", &k-> Parking_space_num);
	printf("输入进入时间：");
	scanf("%s", k->come_time);
	printf("输入离开时间：");
	scanf("%s", k->leave_time);
    printf("修改成功!\n");
  }
  else
  {
    printf("无此业主ID!\n");
    return;
  }
}

void Display_Foreign_personnel()
{
  struct Foreign_personnel *p;
  p = phead_Foreign;
  while (p != NULL)
  {
    printf("\n\n");
    printf("ID:%s\t\n", p->id);
    printf("姓名:%s\t\n", p -> name);
    printf("年龄:%d\t\n", p->age);
	printf("车牌号：%s\t\n",p->car_License_plate);
	printf("停车位号：%d号车位\t\n",p->Parking_space_num);
	printf("该车进入时间:%s\t\n",p->come_time);
	printf("该车离开时间:%s\t\n",p->leave_time);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Foreign_personnel()
{
  struct Foreign_personnel *p, *pp;
  struct wuye *k, *kk;
  char id[100];
  pp = phead_Foreign;
  kk = pHead;
  printf("请输入要删除人的ID:");
  scanf("%s", id);
  p = Foreign_personnel_find(id);
  k = find2(id);
  if (p != NULL)
  {
    if (p == phead_Foreign)
    {
      phead_Foreign = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("无此外来人员ID!\n");
    return;
  }
  printf("删除此外来人员信息成功!\n");
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
}


void Equipment_record() 
{
  int choose;
  system("cls");
  do
  {
  printf("********************************设备报修登记信息******************************-\n");  
  printf("-------------------------------------------------------------------------------\n"); 
  printf("⒈设备报修信息录入 \n");  
  printf("⒉设备报修信息修改 \n"); 
  printf("⒊设备报修信息删除\n"); 
  printf("⒋设备报修信息浏览\n"); 
  printf("⒌返回上级菜单\n"); 
  printf("请输入选项:");  
  scanf("%d",&choose); 
  //getchar();  
  switch(choose)  
   {
    case 1:
      MyAdd1_Equipment_record();
      break;
    case 2:
      MyReplace1_Equipment_record();
      break;
     case 3:
      MyDelete1_Equipment_record();
      break;
    case 4:
      Display_Equipment_record();
      break;
    case 5:
      return;
    default:
      printf("输入错误请重新输入\n"); 
   }
  } while (1);
}

//录入设备信息
void MyAdd1_Equipment_record() 
{
  struct Equipment_record *p;
  p = (struct Equipment_record*)malloc(sizeof(struct Equipment_record));
  printf("请录入设备报修信息\n");
  printf("输入设备名称:");
  scanf("%s",p->name);
  printf("家庭门牌号：");
  scanf("%s", p->room_num);
  printf("输入楼层：");
  scanf("%d", &p->floor_num);
  printf("输入上一次维修的时间：");
  scanf("%s",p->time );
  printf("是否进行处理？yes/no \n");
  scanf("%s",p->Whether_deal_with);

  myAdd_Equipment_record(p);
  //save1_Foreign_personnel(p);
  printf("录入成功!\n");
}

//添加设备报修信息结点
struct Equipment_record *myAdd_Equipment_record(struct  Equipment_record *p) 
{
  struct Equipment_record *t;
  if (phead_Equipment_record == NULL)
  {
    phead_Equipment_record = p;
    p->next = NULL;
  }
  else
  {
    t = phead_Equipment_record;
    while (t->next != NULL)
    t = t->next;
    t->next = p;
    p->next = NULL;
    return phead_Equipment_record;

  }
}

//修改设备报修信息
void MyReplace1_Equipment_record() 
{
  struct  Equipment_record *k;
  char name[100];
  printf("请输入要修改的设备的名称:");
  scanf("%s", name);
  k = Equipment_record_find(name);
  if (k != NULL)
  {
	  printf("请录入设备报修信息\n");
	  printf("输入设备名称:");
	  scanf("%s",k->name);
	  printf("家庭门牌号：");
	  scanf("%d", k->room_num);
	  printf("输入楼层：");
	  scanf("%d", &k->floor_num);
	  printf("输入上一次维修的时间：");
	  scanf("%s",k->time );
	  printf("是否进行处理？yes/no");
	  scanf("%s",k->Whether_deal_with);
      printf("修改成功!\n");
  }
  else
  {
    printf("无此设备名称!\n");
    return;
  }
}

void Display_Equipment_record()
{
  struct Equipment_record *p;
  p = phead_Equipment_record;
  while (p != NULL)
  {
    printf("\n\n");
    printf("设备名称:%s\t\n", p -> name);
	printf("家庭门牌号：%s\t\n",p->room_num);
	printf("所在楼层：%d\t\n",p->floor_num);
	printf("上一次维修的时间：%s\t\n",p->time);
	printf("是否进行处理: %s\t\n",p->Whether_deal_with);
    printf("\n\n");
    p = p->next;
  }
}

void MyDelete1_Equipment_record()
{
  struct Equipment_record *p, *pp;
  struct wuye *k, *kk;
  char name[100];
  pp = phead_Equipment_record;
  kk = pHead;
  printf("请输入要删除设备的名称:");
  scanf("%s", name);
  p = Equipment_record_find(name);
  k = find2(name);
  if (p != NULL)
  {
    if (p == phead_Equipment_record)
    {
      phead_Equipment_record = p->next;

       free(p);
    }

    else
    {
      while (pp->next != p)
        pp = pp->next;
      pp->next = p->next;
      free(p);
    }
  }
  else
  {

    printf("无此设备ID!\n");
    return;
  }
  printf("删除此设备成功!\n");
  if (k != NULL)
  {
    if (k == pHead)
    {
      pHead = k->link;
      free(k);
    }
    else
    {
      while (kk->link != k)
        kk = kk->link;
      kk->link = k->link;
      free(k);
    }
  }
}
