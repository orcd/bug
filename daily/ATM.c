

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct Zhanghu{
    char name[20];//姓名
    int num;//账户
    int password;//密码
    double balance;//余额
};
struct Zhanghu A = {"小王",2012,123456,10000};//A
struct Zhanghu B = {"小李",2014,654321,20000};//B
struct Zhanghu C = {"银行",1000,111111,100000};//C 银行账户ATM机子（里面有钱。。。银行的钱。。。）




int main(int argc, const char * argv[]) {

#pragma mark -      用C语言控制台程序模拟一个ATM 机存取款流程。
//    要求：
//    1）    账户基本信息结构体（包括：姓名、账户、密码、余额等基本信息）。
//    2）    输入用户名密码登录（密码用户名自定义并且提示相关错误信息）。
//    3）    登录成功后有：查看余额、取款、存款、修改密码 、退出登录菜单，并实现相关功能。
//    附加：
//    4）新建两个用户A(初始资金1W)、B(初始资金2W)，并添加一个银行账户（总资金10W，A、B用户资金计入在内）处理资金平衡，并记录相关操作日志。
//    注：1）排版及代码规范；
//    2）需要添加注释
//    3）功能完整性
//    4）增强用户体验
//
//
    int num,password;
//    int flag = 0;//a,b登陆成功的标示
//    int flag1 = 0;   // 进入打印凭条的标示
    int  a;//选择
    double  qukuan = 0; //额，这个就是存取款变量

//----------------因为是取款机，所以程序是死循环
    //------------功能实现
    //------------输入账号密码登陆（密码修改后使用新密码登陆）
    //------------查看余额（每次操作后会更新）
    //------------取款（不能取超过机子的钱，也不能透支）
    //------------存款（随便存）
    //------------修改密码，同上
    //------------退出登陆（退出了这个操作机子的人，等待下一个继续操作这台ATM机子）
    //------------输入内部的银行账户可以登陆查看A,B的信息，还有ATM机子的余额情况
    //------------初始密码都在上面。。。
    //------------ -_-||要停止运行请拆电池。。。
    while (1) {
        printf("程序一直运行中。。。\n");
        printf("请输入账号和密码：");
        scanf("%d%d",&num,&password);
        if (num == A.num && password == A.password) {
            int kongzhi = 1; //a,b中的控制
            printf("a登陆成功！");
            while (kongzhi) {
                //a的信息
                printf("\n1.查看余额\n");
                printf("2.取款\n");
                printf("3.存款\n");
                printf("4.修改密码\n");
                printf("5.退出登录\n");
                scanf("%d",&a);//输入选择信息
                switch (a) {
                    case 1:
                        //1.查看余额
                        printf("余额为：%.2lf",A.balance);
                        printf("\n-----------------------\n");
                        break;
                    case 2:
                        printf("请输入你要取款的金额：");
                        scanf("%lf",&qukuan);
                        //取款这里不能为0啊
                        if (qukuan <= A.balance) {
                            A.balance = A.balance - qukuan;
                            C.balance = C.balance - qukuan; //取款机的余额减少
                            printf("取款成功！");
                        }else if (qukuan > C.balance){
                            printf("取款机余额不足！");
                        }
                        else {
                            printf("余额不足！");
                        }
                        printf("\n-----------------------\n");
                        break;
                    case 3:
                        printf("请输入你要存款的金额：");
                        scanf("%lf",&qukuan);
                        A.balance = A.balance +qukuan;
                        C.balance = C.balance +qukuan; //取款机里面的前增加
                        printf("\n存款成功！\n");
                        printf("\n-----------------------\n");
                        break;
                    case 4:
                        printf("请输入新的密码：");
                        scanf("%d",&password);
                        A.password = password;
                        printf("\n密码修改成功！\n");
                        printf("\n-----------------------\n");
                        break;
                    case 5:
                        printf("你已经退出了！");
                        printf("\n-----------------------\n");

                        kongzhi = 0;
                        break;

                    default:
                        printf("输入错误！");
                        printf("\n-----------------------\n");
                        break;
                }
            }
            continue;

        }else if (num == B.num && password == B.password){
            int kongzhi = 1; //a,b中的控制
            while (kongzhi) {
                printf("b登陆成功");

                //b的信息
                printf("\n1.查看余额\n");
                printf("2.取款\n");
                printf("3.存款\n");
                printf("4.修改密码\n");
                printf("5.退出登录\n");
                scanf("%d",&a);//输入选择信息
                switch (a) {
                    case 1:
                        //1.查看余额
                        printf("余额为：%.2lf",B.balance);
                        printf("\n-----------------------\n");
                        break;
                    case 2:
                        printf("请输入你要取款的金额：");
                        scanf("%lf",&qukuan);
                        if (qukuan <= B.balance) {
                            B.balance = B.balance - qukuan;
                            C.balance = C.balance - qukuan;//取款机里面的钱减少
                            printf("取款成功！");
                        }else if (qukuan > C.balance){
                            printf("取款机余额不足！");
                        }
                        else {
                            printf("余额不足！");
                        }
                        printf("\n-----------------------\n");
                        break;
                    case 3:
                        printf("请输入你要存款的金额：");
                        scanf("%lf",&qukuan);
                        B.balance = B.balance +qukuan;
                        C.balance = C.balance +qukuan; //取款机里面的前增加
                        printf("\n存款成功！\n");
                        printf("\n-----------------------\n");
                        break;
                    case 4:
                        printf("请输入新的密码：");
                        scanf("%d",&password);
                        B.password = password;
                        printf("\n密码修改成功！\n");
                        printf("\n-----------------------\n");
                        break;
                    case 5:
                        printf("你已经退出了！");
                        printf("\n-----------------------\n");
                        kongzhi = 0 ;
                        break;
                    default:
                        printf("输入错误！");
                        printf("\n-----------------------\n");
                        break;
                }
            }
            continue;
            /////
        }else if(num == C.num && password == C.password){
            printf("银行账户登陆成功！\n");
            printf("ATM机的余额%.2lf\n",C.balance);
            printf("户主：%s，账号%d, 余额:%.2lf\n",B.name,B.num,B.balance);
            printf("户主：%s，账号%d, 余额:%.2lf\n",A.name,A.num,A.balance);

            continue;
        }
        else{
            printf("你的账号或者密码输入有错！请重新输入：\n");
            continue;
        }
    }
    return 0;
}
