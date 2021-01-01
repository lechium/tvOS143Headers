/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:00 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HomeAI/HomeAI-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMIVideoRetimerDelegate.h>

@class NSString;

@interface HMIVideoRetimerDelegateAdapter : HMFObject <HMIVideoRetimerDelegate> {

	/*^block*/id _retimerDidRetimeSampleBuffer;

}

@property (copy) id retimerDidRetimeSampleBuffer;                   //@synthesize retimerDidRetimeSampleBuffer=_retimerDidRetimeSampleBuffer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)retimer:(id)arg1 didRetimeSampleBuffer:(opaqueCMSampleBufferRef)arg2 ;
-(id)retimerDidRetimeSampleBuffer;
-(void)setRetimerDidRetimeSampleBuffer:(id)arg1 ;
@end

