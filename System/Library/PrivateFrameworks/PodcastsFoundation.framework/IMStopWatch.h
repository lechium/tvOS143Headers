/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSString;

@interface IMStopWatch : NSObject {

	unsigned long long _startTime;
	NSString* _descriptionString;

}
+(void)initialize;
+(id)stopwatchWithDescription:(id)arg1 ;
+(id)stopwatch;
-(id)description;
-(id)init;
-(void)start;
-(void)report;
-(void)reset;
-(double)time;
-(void)setDescription:(id)arg1 ;
-(void)reportWithMarker:(id)arg1 ;
@end

