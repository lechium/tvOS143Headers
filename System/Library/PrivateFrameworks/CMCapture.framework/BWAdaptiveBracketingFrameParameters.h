/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:29 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface BWAdaptiveBracketingFrameParameters : NSObject {

	int _integrationTimeInMicroseconds;
	float _gain;
	int _maxAGC;

}

@property (nonatomic,readonly) int integrationTimeInMiroseconds; 
@property (nonatomic,readonly) double integrationTimeInSeconds; 
@property (nonatomic,readonly) float gain; 
@property (nonatomic,readonly) int maxAGC; 
+(id)frameParametersWithIntegrationTimeInSeconds:(double)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
+(id)frameParametersWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
-(float)gain;
-(id)initWithIntegrationTimeInMicroseconds:(int)arg1 gain:(float)arg2 maxAGC:(int)arg3 ;
-(int)integrationTimeInMiroseconds;
-(double)integrationTimeInSeconds;
-(int)maxAGC;
@end
