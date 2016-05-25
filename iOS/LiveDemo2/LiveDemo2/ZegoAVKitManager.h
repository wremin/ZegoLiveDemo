//
//  ZegoAVKitManager.h
//  LiveDemo
//
//  Copyright © 2015年 Zego. All rights reserved.
//

#pragma once

#ifdef __cplusplus
extern "C"{
#endif
    
#include <ZegoAVKit2/ZegoLiveApi.h>


ZegoLiveApi * getZegoAV_ShareInstance();
void releaseZegoAV_ShareInstance();
void ZegoDemoSetCustomAppIDAndSign(uint32 appid, NSString* strSign);
void setTestServer(NSString *ip, int port, NSString *url);
    
    
#ifdef __cplusplus
}
#endif