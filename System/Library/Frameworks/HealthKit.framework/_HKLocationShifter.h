/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject;

@interface _HKLocationShifter : NSObject {

	NSObject*<OS_dispatch_queue> _queue;

}
+(BOOL)isShiftRequiredForLocations:(id)arg1 ;
-(id)init;
-(void)shiftLocations:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
@end
