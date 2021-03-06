#ifndef __CMAP_H__
#define __CMAP_H__
#include "clist.h"

typedef struct{
    // map大小
    int size;
    // 容量
    int capacity;
    // 最大质数
    int _prime;
    // 元素
    void **_elems;
}cmap;


typedef struct{
    void* key;
    void* value;
}cmap_elem;


extern int map_init(cmap* map, int capacity);

extern cmap* make_map(int capacity);

/**
 * 添加
*/
extern int map_put(cmap* map, void* key, void* value);

/**
 * 删除
*/
extern void *map_remove(cmap *map, void* key);

/**
 * 获取
*/
extern void *map_get(cmap *map, void* key);


/**
 * 清空所有数据
*/
extern void *map_clear(cmap *map);

/**
 * 获取map所有key
*/
extern int map_keys(cmap* map, clist* list);

#endif