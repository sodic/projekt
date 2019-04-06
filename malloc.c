#include <stdlib.h>
#include <stdio.h>

typedef struct {
    char* first_name;
    char* last_name;
    int age;
} Person;

void print_person(Person p) {
    printf("%s %s, %d.\n", p.first_name, p.last_name, p.age);
}

Person create_person(char *first_name, char *last_name, int age) {
    Person p;
    p.first_name = first_name;
    p.last_name = last_name;
    p.age = age;

    return p;
}

int *get_array(int n) 
{
    int polje[4];
    
    for(int i = 0; i < n; i++) {
        polje[i] = i * 2;
    }
    
    return polje;

}

int *get_int() {
    int a = 6;
    return &a;
}

void print_array(int* array, int length)
{
    
    printf("[");
    for(int i = 0; i < length; i++)
    {
        printf("%d, ", array[i]);
    }
    printf("]");
    
}

int main(void)
{
    Person p = create_person("Ligmao", "Mlegma", 6);
    print_person(p);

    Person ante = create_person("Ante", "Gotovina", 56);
    print_person(ante);

    // int size = 4;
    // int *ligmao = get_array(size);
    // print_array(ligmao, size);

    int b = get_int();
    
    return 0;
}
