#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_boj_link(const char *str) {
    return strncmp(str, "boj.kr/", 7) == 0;
}

int get_problem_number(const char *str) {
    return atoi(str + 7);
}

int compare_study(const void *a, const void *b) {
    const char *str1 = *(const char **)a;
    const char *str2 = *(const char **)b;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    
    if (len1 != len2) {
        return len1 - len2;
    }
    return strcmp(str1, str2);
}

int compare_boj(const void *a, const void *b) {
    int num1 = get_problem_number(*(const char **)a);
    int num2 = get_problem_number(*(const char **)b);
    return num1 - num2;
}

int main() {
    int N;
    scanf("%d", &N);
    getchar();

    char *records[1000];
    char buffer[101];
    int study_count = 0;
    int boj_count = 0;
    
    for (int i = 0; i < N; i++) {
        scanf("%[^\n]", buffer);
        getchar(); 
        records[i] = strdup(buffer);
    }
    
    char *studies[1000];
    char *bojs[1000];
    
    for (int i = 0; i < N; i++) {
        if (is_boj_link(records[i])) {
            bojs[boj_count++] = records[i];
        } else {
            studies[study_count++] = records[i];
        }
    }
    
    qsort(studies, study_count, sizeof(char *), compare_study);
    qsort(bojs, boj_count, sizeof(char *), compare_boj);
    
    for (int i = 0; i < study_count; i++) {
        printf("%s\n", studies[i]);
        free(studies[i]);
    }
    for (int i = 0; i < boj_count; i++) {
        printf("%s\n", bojs[i]);
        free(bojs[i]);
    }
    
    return 0;
}
