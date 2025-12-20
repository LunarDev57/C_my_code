#include"contact.h"

//检查增容
void CheckCapacity(Contact* pc) {
	if (pc->count == pc->capacity) {
		PI* ptr = (PI*)realloc(pc->data, (pc->capacity + INC_SZ) * sizeof(PI));
		if (ptr == NULL) {
			printf("AddContact:%s\n", strerror(errno));
			return;
		}
		else {
			pc->data = ptr;
			pc->capacity += INC_SZ;
			printf("增容成功\n");
		}
	}
}

//加载联系人
void LoadContact(Contact* pc) {
	FILE* pfRead = fopen("contact.txt", "rb");
	if (pfRead == NULL) {
		perror("LoadContact");
		return;
	}
	PI tmp = { 0 };
	while (fread(&tmp, sizeof(PI), 1, pfRead) == 1) {
		CheckCapacity(pc);
		pc->data[pc->count] = tmp;
		pc->count++;
	}
    fclose(pfRead);
	pfRead = NULL;
}

//静态版本初始化
//void InitContact(Contact* pc) {
//	assert(pc);
//	pc->count = 0;
//	memset(pc->data, 0, sizeof(pc->data));
//}
//动态版本初始化
void InitContact(Contact* pc) {
	assert(pc);
	pc->count = 0;
	pc->data = (PI*)calloc(DEFAULT_SZ, sizeof(PI));
	if (pc->data == NULL) {
		printf("InitContact%s\n", strerror(errno));
		return;
	}
	pc->capacity = DEFAULT_SZ;
	LoadContact(pc);//加载
}

//查找名字
int FindByName(Contact* pc, char name[])
{
	assert(pc);
	for (int i = 0; i < pc->count; i++) {
		if (strcmp(pc->data[i].name, name) == 0)
			return i;
	}
	return -1;
}

//比较名字
int cmp_peo_by_name(const void* e1, const void* e2) {
	return strcmp(((PI*)e1)->name, ((PI*)e2)->name);
}

//静态版本添加
//void AddContact(Contact* pc) {
//	assert(pc);
//	if (pc->count == MAX) {
//		printf("通讯录已满，无法添加\n");
//		return;
//	}
//	printf("请输入名字:>");
//	scanf("%s", pc->data[pc->count].name);
//	printf("请输入年龄:>");
//	scanf("%d", &(pc->data[pc->count].age));
//	printf("请输入性别:>");
//	scanf("%s", pc->data[pc->count].sex);
//	printf("请输入电话:>"); 
//	scanf("%s", pc->data[pc->count].tele);
//	printf("请输入地址:>");
//	scanf("%s", pc->data[pc->count].addr);
//	pc->count++;
//	printf("添加成功\n");
//}
//动态版本添加
void AddContact(Contact* pc) {
	assert(pc);
	CheckCapacity(pc);//检查增容
	printf("请输入名字:>");
	scanf("%s", pc->data[pc->count].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pc->count].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pc->count].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pc->count].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pc->count].addr);
	pc->count++;
	printf("添加成功\n");
}

void DelContact(Contact* pc) {
	char name[MAX_NAME] = { 0 };
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空，没有信息可以删除\n");
		return;
	}
	printf("请输入要删除的联系人:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//查找
	if (pos == -1) {
		printf("该联系人不存在\n");
		return;
	}
	for (int i = pos; i < pc->count; i++) {
		pc->data[i] = pc->data[i + 1];
	}
	pc->count--;
	printf("删除成功\n");
}

void SortContact(Contact* pc) {
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空，没有信息可以排序\n");
		return;
	}
	qsort(pc->data, pc->count, sizeof(PI), cmp_peo_by_name);//排序
	printf("排序成功\n");
}

void ModifyContact(Contact* pc) {
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空，没有信息可以修改\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要修改联系人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//查找
	if (pos == -1) {
		printf("该联系人不存在\n");
		return;
	}
	printf("要修改的联系人已找到，接下来开始修改\n");
	printf("请输入名字:>");
	scanf("%s", pc->data[pos].name);
	printf("请输入年龄:>");
	scanf("%d", &(pc->data[pos].age));
	printf("请输入性别:>");
	scanf("%s", pc->data[pos].sex);
	printf("请输入电话:>");
	scanf("%s", pc->data[pos].tele);
	printf("请输入地址:>");
	scanf("%s", pc->data[pos].addr);
	printf("修改成功\n");
}

void ShowContact(const Contact* pc) {
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空，没有信息可以显示\n");
		return;
	}
	printf("%-20s\t%-5s\t%-5s\t%-12s\t%-30s\n","名字", "年龄", "性别", "电话", "地址");
	for (int i = 0; i < pc->count; i++) {
		printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[i].name,
			                                        pc->data[i].age,
			                                        pc->data[i].sex,
			                                        pc->data[i].tele,
			                                        pc->data[i].addr);
	}
}

void SearchContact(Contact* pc) {
	assert(pc);
	if (pc->count == 0) {
		printf("通讯录为空，没有信息可以查找\n");
		return;
	}
	char name[MAX_NAME] = { 0 };
	printf("请输入要查找联系人的名字:>");
	scanf("%s", name);
	int pos = FindByName(pc, name);//查找
	if (pos == -1) {
		printf("该联系人不存在\n");
		return;
	}
	printf("%-20s\t%-5d\t%-5s\t%-12s\t%-30s\n", "名字", "年龄", "性别", "电话", "地址");
	printf("%-20s\t%-3d\t%-5s\t%-12s\t%-30s\n", pc->data[pos].name,
		                                        pc->data[pos].age,
		                                        pc->data[pos].sex,
		                                        pc->data[pos].tele,
		                                        pc->data[pos].addr);
}

void SaveContact(Contact* pc) {
	assert(pc);
	FILE* pfWrite = fopen("contact.txt", "wb");
	if (pfWrite == NULL) {
		perror("SaveContact");
		return;
	}
	for (int i = 0; i < pc->count; i++) {
		fwrite(pc->data + i, sizeof(PI), 1, pfWrite);
	}
	fclose(pfWrite);
	pfWrite = NULL;
}

void DestroyContact(Contact* pc) {
	assert(pc);
	free(pc->data);
	pc->data = NULL;
}