// #include <stdio.h>

// // Function to add two numbers
// int add(int a, int b) {
//     return a + b;
// }

// int main() {
//     int num1, num2, sum;

//     // Input two numbers
//     printf("Enter two numbers: ");
//     scanf("%d %d", &num1, &num2);

//     // Call the add function
//     sum = add(num1, num2);

//     // Print the result
//     printf("Sum: %d\n", sum);

//     return 0;
// }

#include <stdio.h>

// contoh deklarasi variabel
int dec_var()
{
    int a = 10;
    float b = 10.5;
    char c = 'a';
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    return 0;
}

// contoh operasi aritmatika
int arit_op()
{
    int a = 9, b = 4, c;
    c = a + b;
    printf("a + b = %d\n", c);
    c = a - b;
    printf("a - b = %d\n", c);
    c = a * b;
    printf("a * b = %d\n", c);
    c = a / b;
    printf("a / b = %d\n", c);
    c = a % b;
    printf("Remainder when a divided by b = %d\n", c);
    return 0;
}

// contoh operasi relasional
int rel_op()
{
    int a = 5, b = 5;
    if (a == b)
    {
        printf("a and b are equal\n");
    }
    else
    {
        printf("a and b are not equal\n");
    }
    if (a > b)
    {
        printf("a is greater than b\n");
    }
    else
    {
        printf("a is less than or equal to b\n");
    }
    if (a < b)
    {
        printf("a is less than b\n");
    }
    else
    {
        printf("a is greater than or equal to b\n");
    }
    return 0;
}

// contoh operasi logika
int log_op()
{
    int a = 5, b = 5, c = 10;
    if (a == b && b == c)
    {
        printf("a, b and c are equal\n");
    }
    if (a == b || b == c)
    {
        printf("a is equal to b or b is equal to c\n");
    }
    if (!(a == b))
    {
        printf("a is not equal to b\n");
    }
    return 0;
}

// contoh operasi bitwise
int bit_op()
{
    unsigned int a = 5, b = 9;
    int c;
    c = a & b;
    printf("a & b = %d\n", c);
    c = a | b;
    printf("a | b = %d\n", c);
    c = a ^ b;
    printf("a ^ b = %d\n", c);
    c = ~a;
    printf("~a = %d\n", c);
    c = a << 1;
    printf("a << 1 = %d\n", c);
    c = a >> 1;
    printf("a >> 1 = %d\n", c);
    return 0;
}

// contoh control flow
int control_flow()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num >= 0)
    {
        printf("Number is positive\n");
    }
    else
    {
        printf("Number is negative\n");
    }
    return 0;
}

// contoh switch case
int switch_case()
{
    char operator;
    float num1, num2;
    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operator);
    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);
    switch (operator)
    {
    case '+':
        printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
        break;
    default:
        printf("Invalid operator\n");
    }
    return 0;
}

// contoh for loop
int for_loop()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
    }
    return 0;
}

// contoh while loop
int while_loop()
{
    int i = 1;
    while (i <= 10)
    {
        printf("%d\n", i);
        i++;
    }
    return 0;
}

// contoh fungsi
int add(int a, int b)
{
    return a + b;
}

// contoh tipe data
int data_type()
{
    int a = 10;
    float b = 10.5;
    char c = 'a';
    printf("a = %d\n", a);
    printf("b = %f\n", b);
    printf("c = %c\n", c);
    return 0;

    // array
    int numbers[5] = {1, 2, 3, 4, 5};

    // contoh string
    char name[20] = "John Doe";
    printf("Name: %s\n", name);

    // pointer
    int *p;
    p = &a;
    printf("Value of a = %d\n", a);
    printf("Value of a using pointer = %d\n", *p);
    return 0;
}

// contoh struct
struct Person
{
    char name[50];
    int age;
    float salary;
};

// contoh union
union Data
{
    int i;
    float f;
    char str[20];
};

// contoh file i/o
int file_io()
{
    // FILE *fptr;
    // char filename[100], c;
    // printf("Enter the filename to open for reading: ");
    // scanf("%s", filename);
    // // Open file
    // fptr = fopen(filename, "r");
    // if (fptr == NULL)
    // {
    //     printf("Cannot open file \n");
    //     exit(0);
    // }
    // // Read contents from file
    // c = fgetc(fptr);
    // while (c != EOF)
    // {
    //     printf("%c", c);
    //     c = fgetc(fptr);
    // }
    // fclose(fptr);
    // return 0;

    FILE *file = fopen("example.txt", "w");
    fprintf(file, "Hello, World!\n");
    fclose(file);
}

int main()
{
    printf("Hello, World!\n");

    printf("Contoh Deklarasi Variabel\n");
    dec_var();

    printf("Contoh Operasi Aritmatika\n");
    arit_op();

    printf("Contoh Operasi Relasional\n");
    rel_op();

    printf("Contoh Operasi Logika\n");
    log_op();

    printf("Contoh Operasi Bitwise\n");
    bit_op();

    printf("Contoh Control Flow\n");
    control_flow();

    printf("Contoh Switch Case\n");
    switch_case();

    printf("Contoh For Loop\n");
    for_loop();

    printf("Contoh While Loop\n");
    while_loop();

    printf("Contoh Fungsi\n");
    int a = 10, b = 20;
    int sum = add(a, b);
    printf("Sum: %d\n", sum);

    printf("Contoh Tipe Data\n");
    data_type();

    printf("Contoh Struct\n");
    struct Person person;
    strcpy(person.name, "John Doe");
    person.age = 30;
    person.salary = 50000.50;
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    printf("Salary: %.2f\n", person.salary);

    printf("Contoh Union\n");
    union Data data;
    data.i = 10;
    data.f = 220.5;
    strcpy(data.str, "C Programming");
    printf("Data.i = %d\n", data.i);
    printf("Data.f = %f\n", data.f);
    printf("Data.str = %s\n", data.str);

    // printf("Contoh File I/O\n");
    // file_io();

    return 0;
}