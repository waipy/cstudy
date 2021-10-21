//
//  directls.h
//  cStudy
//
//  Created by Mac on 2019/11/24.
//  Copyright © 2019 Mac. All rights reserved.
//

#ifndef directls_h
#define directls_h

#include <dirent.h>

typedef struct Directory_
{
    char name[MAXNAMLEN + 1];
} Directory;

int directory(const char *path, Directory **dir);


#endif /* directls_h */
