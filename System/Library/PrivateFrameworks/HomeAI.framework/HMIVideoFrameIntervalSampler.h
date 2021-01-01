/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HomeAI/HMIVideoFrameSampler.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class NSString;

@interface HMIVideoFrameIntervalSampler : HMIVideoFrameSampler <HMFLogging> {

	SCD_Struct_HM3 _interval;
	SCD_Struct_HM3 _firstPTS;
	long long _lastIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(id)initWithFrameRate:(float)arg1 ;
-(id)initWithInterval:(SCD_Struct_HM3)arg1 ;
-(void)handleSampleBuffer:(opaqueCMSampleBufferRef)arg1 ;
@end
