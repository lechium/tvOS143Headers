/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Trial.framework/Trial
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <Trial/Trial-Structs.h>
@interface TRIStopwatch : NSObject {

	unsigned long long _start_time;
	mach_timebase_info _time_info;

}
+(id)start;
-(id)init;
-(unsigned)elapsed_ms;
@end
