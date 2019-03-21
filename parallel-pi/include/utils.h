#ifndef	_UTILS_H
#define	_UTILS_H

extern void delay ( unsigned long);
extern void put32 ( unsigned long, unsigned int );
extern unsigned int get32 ( unsigned long );
extern unsigned long get_el ( void );
extern void set_pgd(unsigned long pgd);
extern unsigned long get_pgd();
extern unsigned int getCore();
extern void hang();

extern void dsb();
extern void dmb();
extern void isb();
extern void BRANCHTO(int *arr, int n, int index, int c, unsigned long address);

extern void burn ( void );
#endif  /*_UTILS_H */
