#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<assert.h>
#include<stdlib.h>
#include<errno.h>

#define MAX 100
#define MAX_NAME 20
#define MAX_SEX 10
#define MAX_TELE 12
#define MAX_ADDR 30
#define DEFAULT_SZ 3
#define INC_SZ 2

//人的信息
typedef struct PeoInfo {
	char name[MAX_NAME];
	int age;
	char sex[MAX_SEX];
	char tele[MAX_TELE];
	char addr[MAX_ADDR];
}PI;

//通讯录
//静态版本
//typedef struct Contact {
//	PI data[MAX];//存放人的信息
//	int count;//记录当前通讯录中实际人数
//}Contact;
//动态版本
typedef struct Contact {
	PI* data;//存放人的信息
	int count;//记录当前通讯录中实际人数
	int capacity;//当前通讯录容量
}Contact;

//初始化通讯录
void InitContact(Contact* pc);

//添加联系人
void AddContact(Contact* pc);

//删除联系人
void DelContact(Contact* pc);

//排序联系人
void SortContact(Contact* pc);

//修改联系人
void ModifyContact(Contact* pc);

//显示联系人
void ShowContact(const Contact* pc);

//查找联系人
void SearchContact(Contact* pc);

//保存通讯录
void SaveContact(Contact* pc);

//销毁通讯录
void DestroyContact(Contact* pc);