/*
 * Copyright (C) 2021 universal5433
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include <sys/types.h>

/* Back Sensor */
extern "C" int _ZN7android22ExynosSensorIMX240_2P2C1Ev();
extern "C" int _ZN7android22ExynosSensorIMX240_2P2C2Ev();

extern "C" int _ZN7android18ExynosSensorS5K4H5C1Ev() {
    return _ZN7android22ExynosSensorIMX240_2P2C1Ev();
}
extern "C" int _ZN7android18ExynosSensorS5K4H5C2Ev() {
    return _ZN7android22ExynosSensorIMX240_2P2C2Ev();
}

/* Front Sensor */
extern "C" int _ZN7android18ExynosSensorS5K6D1C1Ev();
extern "C" int _ZN7android18ExynosSensorS5K6D1C2Ev();

extern "C" int _ZN7android18ExynosSensorS5K6B2C1Ev() {
    return _ZN7android18ExynosSensorS5K6D1C1Ev();
}
extern "C" int _ZN7android18ExynosSensorS5K6B2C2Ev() {
    return _ZN7android18ExynosSensorS5K6D1C2Ev();
}



