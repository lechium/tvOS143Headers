/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@interface RBProcessCPUMinimumLimits : NSObject {

	unsigned long long _percentage;
	unsigned long long _duration;

}

@property (nonatomic,readonly) unsigned long long percentage;              //@synthesize percentage=_percentage - In the implementation block
@property (nonatomic,readonly) unsigned long long duration;                //@synthesize duration=_duration - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)duration;
-(unsigned long long)percentage;
-(id)unionLimit:(id)arg1 ;
-(id)initWithPercentage:(unsigned long long)arg1 duration:(unsigned long long)arg2 ;
@end
