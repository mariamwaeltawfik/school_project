
struct student {

char name[20];
int age;
char phone[11];

};

extern int number;
extern int nOfSchool;
void print_str(char *str);
void string_scan(char*str,int maxSize);
void print_student(struct student *s,int id);
void student_printByRef(struct student *ps);
void student_scanByRef(struct student *ps);
void student_printAll(struct student *arr);
int find_Name_inStruct(struct student *arr,int size,char s[]);
int compare_str(char *str1,char *str2);
void log_In();
int compare_str(char *str1,char *str2);
void menu();
void phone_student(struct student *cal,int id);
void edit_student(struct student *edit,int id,char n);
void remove_student(struct student *remove,int id);
