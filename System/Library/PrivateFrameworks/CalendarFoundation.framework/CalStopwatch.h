/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:39 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSMutableDictionary;

@interface CalStopwatch : NSObject {

	BOOL _isRunning;
	unsigned long long _lastStartTime;
	unsigned long long _elapsedTime;
	BOOL _hasValidElapsedTime;
	NSMutableDictionary* _events;
	BOOL _usesSignalFlags;

}

@property (assign) BOOL usesSignalFlags;              //@synthesize usesSignalFlags=_usesSignalFlags - In the implementation block
-(id)description;
-(id)init;
-(void)start;
-(void)stop;
-(void)reset;
-(unsigned long long)elapsedTimeInNanoseconds;
-(unsigned long long)elapsedTimeAsNumber:(int)arg1 ;
-(BOOL)usesSignalFlags;
-(id)elapsedTimeAsString:(int)arg1 ;
-(void)markEventStart:(id)arg1 ;
-(double)markEventSplit:(id)arg1 ;
-(double)markEventEnd:(id)arg1 ;
-(void)setUsesSignalFlags:(BOOL)arg1 ;
@end

