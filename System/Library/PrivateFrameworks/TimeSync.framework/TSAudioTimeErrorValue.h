/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:01 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TimeSync.framework/TimeSync
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface TSAudioTimeErrorValue : NSObject {

	double _sampleTimestamp;
	double _timeError;

}

@property (nonatomic,readonly) double sampleTimestamp;              //@synthesize sampleTimestamp=_sampleTimestamp - In the implementation block
@property (nonatomic,readonly) double timeError;                    //@synthesize timeError=_timeError - In the implementation block
-(id)description;
-(id)initWithSampleTimestamp:(double)arg1 andTimeError:(double)arg2 ;
-(double)sampleTimestamp;
-(double)timeError;
@end

