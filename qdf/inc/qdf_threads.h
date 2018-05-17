/*
 * Copyright (c) 2014-2017 The Linux Foundation. All rights reserved.
 *
 * Permission to use, copy, modify, and/or distribute this software for
 * any purpose with or without fee is hereby granted, provided that the
 * above copyright notice and this permission notice appear in all
 * copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL
 * WARRANTIES WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED
 * WARRANTIES OF MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE
 * AUTHOR BE LIABLE FOR ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL
 * DAMAGES OR ANY DAMAGES WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR
 * PROFITS, WHETHER IN AN ACTION OF CONTRACT, NEGLIGENCE OR OTHER
 * TORTIOUS ACTION, ARISING OUT OF OR IN CONNECTION WITH THE USE OR
 * PERFORMANCE OF THIS SOFTWARE.
 */

/**
 * DOC:  qdf_threads
 * QCA driver framework (QDF) thread related APIs
 */

#if !defined(__QDF_THREADS_H)
#define __QDF_THREADS_H

#include <qdf_types.h>
#include "i_qdf_threads.h"

typedef __qdf_thread_t qdf_thread_t;

/* Function declarations and documenation */

void qdf_sleep(uint32_t ms_interval);

void qdf_sleep_us(uint32_t us_interval);

void qdf_busy_wait(uint32_t us_interval);

/**
 * qdf_print_stack_trace_thread() - prints the stack trace of the given thread
 * @thread: the thread for which the stack trace will be printed
 *
 * Return: None
 */
void qdf_print_thread_trace(qdf_thread_t *thread);

/**
 * qdf_get_current_task() - get current task struct
 *
 * Return: pointer to task struct
 */
qdf_thread_t *qdf_get_current_task(void);
#endif /* __QDF_THREADS_H */
