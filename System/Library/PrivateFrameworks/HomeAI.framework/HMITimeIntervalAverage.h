/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <HMFoundation/HMFObject.h>

@class MovingAverage;

@interface HMITimeIntervalAverage : HMFObject {

	MovingAverage* _average;

}
-(double)value;
-(void)addValue:(double)arg1 ;
-(id)initWithMaxCapacity:(long long)arg1 ;
-(double)valueForInterval:(double)arg1 defaultValue:(double)arg2 ;
@end
