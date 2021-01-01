/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VNProcessingDevice : NSObject <NSCopying>
+(id)allDevices;
+(void)forcedCleanup;
+(void)_lockStaticObjectsAccessLock;
+(void)_unlockStaticObjectsAccessLock;
+(id)defaultDevice;
+(id)defaultCPUDevice;
+(id)defaultMetalDevice;
+(id)deviceForMetalDevice:(id)arg1 ;
+(id)defaultANEDevice;
+(id)directANEDevice;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)metalDevice;
-(BOOL)targetsANE;
-(int)espressoStorageType;
-(BOOL)targetsGPU;
-(int)espressoDeviceID;
-(int)espressoEngine;
-(BOOL)targetsCPU;
@end

