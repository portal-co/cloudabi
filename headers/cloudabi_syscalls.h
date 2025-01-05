// Copyright (c) 2016-2019 Nuxi (https://nuxi.nl/) and contributors.
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

#include "cloudabi_types.h"

#ifdef __cplusplus
extern "C" {
#endif

cloudabi_errno_t cloudabi_sys_clock_res_get(cloudabi_clockid_t clock_id,
                                            cloudabi_timestamp_t *resolution);

cloudabi_errno_t cloudabi_sys_clock_time_get(cloudabi_clockid_t clock_id,
                                             cloudabi_timestamp_t precision,
                                             cloudabi_timestamp_t *time);

cloudabi_errno_t cloudabi_sys_condvar_signal(
    _Atomic(cloudabi_condvar_t) *condvar, cloudabi_scope_t scope,
    cloudabi_nthreads_t nwaiters);

cloudabi_errno_t cloudabi_sys_fd_close(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_fd_create1(cloudabi_filetype_t type,
                                         cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_fd_create2(cloudabi_filetype_t type,
                                         cloudabi_fd_t *fd1,
                                         cloudabi_fd_t *fd2);

cloudabi_errno_t cloudabi_sys_fd_datasync(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_fd_dispatch(cloudabi_fd_t control,
                                          cloudabi_fd_t *real);

cloudabi_errno_t cloudabi_sys_fd_dup(cloudabi_fd_t from, cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_fd_pread(cloudabi_fd_t fd,
                                       const cloudabi_iovec_t *iovs,
                                       size_t iovs_len,
                                       cloudabi_filesize_t offset,
                                       size_t *nread);

cloudabi_errno_t cloudabi_sys_fd_pwrite(cloudabi_fd_t fd,
                                        const cloudabi_ciovec_t *iovs,
                                        size_t iovs_len,
                                        cloudabi_filesize_t offset,
                                        size_t *nwritten);

cloudabi_errno_t cloudabi_sys_fd_read(cloudabi_fd_t fd,
                                      const cloudabi_iovec_t *iovs,
                                      size_t iovs_len, size_t *nread);

cloudabi_errno_t cloudabi_sys_fd_replace(cloudabi_fd_t from, cloudabi_fd_t to);

cloudabi_errno_t cloudabi_sys_fd_seek(cloudabi_fd_t fd,
                                      cloudabi_filedelta_t offset,
                                      cloudabi_whence_t whence,
                                      cloudabi_filesize_t *newoffset);

cloudabi_errno_t cloudabi_sys_fd_stat_get(cloudabi_fd_t fd,
                                          cloudabi_fdstat_t *buf);

cloudabi_errno_t cloudabi_sys_fd_stat_put(cloudabi_fd_t fd,
                                          const cloudabi_fdstat_t *buf,
                                          cloudabi_fdsflags_t flags);

cloudabi_errno_t cloudabi_sys_fd_sync(cloudabi_fd_t fd);

cloudabi_errno_t cloudabi_sys_fd_write(cloudabi_fd_t fd,
                                       const cloudabi_ciovec_t *iovs,
                                       size_t iovs_len, size_t *nwritten);

cloudabi_errno_t cloudabi_sys_file_advise(cloudabi_fd_t fd,
                                          cloudabi_filesize_t offset,
                                          cloudabi_filesize_t len,
                                          cloudabi_advice_t advice);

cloudabi_errno_t cloudabi_sys_file_allocate(cloudabi_fd_t fd,
                                            cloudabi_filesize_t offset,
                                            cloudabi_filesize_t len);

cloudabi_errno_t cloudabi_sys_file_create(cloudabi_fd_t fd, const char *path,
                                          size_t path_len,
                                          cloudabi_filetype_t type);

cloudabi_errno_t cloudabi_sys_file_link(cloudabi_lookup_t fd1,
                                        const char *path1, size_t path1_len,
                                        cloudabi_fd_t fd2, const char *path2,
                                        size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_open(cloudabi_lookup_t dirfd,
                                        const char *path, size_t path_len,
                                        cloudabi_oflags_t oflags,
                                        const cloudabi_fdstat_t *fds,
                                        cloudabi_fd_t *fd);

cloudabi_errno_t cloudabi_sys_file_readdir(cloudabi_fd_t fd, void *buf,
                                           size_t buf_len,
                                           cloudabi_dircookie_t cookie,
                                           size_t *bufused);

cloudabi_errno_t cloudabi_sys_file_readlink(cloudabi_fd_t fd, const char *path,
                                            size_t path_len, char *buf,
                                            size_t buf_len, size_t *bufused);

cloudabi_errno_t cloudabi_sys_file_rename(cloudabi_fd_t fd1, const char *path1,
                                          size_t path1_len, cloudabi_fd_t fd2,
                                          const char *path2, size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_stat_fget(cloudabi_fd_t fd,
                                             cloudabi_filestat_t *buf);

cloudabi_errno_t cloudabi_sys_file_stat_fput(cloudabi_fd_t fd,
                                             const cloudabi_filestat_t *buf,
                                             cloudabi_fsflags_t flags);

cloudabi_errno_t cloudabi_sys_file_stat_get(cloudabi_lookup_t fd,
                                            const char *path, size_t path_len,
                                            cloudabi_filestat_t *buf);

cloudabi_errno_t cloudabi_sys_file_stat_put(cloudabi_lookup_t fd,
                                            const char *path, size_t path_len,
                                            const cloudabi_filestat_t *buf,
                                            cloudabi_fsflags_t flags);

cloudabi_errno_t cloudabi_sys_file_symlink(const char *path1, size_t path1_len,
                                           cloudabi_fd_t fd, const char *path2,
                                           size_t path2_len);

cloudabi_errno_t cloudabi_sys_file_unlink(cloudabi_fd_t fd, const char *path,
                                          size_t path_len,
                                          cloudabi_ulflags_t flags);

cloudabi_errno_t cloudabi_sys_lock_unlock(_Atomic(cloudabi_lock_t) *lock,
                                          cloudabi_scope_t scope);

cloudabi_errno_t cloudabi_sys_mem_advise(void *mapping, size_t mapping_len,
                                         cloudabi_advice_t advice);

cloudabi_errno_t cloudabi_sys_mem_map(void *addr, size_t len,
                                      cloudabi_mprot_t prot,
                                      cloudabi_mflags_t flags, cloudabi_fd_t fd,
                                      cloudabi_filesize_t off, void **mem);

cloudabi_errno_t cloudabi_sys_mem_protect(void *mapping, size_t mapping_len,
                                          cloudabi_mprot_t prot);

cloudabi_errno_t cloudabi_sys_mem_sync(void *mapping, size_t mapping_len,
                                       cloudabi_msflags_t flags);

cloudabi_errno_t cloudabi_sys_mem_unmap(void *mapping, size_t mapping_len);

cloudabi_errno_t cloudabi_sys_poll(const cloudabi_subscription_t *in,
                                   cloudabi_event_t *out, size_t nsubscriptions,
                                   size_t *nevents);

cloudabi_errno_t cloudabi_sys_proc_exec(cloudabi_fd_t fd, const void *data,
                                        size_t data_len,
                                        const cloudabi_fd_t *fds,
                                        size_t fds_len);

_Noreturn void cloudabi_sys_proc_exit(cloudabi_exitcode_t rval);

cloudabi_errno_t cloudabi_sys_proc_fork(cloudabi_fd_t *fd, cloudabi_tid_t *tid);

cloudabi_errno_t cloudabi_sys_proc_raise(cloudabi_signal_t sig);

cloudabi_errno_t cloudabi_sys_random_get(void *buf, size_t buf_len);

cloudabi_errno_t cloudabi_sys_sock_recv(cloudabi_fd_t sock,
                                        const cloudabi_recv_in_t *in,
                                        cloudabi_recv_out_t *out);

cloudabi_errno_t cloudabi_sys_sock_send(cloudabi_fd_t sock,
                                        const cloudabi_send_in_t *in,
                                        cloudabi_send_out_t *out);

cloudabi_errno_t cloudabi_sys_sock_shutdown(cloudabi_fd_t sock,
                                            cloudabi_sdflags_t how);

cloudabi_errno_t cloudabi_sys_thread_create(cloudabi_threadattr_t *attr,
                                            cloudabi_tid_t *tid);

_Noreturn void cloudabi_sys_thread_exit(_Atomic(cloudabi_lock_t) *lock,
                                        cloudabi_scope_t scope);

cloudabi_errno_t cloudabi_sys_thread_yield(void);

#ifdef __cplusplus
}  // extern "C"
#endif

#endif
