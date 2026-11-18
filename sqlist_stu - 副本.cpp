#include <stdio.h>
#include <string.h>

#define MAXSIZE 60   // 顺序表数组最大长度，定义时直接指定

//学生结构体
typedef struct {
    int id;         // 学号（整型）
    char name[20];  // 姓名
    float score;    // 成绩
} Student;

//顺序表：结构体内部直接定义数组，静态数组
typedef struct {
    Student data[MAXSIZE];  // 直接定义数组，长度60
    int length;             // 当前实际学生个数
} SqList;

//初始化顺序表
void InitList(SqList *L) {
    L->length = 0;
}

//按学号从小到大插入学生，保持有序
int Insert(SqList *L, Student stu) {
    if (L->length >= MAXSIZE) {
        printf("顺序表已满，无法新增！\n");
        return 0;
    }
    int i;
//找到插入位置：第一个大于待插入学号的下标
    for (i = 0; i < L->length; i++) {
        if (L->data[i].id > stu.id) {
            break;
        }
    }

    if(i < L->length && L->data[i].id == stu.id){ //修正重复学号判断
        printf("学号已存在，插入失败！\n");
        return 0;
    }
 
    for(int j = L->length; j > i; j--){
        L->data[j] = L->data[j-1];
    }
    L->data[i] = stu;
    L->length++;
    printf("插入成功！\n");
    return 1;
}

void CreateList(SqList *L) {
    int n;
    Student stu;

    printf("请输入学生人数：");
    scanf("%d", &n);

    if (n < 0 || n > MAXSIZE) {
        printf("学生人数不合法！\n");
        return;
    }

     L->length = 0;

    for (int i = 0; i < n; i++) {
        printf("请输入第%d名学生的学号、姓名和成绩：", i + 1);
        scanf("%d %19s %f", &stu.id, stu.name, &stu.score);

        //调用原有插入函数，自动按学号排序
        Insert(L, stu);
    }

    printf("顺序表创建完成！\n");
}

//按学号删除学生，删除后保持有序
int Delete(SqList *L, int delId) {
    int pos = -1;
    for(int i = 0; i < L->length; i++){
        if(L->data[i].id == delId){
            pos = i;
            break;
        }
    }
    if(pos == -1){
        printf("未找到该学号，删除失败！\n");
        return 0;
    }
	//后续元素前移
    for(int i = pos; i < L->length - 1; i++){
        L->data[i] = L->data[i+1];
    }
    L->length--;
    printf("删除成功！\n");
    return 1;
}

// 按学号查找学生
void Search(SqList *L, int searchId) {
    for(int i = 0; i < L->length; i++){
        if(L->data[i].id == searchId){
            printf("====查找结果====\n");
            printf("学号：%d，姓名：%s，成绩：%.2f\n",
                   L->data[i].id, L->data[i].name, L->data[i].score);
            return;
        }
    }
    printf("未找到该学号学生\n");
}

//s遍历输出所有学生
void ShowAll(SqList *L) {
    if(L->length == 0){
        printf("当前学生列表为空\n");
        return;
    }
    printf("\n====学生信息列表（学号升序）====\n");
    for(int i = 0; i < L->length; i++){
        printf("%d\t%s\t%.2f\n", L->data[i].id, L->data[i].name, L->data[i].score);
    }
}

int main() {
    SqList L;
    InitList(&L);
    int op;
    Student tempStu;
    int inputId;

    while(1){
        printf("\n========学生管理系统========\n");
        printf("1.新增学生(自动按学号排序)\n");
        printf("2.按学号删除学生\n");
        printf("3.按学号查找学生\n");
        printf("4.显示全部学生\n");
        printf("5.创建学生成绩信息表\n"); 
        printf("0.退出系统\n");
        printf("请输入操作：");
        scanf("%d",&op);
        switch(op){
            case 1:
                printf("请输入学号 姓名 成绩：");
                scanf("%d %19s %f", &tempStu.id, tempStu.name, &tempStu.score);
                Insert(&L, tempStu);
                break;
            case 2:
                printf("请输入要删除的学号：");
                scanf("%d",&inputId);
                Delete(&L, inputId);
                break;
            case 3:
                printf("请输入要查找的学号：");
                scanf("%d",&inputId);
                Search(&L, inputId);
                break;
            case 4:
                ShowAll(&L);
                break;
            case 5: 
                CreateList(&L);
                break;
            case 0:
                printf("程序退出\n");
                return 0;
            default:
                printf("输入选项错误，请重新输入！\n");
        }
    }
}

