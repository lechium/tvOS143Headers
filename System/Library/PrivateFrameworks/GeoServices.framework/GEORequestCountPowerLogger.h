/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class NSObject, NSString, NSDate, NSMutableDictionary, GEOXPCActivity;

@interface GEORequestCountPowerLogger : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSString* _eventName;
	NSDate* _startDate;
	NSMutableDictionary* _clientInfo;
	GEOXPCActivity* _activity;

}
+(id)sharedInstance;
+(BOOL)shouldIgnoreRequestType:(int)arg1 fromClientWithId:(id)arg2 ;
+(void)cancelOldActivities;
-(id)init;
-(void)dealloc;
-(void)_flushToPowerLog;
-(void)startNewSessionWithName:(id)arg1 ;
-(void)_cancelXpcActivity;
-(void)_scheduleXpcActivity;
-(void)incrementCountForClient:(id)arg1 requestType:(int)arg2 ;
@end

