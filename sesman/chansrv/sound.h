/**
 * xrdp: A Remote Desktop Protocol server.
 *
 * Copyright (C) Jay Sorg 2009-2013
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef _SOUND_H_
#define _SOUND_H_

#if defined(XRDP_SIMPLESOUND)
#include <pulse/simple.h>
#include <pulse/error.h>
#endif

#include "arch.h"
#include "parse.h"
#include "os_calls.h"
#include "chansrv.h"
#include "trans.h"

#define SNDC_CLOSE          0x01
#define SNDC_WAVE           0x02
#define SNDC_SETVOLUME      0x03
#define SNDC_SETPITCH       0x04
#define SNDC_WAVECONFIRM    0x05
#define SNDC_TRAINING       0x06
#define SNDC_FORMATS        0x07
#define SNDC_CRYPTKEY       0x08
#define SNDC_WAVEENCRYPT    0x09
#define SNDC_UDPWAVE        0x0A
#define SNDC_UDPWAVELAST    0x0B
#define SNDC_QUALITYMODE    0x0C

int APP_CC
sound_init(void);
int APP_CC
sound_deinit(void);
int APP_CC
sound_get_wait_objs(tbus* objs, int* count, int* timeout);
int APP_CC
sound_check_wait_objs(void);
int APP_CC
sound_data_in(struct stream* s, int chan_id, int chan_flags,
              int length, int total_length);

#endif
