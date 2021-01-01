/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/LoggingSupport.framework/LoggingSupport
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <LoggingSupport/LoggingSupport-Structs.h>
#import <LoggingSupport/OSLogEventStreamBase.h>

@class _OSLogCatalogFilter, _OSLogIndex, OSLogEventSource, NSPredicate;

@interface OSLogEventStream : OSLogEventStreamBase {

	_OSLogCatalogFilter* _catalogFilter;
	_OSLogIndex* _index;
	OSLogEventSource* _source;
	os_timesync_db_sRef _tsdb;

}

@property (nonatomic,retain) _OSLogIndex * index;                              //@synthesize index=_index - In the implementation block
@property (assign,nonatomic) os_timesync_db_sRef tsdb;                         //@synthesize tsdb=_tsdb - In the implementation block
@property (nonatomic,retain) _OSLogCatalogFilter * catalogFilter;              //@synthesize catalogFilter=_catalogFilter - In the implementation block
@property (nonatomic,readonly) OSLogEventSource * source;                      //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) unsigned long long flags; 
@property (nonatomic,copy) NSPredicate * filterPredicate; 
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> target; 
-(void)dealloc;
-(OSLogEventSource *)source;
-(_OSLogIndex *)index;
-(void)setIndex:(_OSLogIndex *)arg1 ;
-(id)initWithSource:(id)arg1 ;
-(void)setFilterPredicate:(NSPredicate *)arg1 ;
-(void)activateStreamFromDate:(id)arg1 ;
-(void)_foreachIndexFile:(/*^block*/id)arg1 ;
-(id)_initWithSource:(id)arg1 flags:(unsigned long long)arg2 ;
-(id)initWithSource:(id)arg1 skipNonSignpostFiles:(BOOL)arg2 ;
-(void)_activateStreamInRange:(os_timesync_range_s*)arg1 ;
-(void)_activateStreamFromTimeIntervalSinceLastBoot:(double)arg1 ;
-(void)activateStreamFromLastBoot;
-(void)activateStreamFromPosition:(id)arg1 ;
-(_OSLogCatalogFilter *)catalogFilter;
-(void)setCatalogFilter:(_OSLogCatalogFilter *)arg1 ;
-(os_timesync_db_sRef)tsdb;
-(void)setTsdb:(os_timesync_db_sRef)arg1 ;
@end

