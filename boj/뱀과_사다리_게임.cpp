#include <stdio.h>
#include <stdbool.h>
#define QUEUESIZE 10000

typedef struct {
    int front;
    int rear;
    int data[QUEUESIZE];
} Queue;

void init_queue(Queue *q) {
    q->front = q->rear = -1;
}


bool is_empty(Queue *q) {
    return q->front == q->rear;
}

void enqueue(Queue *q, int object) {
    q->data[++(q->rear)] = object;
}

int dequeue(Queue *q) {
    return q->data[++(q->front)];
}

int gameVisit[101];
int bam[101];
int sadari[101];
int result = 1000;

void bfs(int start) {
    Queue q;
    init_queue(&q);
    enqueue(&q, start);
    gameVisit[start] = 0;

    while (!is_empty(&q)) {
        int current = dequeue(&q);
        if (current == 100) {
            result = gameVisit[current];
            return;
        }

        for (int dice = 1; dice <= 6; dice++) {
            int next = current + dice;
            if (next > 100) continue;

            if (sadari[next] != 0) {
                next = sadari[next];
            } else if (bam[next] != 0) {
                next = bam[next];
            }

            if (gameVisit[next] == -1) {
                gameVisit[next] = gameVisit[current] + 1;
                enqueue(&q, next);
            }
        }
    }
}

int main(void) {
    int n, m;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < 101; i++) {
        gameVisit[i] = -1;
        bam[i] = 0;
        sadari[i] = 0;
    }

    for (int i = 0; i < n; i++) {
        int a, b;
        scanf("%d %d", &a, &b);
        sadari[a] = b;
    }
    
    for (int i = 0; i < m; i++) {
        int c, d;
        scanf("%d %d", &c, &d);
        bam[c] = d;
    }
    
    bfs(1);
    printf("%d\n", result);
    
    return 0;
}
