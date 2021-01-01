/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetalTools/MTLToolsObject.h>
#import <libobjc.A.dylib/MTLSamplerState.h>
#import <libobjc.A.dylib/MTLSamplerStateSPI.h>

@class NSString;

@interface MTLToolsSamplerState : MTLToolsObject <MTLSamplerState, MTLSamplerStateSPI>

@property (readonly) NSString * label; 
@property (readonly) id<MTLDevice> device; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long resourceIndex; 
@property (nonatomic,readonly) unsigned long long gpuAddress; 
@property (readonly) unsigned long long uniqueIdentifier; 
-(unsigned long long)uniqueIdentifier;
-(NSString *)label;
-(id<MTLDevice>)device;
-(unsigned long long)gpuAddress;
-(unsigned long long)resourceIndex;
@end

