

 //Using puts() FunctionThe puts function can be used instead of printf for a simpler approach

//#include <stdio.h>

//int main(){
    //puts("HELLO, WORLD !\n");           
    // return 0;
//}



//Using write() System CallAlthough not recommended for beginners, you can avoid including stdio.h and use system calls instead. 
//This is more advanced and not as portable.



//int main() {
//    write(1, "Hello, World!\n", 14);       
//    return 0;
//}

//Character-by-Character Printing
//You can print each character of the string separately.

#include <stdio.h>

int main() {
    char *str = "Hello, World!\n";
    while (*str) {
        putchar(*str++);
    }
    return 0;
}

