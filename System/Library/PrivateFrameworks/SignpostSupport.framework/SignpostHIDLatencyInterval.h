/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <SignpostSupport/SignpostAnimationSubInterval.h>
#import <SignpostSupport/SignpostCARenderServerFrameMetadata.h>

@interface SignpostHIDLatencyInterval : SignpostAnimationSubInterval <SignpostCARenderServerFrameMetadata> {

	unsigned _swapId;
	unsigned _frameSeed;

}

@property (nonatomic,readonly) unsigned swapId;                 //@synthesize swapId=_swapId - In the implementation block
@property (nonatomic,readonly) unsigned frameSeed;              //@synthesize frameSeed=_frameSeed - In the implementation block
-(unsigned)frameSeed;
-(id)initWithHIDLatencyInterval:(id)arg1 ;
-(unsigned)swapId;
-(id)initWithStartMCT:(unsigned long long)arg1 endMCT:(unsigned long long)arg2 timebaseRatio:(double)arg3 swapID:(unsigned)arg4 frameSeed:(unsigned)arg5 ;
@end
