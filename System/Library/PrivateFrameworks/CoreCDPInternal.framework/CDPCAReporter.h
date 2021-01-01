/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
@class NSString, NSMutableDictionary;

@interface CDPCAReporter : NSObject {

	NSString* _eventName;
	NSMutableDictionary* _reportData;
	unsigned long long _initTime;
	mach_timebase_info _clock_timebase;

}
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(id)initWithEvent:(id)arg1 ;
-(double)machAbsoluteTimeToTimeInterval:(unsigned long long)arg1 ;
-(void)sendReport;
@end

