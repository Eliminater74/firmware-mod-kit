#ifndef MKSQUASHFS_H
#define MKSQUASHFS_H

#include "sort.h"
#include "squashfs_fs.h"

int dir_scan2(squashfs_inode_t* inode, struct dir_info* dir_info);
int create_inode(squashfs_inode_t* i_no, struct dir_ent* dir_ent, int type, long long byte_size, long long start_block, unsigned int offset, unsigned int* block_list, struct fragment* fragment, struct directory* dir_in);
int write_dir(squashfs_inode_t* inode, struct dir_info* dir_info, struct directory* dir);

#endif // MKSQUASHFS_H
