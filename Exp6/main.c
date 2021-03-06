#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "libs/graph.h"

// 根据标准输入构造人的关系图
Graph *getGraphFromInput();

// 从标准输入中获取要查询的关系
void getPathFromInput(Graph *g);

// 从标准输入中读取两个人的名字
void readNamesFromInput(char *name1, char *name2);

int main() {
    system("chcp 65001 > nul");
    // 根据标准输入构造人的关系图
    Graph *g = getGraphFromInput();
    // 从标准输入中获取要查询的关系，输出最短关系
    printf("--------------------------------------------------------\n");
    printf("    人物关系构建结束，接下来输入两个人名，求取最短联系路径   \n");
    printf("--------------------------------------------------------\n");
    getPathFromInput(g);
    system("pause");
    return 0;
}

Graph *getGraphFromInput() {
    char name1[MAX_NAME_LENGTH] = {0};
    char name2[MAX_NAME_LENGTH] = {0};
    Graph *g = graphInit();
    printf("请每行输入存在联系的两个人的姓名，两个姓名之间以空格隔开，回车结束：\n");
    do {
        printf("--输入0 0回车结束--\n");
        readNamesFromInput(name1, name2);
        if (name1[0] == '0' && name2[0] == '0') {
            break;
        } else if (strcmp(name1, name2) == 0) {
            printf("--禁止与自身建立联系，此行输入被忽略--\n");
        } else {
            graphAddEdge(g, name1, name2);
        }
    } while (1);
    return g;
}

void getPathFromInput(Graph *g) {
    char name1[MAX_NAME_LENGTH] = {0};
    char name2[MAX_NAME_LENGTH] = {0};
    printf("请每行输入存在联系的两个人的姓名，两个姓名之间以空格隔开，回车结束：\n");
    readNamesFromInput(name1, name2);
    Path *shortestPath = graphGetShortestPath(g, name1, name2);
    if (!shortestPath) {
        printf("-- 两者之间不存在联系 --\n");
    } else {
        pathPrint(shortestPath);
    }
}

void readNamesFromInput(char *name1, char *name2) {
    int name1ReadOver = 0;
    int len = 0;
    char c;
    name1ReadOver = 0;
    len = 0;
    name1[0] = ' ';
    while ((c = (char) getchar()) != EOF && len < MAX_NAME_LENGTH) {
        if (c == ' ') {
            if (!name1ReadOver && name1[0] != ' ') {
                name1ReadOver = 1;
                name1[len] = '\0';
                len = 0;
            }
            continue;
        } else if (c == '\n') {
            name2[len] = '\0';
            if (!name1ReadOver) {
                printf("请每行输入两个姓名。");
            }
            break;
        }
        if (name1ReadOver) {
            name2[len++] = c;
        } else {
            name1[len++] = c;
        }
    }
}