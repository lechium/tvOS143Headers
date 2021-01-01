/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:23 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Vision.framework/Vision
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Vision/VNVideoProcessorCadence.h>

@interface VNVideoProcessorFrameRateCadence : VNVideoProcessorCadence {

	long long _frameRate;

}

@property (readonly) long long frameRate;              //@synthesize frameRate=_frameRate - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(long long)frameRate;
-(void)populateVCPVideoProcessorRequestConfiguration:(id)arg1 ;
-(id)initWithFrameRate:(long long)arg1 ;
@end

