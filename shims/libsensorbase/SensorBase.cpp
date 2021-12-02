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

#include "SensorBase.h"

/* Back Sensor */
extern "C" int _ZN7android22ExynosSensorIMX240_2P2C1Ev();
extern "C" int _ZN7android22ExynosSensorIMX240_2P2C2Ev();
extern "C" int _ZN7android20ExynosSensorInfoBaseC1Ev();
extern "C" int _ZN7android20ExynosSensorInfoBaseC2Ev();

extern "C" int _ZN7android20ExynosBensorInfoBaseC1Ev() {
   return _ZN7android20ExynosSensorInfoBaseC1Ev();
}

extern "C" int _ZN7android20ExynosBensorInfoBaseC2Ev() {
   return _ZN7android20ExynosSensorInfoBaseC2Ev();
}

extern "C" int _ZN7android18ExynosBensorS5K3P3C1Ev() {
    return _ZN7android22ExynosSensorIMX240_2P2C1Ev();
}
extern "C" int _ZN7android18ExynosBensorS5K3P3C2Ev() {
    return _ZN7android22ExynosSensorIMX240_2P2C2Ev();
}

/* Re-route *ZoomRatio parameter */

void setZoomRatioList(int *list, int len, float maxZoomRatio)
{
    float zoom_ratio_delta = pow(maxZoomRatio, 1.0f / len);

    for (int i = 0; i <= len; i++) {
        list[i] = (int)(pow(zoom_ratio_delta, i) * 1000);
        ALOGV("INFO(%s):list[%d]:(%d), (%f)", __func__, i, list[i], (float)((float)list[i] / 1000));
    }
}

extern "C" {
  ssize_t _ZN7android16getZoomRatioBistERNS_7String8EiiPi(android::String8 & string8Buf, int maxZoom, int maxZoomRatio, int *list) {
    bool flagFirst = true;
    char strBuf[32];
    int cur = 0;
    int step = maxZoom - 1;
    maxZoomRatio = 1000;
    setZoomRatioList(list, maxZoom - 1, (float)(maxZoomRatio / 1000));
    for (int i = 0; i < step; i++) {
        cur = (int)(list[i] / 10);
        snprintf(strBuf, sizeof(strBuf), "%d", cur);
        string8Buf.append(strBuf);
        string8Buf.append(",");
    }
    snprintf(strBuf, sizeof(strBuf), "%d", (maxZoomRatio / 10));
    string8Buf.append(strBuf);
    /* ex : "100,130,160,190,220,250,280,310,340,360,400" */
    return android::NO_ERROR;
  }
}


