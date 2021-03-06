/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString, NSMutableDictionary, NSDictionary;

@interface BWVariableFrameRateParameters : NSObject {

	NSString* _portType;
	int _motionThreshold;
	NSMutableDictionary* _aeMaxGain;

}

@property (nonatomic,readonly) NSString * portType;                   //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) int motionThreshold;                   //@synthesize motionThreshold=_motionThreshold - In the implementation block
@property (nonatomic,readonly) NSDictionary * aeMaxGain;              //@synthesize aeMaxGain=_aeMaxGain - In the implementation block
-(id)description;
-(void)dealloc;
-(NSString *)portType;
-(NSDictionary *)aeMaxGain;
-(id)initWithPortType:(id)arg1 sensorIDDictionary:(id)arg2 ;
-(int)motionThreshold;
@end

