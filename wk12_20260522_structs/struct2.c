#include<stdio.h>

typedef struct{
    int id;
    char name[20];
    int kor, eng, math;
} Student ;

// READ
void print(Student list[], int count){ 
    printf("\n");
    printf("학번\t 이름 \t 국어\t 영어\t 수학\t\n");
    printf("=====================================\n");
    for (int i = 0; i < count; i++){
        printf("%d\t %s\t %d\t %d\t %d\n", list[i].id, list[i].name, list[i].kor, list[i].eng, list[i].math);
    }        
}

// CREATE
int create(Student list[], int count, Student s){  
    list[count] = s;
    return count + 1;
}

// UPDATE
void update(Student list[], int count, Student s){    
    list[count] = s;
}

// DELETE
int delete(int count){     
    return count - 1;
}

int main() {
    Student list[100]= {
        {1234, "홍길동", 10, 20, 30}
    };
    int count = 1;
    print(list, count);
    printf("\n\n");
    
    // CREATE
    printf("\n===[CREATE]===\n");
    count = create(list, count, (Student){5678, "홍길서", 20, 30, 40});
    print(list, count);

    // UPDATE
    printf("\n===[UPDATE]===\n");
    update(list, 1, (Student){9012, "홍길남", 15, 25, 35});
    print(list, count);

    // DELETE
    printf("\n===[DELETE]===\n");
    count = delete(count);
    print(list, count);

    return 0;
}