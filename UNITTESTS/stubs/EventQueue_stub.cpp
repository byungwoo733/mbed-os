/*
 * Copyright (c) , Arm Limited and affiliates.
 * SPDX-License-Identifier: Apache-2.0
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

#include "EventQueue.h"
#include "Callback.h"
#include "EventQueue_stub.h"

using namespace mbed;

int EventQueue_stub::int_value = 0;
unsigned EventQueue_stub::unsigned_value = 0;

namespace events {

EventQueue::EventQueue(unsigned event_size, unsigned char *event_pointer)
{
}

EventQueue::~EventQueue()
{
}

void EventQueue::dispatch(int ms)
{
}

void EventQueue::break_dispatch()
{
}

unsigned EventQueue::tick()
{
    return EventQueue_stub::unsigned_value;
}

void EventQueue::cancel(int id)
{
}

int EventQueue::time_left(int id)
{
    return EventQueue_stub::int_value;
}

void EventQueue::background(Callback<void(int)> update)
{
}

void EventQueue::chain(EventQueue *target)
{
}

} // namespace events
