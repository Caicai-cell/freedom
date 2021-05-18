#ifndef _BUBBLE_SORT_H__
#define _BUBBLE_SORT_H__

void bubble_sort(void* base, int sz, int width, int(*cmp)(const void* e1, const void* e2));
int cmp_name(const void* e1, const void* e2);
int cmp_age(const void* e1, const void* e2);
int cmp_tele(const void* e1, const void* e2);
int cmp_addr(const void* e1, const void* e2);

#endif