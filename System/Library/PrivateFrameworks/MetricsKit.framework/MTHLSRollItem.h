/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <MetricsKit/MTHLSItem.h>

@interface MTHLSRollItem : MTHLSItem {

	unsigned long long _duration;

}

@property (assign,nonatomic) unsigned long long duration;              //@synthesize duration=_duration - In the implementation block
-(unsigned long long)duration;
-(void)setDuration:(unsigned long long)arg1 ;
-(id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3 ;
-(BOOL)containsOverallPosition:(unsigned long long)arg1 ;
-(unsigned long long)endOverallPosition;
@end

