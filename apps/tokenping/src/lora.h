/*
**   Copyright 2016 Telenor Digital AS
**
**  Licensed under the Apache License, Version 2.0 (the "License");
**  you may not use this file except in compliance with the License.
**  You may obtain a copy of the License at
**
**      http://www.apache.org/licenses/LICENSE-2.0
**
**  Unless required by applicable law or agreed to in writing, software
**  distributed under the License is distributed on an "AS IS" BASIS,
**  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**  See the License for the specific language governing permissions and
**  limitations under the License.
*/

#pragma once

void init_lora();
void lora_send(const void* buf, int len);

#define LORAWAN_DEVICE_EUI { 0x00, 0x09, 0x09, 0x00, 0x00, 0x01, 0x49, 0xde }
#define LORAWAN_APP_KEY { 0xb7, 0xe2, 0xca, 0xaa, 0x67, 0x1d, 0x40, 0xa2, 0xec, 0x0e, 0xf5, 0x94, 0x44, 0x16, 0x73, 0x96 }
#define LORAWAN_APP_EUI { 0x74, 0x28, 0x90, 0x48, 0x16, 0x42, 0x94, 0x47 }
