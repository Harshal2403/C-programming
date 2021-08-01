// Program to check all datatypes and varify their size
#include <stdio.h>

int main()
{
    short int si = 32767;
    unsigned short int usi = 65535;
    int i = 2147483648;
    unsigned int ui = 4294967295;
    long int li = 2147483648;
    unsigned long int uli = 4294967295;
    long long int lli = 2147483648;
    unsigned long long int ulli = 4294967295;
    char c = 'a';
    unsigned char uc = 'a';
    float f = 23.123456789;
    double d = 23.987654321;
    long double ld = 23.987654321;

    printf("short int = %hd size = %lu\n unsigned short int = %hu size = %lu \n\n", si, sizeof(si), usi, sizeof(usi));
    printf("int = %d size = %lu\n unsigned int = %u size = %lu \n\n", i, sizeof(i), ui, sizeof(ui));
    printf("long int = %ld size = %lu\n unsigned long int = %lu size = %lu \n\n", li, sizeof(li), uli, sizeof(uli));
    printf("long long int = %lld size = %lu\n unsigned long long int = %llu size = %lu \n\n", lli, sizeof(lli), ulli, sizeof(ulli));
    printf("char = %c size = %lu\n unsigned char = %c size = %lu \n\n", c, sizeof(c), uc, sizeof(uc));
    printf("float = %.8f size = %lu\n double = %lf size = %lu \n", f, sizeof(f), d, sizeof(d));
    printf("long double = %Lf size = %lu", ld, sizeof(ld));
    return 0;
}