/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class NSString;


@protocol MTLCounterSampleBuffer <NSObject>
@property (readonly) id<MTLDevice> device; 
@property (readonly) NSString * label; 
@property (readonly) unsigned long long sampleCount; 
@required
-(NSString *)label;
-(id<MTLDevice>)device;
-(unsigned long long)sampleCount;
-(id)resolveCounterRange:(NSRange)arg1;

@end

