// Copyright (c) 2016 Nuxi (https://nuxi.nl/) and contributors.
//
// Redistribution and use in source and binary forms, with or without
// modification, are permitted provided that the following conditions
// are met:
// 1. Redistributions of source code must retain the above copyright
//    notice, this list of conditions and the following disclaimer.
// 2. Redistributions in binary form must reproduce the above copyright
//    notice, this list of conditions and the following disclaimer in the
//    documentation and/or other materials provided with the distribution.
//
// THIS SOFTWARE IS PROVIDED BY THE AUTHOR AND CONTRIBUTORS ``AS IS'' AND
// ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
// IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
// ARE DISCLAIMED.  IN NO EVENT SHALL THE AUTHOR OR CONTRIBUTORS BE LIABLE
// FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
// DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
// OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
// HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
// LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY
// OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF
// SUCH DAMAGE.
//
// This file is automatically generated. Do not edit.
//
// Source: https://github.com/NuxiNL/cloudabi

#ifndef CLOUDABI_SYSCALLS_H
#define CLOUDABI_SYSCALLS_H

#include "cloudabi_types_common.h"

cloudabi_errno_t cloudabi_sys_clock_res_get(cloudabi_clockid_t clock_id,
                                            cloudabi_timestamp_t *resolution);

cloudabi_errno_t cloudabi_sys_clock_time_get(cloudabi_clockid_t clock_id,
                                             cloudabi_timestamp_t precision,
                                             cloudabi_timestamp_t *time);

cloudabi_errno_t cloudabi_sys_condvar_signal(cloudabi_condvar_t __user *condvar,
                                             cloudabi_scope_t scope,
                                             cloudabi_nthreads_t nwaiters);

cloudabi_errno_t cloudabi_sys_fd_close(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_fd_create1(cloudabi_filetype_t type,
                                         cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_fd_create2(cloudabi_filetype_t type,
                                         cloudabi_fd_t *fd1,
                                         cloudabi_fd_t *fd2);

cloudabi_errno_t cloudabi_sys_fd_datasync(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_fd_dup(cloudabi_fd_t from, cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_fd_replace(cloudabi_fd_t from, cloudabi_fd_t to);

cloudabi_errno_t cloudabi_sys_fd_seek(cloudabi_fd_t fd,
                                      cloudabi_filedelta_t offset,
                                      cloudabi_whence_t whence,
                                      cloudabi_filesize_t *newoffset);

cloudabi_errno_t cloudabi_sys_fd_stat_get(cloudabi_fd_t fd,
                                          cloudabi_fdstat_t __user *buf);

cloudabi_errno_t cloudabi_sys_fd_stat_put(cloudabi_fd_t fd,
                                          const cloudabi_fdstat_t __user *buf,
                                          cloudabi_fdsflags_t flags);

cloudabi_errno_t cloudabi_sys_fd_sync(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_file_advise(cloudabi_fd_t fd,
                                          cloudabi_filesize_t offset,
                                          cloudabi_filesize_t len,
                                          cloudabi_advice_t advice);

cloudabi_errno_t cloudabi_sys_file_allocate(cloudabi_fd_t fd,
                                            cloudabi_filesize_t offset,
                                            cloudabi_filesize_t len);

cloudabi_errno_t cloudabi_sys_file_create(cloudabi_fd_t fd,
                                          const char __user *path,
                                          size_t path_len,
                                          cloudabi_filetype_t type);

cloudabi_errno_t cloudabi_sys_file_link(cloudabi_lookup_t fd1,
                                        const char __user *path1,
                                        size_t path1_len, cloudabi_fd_t fd2,
                                        const char __user *path2,
                                        size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_open(cloudabi_lookup_t dirfd,
                                        const char __user *path,
                                        size_t path_len,
                                        cloudabi_oflags_t oflags,
                                        const cloudabi_fdstat_t __user *fds,
                                        cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_file_readdir(cloudabi_fd_t fd, void __user *buf,
                                           size_t buf_len,
                                           cloudabi_dircookie_t cookie,
                                           size_t *bufused);

cloudabi_errno_t cloudabi_sys_file_readlink(cloudabi_fd_t fd,
                                            const char __user *path,
                                            size_t path_len, char __user *buf,
                                            size_t buf_len, size_t *bufused);

cloudabi_errno_t cloudabi_sys_file_rename(cloudabi_fd_t fd1,
                                          const char __user *path1,
                                          size_t path1_len, cloudabi_fd_t fd2,
                                          const char __user *path2,
                                          size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_stat_fget(cloudabi_fd_t fd,
                                             cloudabi_filestat_t __user *buf);

cloudabi_errno_t cloudabi_sys_file_stat_fput(
    cloudabi_fd_t fd, const cloudabi_filestat_t __user *buf,
    cloudabi_fsflags_t flags);

cloudabi_errno_t cloudabi_sys_file_stat_get(cloudabi_lookup_t fd,
                                            const char __user *path,
                                            size_t path_len,
                                            cloudabi_filestat_t __user *buf);

cloudabi_errno_t cloudabi_sys_file_stat_put(
    cloudabi_lookup_t fd, const char __user *path, size_t path_len,
    const cloudabi_filestat_t __user *buf, cloudabi_fsflags_t flags);

cloudabi_errno_t cloudabi_sys_file_symlink(const char __user *path1,
                                           size_t path1_len, cloudabi_fd_t fd,
                                           const char __user *path2,
                                           size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_unlink(cloudabi_fd_t fd,
                                          const char __user *path,
                                          size_t path_len,
                                          cloudabi_ulflags_t flags);

cloudabi_errno_t cloudabi_sys_lock_unlock(cloudabi_lock_t __user *lock,
                                          cloudabi_scope_t scope);

cloudabi_errno_t cloudabi_sys_mem_advise(void __user *mapping,
                                         size_t mapping_len,
                                         cloudabi_advice_t advice);

cloudabi_errno_t cloudabi_sys_mem_lock(const void __user *mapping,
                                       size_t mapping_len);

cloudabi_errno_t cloudabi_sys_mem_map(void __user *addr, size_t len,
                                      cloudabi_mprot_t prot,
                                      cloudabi_mflags_t flags, cloudabi_fd_t fd,
                                      cloudabi_filesize_t off,
                                      void __user **mem);

cloudabi_errno_t cloudabi_sys_mem_protect(void __user *mapping,
                                          size_t mapping_len,
                                          cloudabi_mprot_t prot);

cloudabi_errno_t cloudabi_sys_mem_sync(void __user *mapping, size_t mapping_len,
                                       cloudabi_msflags_t flags);

cloudabi_errno_t cloudabi_sys_mem_unlock(const void __user *mapping,
                                         size_t mapping_len);

cloudabi_errno_t cloudabi_sys_mem_unmap(void __user *mapping,
                                        size_t mapping_len);

cloudabi_errno_t cloudabi_sys_proc_exec(cloudabi_fd_t fd,
                                        const void __user *data,
                                        size_t data_len,
                                        const cloudabi_fd_t __user *fds,
                                        size_t fds_len);

void cloudabi_sys_proc_exit(cloudabi_exitcode_t rval);

cloudabi_errno_t cloudabi_sys_proc_fork(cloudabi_fd_t *fd, cloudabi_tid_t *tid);

cloudabi_errno_t cloudabi_sys_proc_raise(cloudabi_signal_t sig);

cloudabi_errno_t cloudabi_sys_random_get(void __user *buf, size_t buf_len);

cloudabi_errno_t cloudabi_sys_sock_accept(cloudabi_fd_t sock,
                                          cloudabi_sockstat_t __user *buf,
                                          cloudabi_fd_t *conn);

cloudabi_errno_t cloudabi_sys_sock_bind(cloudabi_fd_t sock, cloudabi_fd_t fd,
                                        const char __user *path,
                                        size_t path_len);

cloudabi_errno_t cloudabi_sys_sock_connect(cloudabi_fd_t sock, cloudabi_fd_t fd,
                                           const char __user *path,
                                           size_t path_len);

cloudabi_errno_t cloudabi_sys_sock_listen(cloudabi_fd_t sock,
                                          cloudabi_backlog_t backlog);

cloudabi_errno_t cloudabi_sys_sock_shutdown(cloudabi_fd_t sock,
                                            cloudabi_sdflags_t how);

cloudabi_errno_t cloudabi_sys_sock_stat_get(cloudabi_fd_t sock,
                                            cloudabi_sockstat_t __user *buf,
                                            cloudabi_ssflags_t flags);

void cloudabi_sys_thread_exit(cloudabi_lock_t __user *lock,
                              cloudabi_scope_t scope);

cloudabi_errno_t cloudabi_sys_thread_yield(void);

#endif
