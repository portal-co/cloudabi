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

#ifndef CLOUDABI_SYSCALLS_INFO_H
#define CLOUDABI_SYSCALLS_INFO_H

#define CLOUDABI_SYSCALL_NAMES(SYSCALL) \
  SYSCALL(clock_res_get)                \
  SYSCALL(clock_time_get)               \
  SYSCALL(condvar_signal)               \
  SYSCALL(fd_close)                     \
  SYSCALL(fd_create1)                   \
  SYSCALL(fd_create2)                   \
  SYSCALL(fd_datasync)                  \
  SYSCALL(fd_dup)                       \
  SYSCALL(fd_pread)                     \
  SYSCALL(fd_pwrite)                    \
  SYSCALL(fd_read)                      \
  SYSCALL(fd_replace)                   \
  SYSCALL(fd_seek)                      \
  SYSCALL(fd_stat_get)                  \
  SYSCALL(fd_stat_put)                  \
  SYSCALL(fd_sync)                      \
  SYSCALL(fd_write)                     \
  SYSCALL(file_advise)                  \
  SYSCALL(file_allocate)                \
  SYSCALL(file_create)                  \
  SYSCALL(file_link)                    \
  SYSCALL(file_open)                    \
  SYSCALL(file_readdir)                 \
  SYSCALL(file_readlink)                \
  SYSCALL(file_rename)                  \
  SYSCALL(file_stat_fget)               \
  SYSCALL(file_stat_fput)               \
  SYSCALL(file_stat_get)                \
  SYSCALL(file_stat_put)                \
  SYSCALL(file_symlink)                 \
  SYSCALL(file_unlink)                  \
  SYSCALL(lock_unlock)                  \
  SYSCALL(mem_advise)                   \
  SYSCALL(mem_lock)                     \
  SYSCALL(mem_map)                      \
  SYSCALL(mem_protect)                  \
  SYSCALL(mem_sync)                     \
  SYSCALL(mem_unlock)                   \
  SYSCALL(mem_unmap)                    \
  SYSCALL(poll)                         \
  SYSCALL(poll_fd)                      \
  SYSCALL(proc_exec)                    \
  SYSCALL(proc_exit)                    \
  SYSCALL(proc_fork)                    \
  SYSCALL(proc_raise)                   \
  SYSCALL(random_get)                   \
  SYSCALL(sock_accept)                  \
  SYSCALL(sock_bind)                    \
  SYSCALL(sock_connect)                 \
  SYSCALL(sock_listen)                  \
  SYSCALL(sock_recv)                    \
  SYSCALL(sock_send)                    \
  SYSCALL(sock_shutdown)                \
  SYSCALL(sock_stat_get)                \
  SYSCALL(thread_create)                \
  SYSCALL(thread_exit)                  \
  SYSCALL(thread_yield)

#define CLOUDABI_SYSCALL_PARAMETERS_clock_res_get \
  cloudabi_clockid_t clock_id,                    \
  cloudabi_timestamp_t *resolution

#define CLOUDABI_SYSCALL_PARAMETERS_clock_time_get \
  cloudabi_clockid_t clock_id,                     \
  cloudabi_timestamp_t precision,                  \
  cloudabi_timestamp_t *time

#define CLOUDABI_SYSCALL_PARAMETERS_condvar_signal \
  _Atomic(cloudabi_condvar_t) *condvar,            \
  cloudabi_scope_t scope,                          \
  cloudabi_nthreads_t nwaiters

#define CLOUDABI_SYSCALL_PARAMETERS_fd_close \
  cloudabi_fd_t fd

#define CLOUDABI_SYSCALL_PARAMETERS_fd_create1 \
  cloudabi_filetype_t type,                    \
  cloudabi_fd_t *fd

#define CLOUDABI_SYSCALL_PARAMETERS_fd_create2 \
  cloudabi_filetype_t type,                    \
  cloudabi_fd_t *fd1,                          \
  cloudabi_fd_t *fd2

#define CLOUDABI_SYSCALL_PARAMETERS_fd_datasync \
  cloudabi_fd_t fd

#define CLOUDABI_SYSCALL_PARAMETERS_fd_dup \
  cloudabi_fd_t from,                      \
  cloudabi_fd_t *fd

#define CLOUDABI_SYSCALL_PARAMETERS_fd_pread \
  cloudabi_fd_t fd,                          \
  const cloudabi_iovec_t *iovs,              \
  size_t iovs_len,                           \
  cloudabi_filesize_t offset,                \
  size_t *nread

#define CLOUDABI_SYSCALL_PARAMETERS_fd_pwrite \
  cloudabi_fd_t fd,                           \
  const cloudabi_ciovec_t *iovs,              \
  size_t iovs_len,                            \
  cloudabi_filesize_t offset,                 \
  size_t *nwritten

#define CLOUDABI_SYSCALL_PARAMETERS_fd_read \
  cloudabi_fd_t fd,                         \
  const cloudabi_iovec_t *iovs,             \
  size_t iovs_len,                          \
  size_t *nread

#define CLOUDABI_SYSCALL_PARAMETERS_fd_replace \
  cloudabi_fd_t from,                          \
  cloudabi_fd_t to

#define CLOUDABI_SYSCALL_PARAMETERS_fd_seek \
  cloudabi_fd_t fd,                         \
  cloudabi_filedelta_t offset,              \
  cloudabi_whence_t whence,                 \
  cloudabi_filesize_t *newoffset

#define CLOUDABI_SYSCALL_PARAMETERS_fd_stat_get \
  cloudabi_fd_t fd,                             \
  cloudabi_fdstat_t *buf

#define CLOUDABI_SYSCALL_PARAMETERS_fd_stat_put \
  cloudabi_fd_t fd,                             \
  const cloudabi_fdstat_t *buf,                 \
  cloudabi_fdsflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_fd_sync \
  cloudabi_fd_t fd

#define CLOUDABI_SYSCALL_PARAMETERS_fd_write \
  cloudabi_fd_t fd,                          \
  const cloudabi_ciovec_t *iovs,             \
  size_t iovs_len,                           \
  size_t *nwritten

#define CLOUDABI_SYSCALL_PARAMETERS_file_advise \
  cloudabi_fd_t fd,                             \
  cloudabi_filesize_t offset,                   \
  cloudabi_filesize_t len,                      \
  cloudabi_advice_t advice

#define CLOUDABI_SYSCALL_PARAMETERS_file_allocate \
  cloudabi_fd_t fd,                               \
  cloudabi_filesize_t offset,                     \
  cloudabi_filesize_t len

#define CLOUDABI_SYSCALL_PARAMETERS_file_create \
  cloudabi_fd_t fd,                             \
  const char *path,                             \
  size_t path_len,                              \
  cloudabi_filetype_t type

#define CLOUDABI_SYSCALL_PARAMETERS_file_link \
  cloudabi_lookup_t fd1,                      \
  const char *path1,                          \
  size_t path1_len,                           \
  cloudabi_fd_t fd2,                          \
  const char *path2,                          \
  size_t path2_len

#define CLOUDABI_SYSCALL_PARAMETERS_file_open \
  cloudabi_lookup_t dirfd,                    \
  const char *path,                           \
  size_t path_len,                            \
  cloudabi_oflags_t oflags,                   \
  const cloudabi_fdstat_t *fds,               \
  cloudabi_fd_t *fd

#define CLOUDABI_SYSCALL_PARAMETERS_file_readdir \
  cloudabi_fd_t fd,                              \
  void *buf,                                     \
  size_t buf_len,                                \
  cloudabi_dircookie_t cookie,                   \
  size_t *bufused

#define CLOUDABI_SYSCALL_PARAMETERS_file_readlink \
  cloudabi_fd_t fd,                               \
  const char *path,                               \
  size_t path_len,                                \
  char *buf,                                      \
  size_t buf_len,                                 \
  size_t *bufused

#define CLOUDABI_SYSCALL_PARAMETERS_file_rename \
  cloudabi_fd_t fd1,                            \
  const char *path1,                            \
  size_t path1_len,                             \
  cloudabi_fd_t fd2,                            \
  const char *path2,                            \
  size_t path2_len

#define CLOUDABI_SYSCALL_PARAMETERS_file_stat_fget \
  cloudabi_fd_t fd,                                \
  cloudabi_filestat_t *buf

#define CLOUDABI_SYSCALL_PARAMETERS_file_stat_fput \
  cloudabi_fd_t fd,                                \
  const cloudabi_filestat_t *buf,                  \
  cloudabi_fsflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_file_stat_get \
  cloudabi_lookup_t fd,                           \
  const char *path,                               \
  size_t path_len,                                \
  cloudabi_filestat_t *buf

#define CLOUDABI_SYSCALL_PARAMETERS_file_stat_put \
  cloudabi_lookup_t fd,                           \
  const char *path,                               \
  size_t path_len,                                \
  const cloudabi_filestat_t *buf,                 \
  cloudabi_fsflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_file_symlink \
  const char *path1,                             \
  size_t path1_len,                              \
  cloudabi_fd_t fd,                              \
  const char *path2,                             \
  size_t path2_len

#define CLOUDABI_SYSCALL_PARAMETERS_file_unlink \
  cloudabi_fd_t fd,                             \
  const char *path,                             \
  size_t path_len,                              \
  cloudabi_ulflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_lock_unlock \
  _Atomic(cloudabi_lock_t) *lock,               \
  cloudabi_scope_t scope

#define CLOUDABI_SYSCALL_PARAMETERS_mem_advise \
  void *mapping,                               \
  size_t mapping_len,                          \
  cloudabi_advice_t advice

#define CLOUDABI_SYSCALL_PARAMETERS_mem_lock \
  const void *mapping,                       \
  size_t mapping_len

#define CLOUDABI_SYSCALL_PARAMETERS_mem_map \
  void *addr,                               \
  size_t len,                               \
  cloudabi_mprot_t prot,                    \
  cloudabi_mflags_t flags,                  \
  cloudabi_fd_t fd,                         \
  cloudabi_filesize_t off,                  \
  void **mem

#define CLOUDABI_SYSCALL_PARAMETERS_mem_protect \
  void *mapping,                                \
  size_t mapping_len,                           \
  cloudabi_mprot_t prot

#define CLOUDABI_SYSCALL_PARAMETERS_mem_sync \
  void *mapping,                             \
  size_t mapping_len,                        \
  cloudabi_msflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_mem_unlock \
  const void *mapping,                         \
  size_t mapping_len

#define CLOUDABI_SYSCALL_PARAMETERS_mem_unmap \
  void *mapping,                              \
  size_t mapping_len

#define CLOUDABI_SYSCALL_PARAMETERS_poll \
  const cloudabi_subscription_t *in,     \
  cloudabi_event_t *out,                 \
  size_t nsubscriptions,                 \
  size_t *nevents

#define CLOUDABI_SYSCALL_PARAMETERS_poll_fd \
  cloudabi_fd_t fd,                         \
  const cloudabi_subscription_t *in,        \
  size_t in_len,                            \
  cloudabi_event_t *out,                    \
  size_t out_len,                           \
  const cloudabi_subscription_t *timeout,   \
  size_t *nevents

#define CLOUDABI_SYSCALL_PARAMETERS_proc_exec \
  cloudabi_fd_t fd,                           \
  const void *data,                           \
  size_t data_len,                            \
  const cloudabi_fd_t *fds,                   \
  size_t fds_len

#define CLOUDABI_SYSCALL_PARAMETERS_proc_exit \
  cloudabi_exitcode_t rval

#define CLOUDABI_SYSCALL_PARAMETERS_proc_fork \
  cloudabi_fd_t *fd,                          \
  cloudabi_tid_t *tid

#define CLOUDABI_SYSCALL_PARAMETERS_proc_raise \
  cloudabi_signal_t sig

#define CLOUDABI_SYSCALL_PARAMETERS_random_get \
  void *buf,                                   \
  size_t buf_len

#define CLOUDABI_SYSCALL_PARAMETERS_sock_accept \
  cloudabi_fd_t sock,                           \
  cloudabi_sockstat_t *buf,                     \
  cloudabi_fd_t *conn

#define CLOUDABI_SYSCALL_PARAMETERS_sock_bind \
  cloudabi_fd_t sock,                         \
  cloudabi_fd_t fd,                           \
  const char *path,                           \
  size_t path_len

#define CLOUDABI_SYSCALL_PARAMETERS_sock_connect \
  cloudabi_fd_t sock,                            \
  cloudabi_fd_t fd,                              \
  const char *path,                              \
  size_t path_len

#define CLOUDABI_SYSCALL_PARAMETERS_sock_listen \
  cloudabi_fd_t sock,                           \
  cloudabi_backlog_t backlog

#define CLOUDABI_SYSCALL_PARAMETERS_sock_recv \
  cloudabi_fd_t sock,                         \
  const cloudabi_recv_in_t *in,               \
  cloudabi_recv_out_t *out

#define CLOUDABI_SYSCALL_PARAMETERS_sock_send \
  cloudabi_fd_t sock,                         \
  const cloudabi_send_in_t *in,               \
  cloudabi_send_out_t *out

#define CLOUDABI_SYSCALL_PARAMETERS_sock_shutdown \
  cloudabi_fd_t sock,                             \
  cloudabi_sdflags_t how

#define CLOUDABI_SYSCALL_PARAMETERS_sock_stat_get \
  cloudabi_fd_t sock,                             \
  cloudabi_sockstat_t *buf,                       \
  cloudabi_ssflags_t flags

#define CLOUDABI_SYSCALL_PARAMETERS_thread_create \
  cloudabi_threadattr_t *attr,                    \
  cloudabi_tid_t *tid

#define CLOUDABI_SYSCALL_PARAMETERS_thread_exit \
  _Atomic(cloudabi_lock_t) *lock,               \
  cloudabi_scope_t scope

#define CLOUDABI_SYSCALL_PARAMETERS_thread_yield

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_clock_res_get \
  clock_id, resolution

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_clock_time_get \
  clock_id, precision, time

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_condvar_signal \
  condvar, scope, nwaiters

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_close \
  fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_create1 \
  type, fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_create2 \
  type, fd1, fd2

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_datasync \
  fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_dup \
  from, fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_pread \
  fd, iovs, iovs_len, offset, nread

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_pwrite \
  fd, iovs, iovs_len, offset, nwritten

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_read \
  fd, iovs, iovs_len, nread

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_replace \
  from, to

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_seek \
  fd, offset, whence, newoffset

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_stat_get \
  fd, buf

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_stat_put \
  fd, buf, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_sync \
  fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_fd_write \
  fd, iovs, iovs_len, nwritten

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_advise \
  fd, offset, len, advice

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_allocate \
  fd, offset, len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_create \
  fd, path, path_len, type

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_link \
  fd1, path1, path1_len, fd2, path2, path2_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_open \
  dirfd, path, path_len, oflags, fds, fd

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_readdir \
  fd, buf, buf_len, cookie, bufused

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_readlink \
  fd, path, path_len, buf, buf_len, bufused

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_rename \
  fd1, path1, path1_len, fd2, path2, path2_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_stat_fget \
  fd, buf

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_stat_fput \
  fd, buf, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_stat_get \
  fd, path, path_len, buf

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_stat_put \
  fd, path, path_len, buf, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_symlink \
  path1, path1_len, fd, path2, path2_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_file_unlink \
  fd, path, path_len, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_lock_unlock \
  lock, scope

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_advise \
  mapping, mapping_len, advice

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_lock \
  mapping, mapping_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_map \
  addr, len, prot, flags, fd, off, mem

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_protect \
  mapping, mapping_len, prot

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_sync \
  mapping, mapping_len, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_unlock \
  mapping, mapping_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_mem_unmap \
  mapping, mapping_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_poll \
  in, out, nsubscriptions, nevents

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_poll_fd \
  fd, in, in_len, out, out_len, timeout, nevents

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_proc_exec \
  fd, data, data_len, fds, fds_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_proc_exit \
  rval

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_proc_fork \
  fd, tid

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_proc_raise \
  sig

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_random_get \
  buf, buf_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_accept \
  sock, buf, conn

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_bind \
  sock, fd, path, path_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_connect \
  sock, fd, path, path_len

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_listen \
  sock, backlog

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_recv \
  sock, in, out

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_send \
  sock, in, out

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_shutdown \
  sock, how

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_sock_stat_get \
  sock, buf, flags

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_thread_create \
  attr, tid

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_thread_exit \
  lock, scope

#define CLOUDABI_SYSCALL_PARAMETER_NAMES_thread_yield

#define CLOUDABI_SYSCALL_HAS_PARAMETERS_clock_res_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_clock_time_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_condvar_signal(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_close(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_create1(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_create2(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_datasync(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_dup(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_pread(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_pwrite(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_read(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_replace(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_seek(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_stat_put(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_sync(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_fd_write(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_advise(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_allocate(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_create(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_link(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_open(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_readdir(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_readlink(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_rename(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_stat_fget(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_stat_fput(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_stat_put(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_symlink(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_file_unlink(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_lock_unlock(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_advise(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_lock(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_map(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_protect(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_sync(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_unlock(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_mem_unmap(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_poll(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_poll_fd(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_proc_exec(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_proc_exit(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_proc_fork(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_proc_raise(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_random_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_accept(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_bind(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_connect(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_listen(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_recv(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_send(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_shutdown(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_sock_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_thread_create(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_thread_exit(yes, no) yes
#define CLOUDABI_SYSCALL_HAS_PARAMETERS_thread_yield(yes, no) no

#define CLOUDABI_SYSCALL_RETURNS_clock_res_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_clock_time_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_condvar_signal(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_close(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_create1(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_create2(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_datasync(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_dup(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_pread(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_pwrite(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_read(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_replace(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_seek(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_stat_put(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_sync(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_fd_write(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_advise(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_allocate(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_create(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_link(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_open(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_readdir(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_readlink(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_rename(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_stat_fget(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_stat_fput(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_stat_put(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_symlink(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_file_unlink(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_lock_unlock(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_advise(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_lock(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_map(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_protect(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_sync(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_unlock(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_mem_unmap(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_poll(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_poll_fd(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_proc_exec(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_proc_exit(yes, no) no
#define CLOUDABI_SYSCALL_RETURNS_proc_fork(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_proc_raise(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_random_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_accept(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_bind(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_connect(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_listen(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_recv(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_send(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_shutdown(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_sock_stat_get(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_thread_create(yes, no) yes
#define CLOUDABI_SYSCALL_RETURNS_thread_exit(yes, no) no
#define CLOUDABI_SYSCALL_RETURNS_thread_yield(yes, no) yes

#endif
