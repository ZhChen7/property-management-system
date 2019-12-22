int Main_Menu();    //主菜单
void XinXi_Menu();  //物业信息菜单
void TongJi_Menua(); //统计查询菜单
void Arrears_List(); //欠费名单
void YeZhu_Menu();  //业主菜单
void WuYe_Menu();   //物业菜单
void Foreign_personnel();//外来人员登记菜单
void Equipment_record();//设备保修管理
void MyAdd1_Owner();     //录入业主信息
void MyAdd2_Property();     //录入物业信息
void MyAdd1_Foreign_personnel(); //录入外来人员信息
void MyAdd1_Equipment_record();//录入设备报修信息
void MyDelete1_Owner();  //删除业主信息
void MyDelete2_Property();  //删除物业信息
void MyDelete1_Foreign_personnel(); //删除外来人员信息
void MyDelete1_Equipment_record();
void MyReplace1_Owner(); //修改业主信息
void MyReplace2_Property(); //修改物业信息
void MyReplace1_Foreign_personnel();//修改外来人员信息
void MyReplace1_Equipment_record();
void Display1();   //浏览业主信息
void Display2();   //浏览物业信息
void Display_Foreign_personnel();//浏览外来人员信息
void Display_Equipment_record();
void myfind();     //查询缴费
void Display(struct wuye *p);
void Read1();
void Read2();
void save1(struct yezhu *p);   //保存业主信息至文件
void save2(struct wuye *p);    //保存物业信息至文件
struct yezhu *find1(char *id); //查找业主信息
struct wuye *find2(char *id);  //查找物业信息`
struct yezhu *myAdd3(struct yezhu *p); //添加业主信息
struct wuye *myAdd4(struct wuye *p);
struct Foreign_personnel *myAdd_Foreign_personnel(struct Foreign_personnel *p); 
struct Equipment_record *myAdd_Equipment_record(struct Foreign_personnel *p);