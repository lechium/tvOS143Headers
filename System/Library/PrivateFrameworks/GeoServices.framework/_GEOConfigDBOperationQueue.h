/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_source;
@class GEOSQLiteDB, geo_isolater, NSMutableArray, NSObject;

@interface _GEOConfigDBOperationQueue : NSObject {

	GEOSQLiteDB* _db;
	geo_isolater* _isolator;
	NSMutableArray* _operations;
	NSObject*<OS_dispatch_source> _timer;

}
-(void)dealloc;
-(void)flush;
-(id)init:(id)arg1 ;
-(void)scheduleTimer;
-(void)cancelTimer;
-(void)enqueueOperation:(id)arg1 ;
@end
