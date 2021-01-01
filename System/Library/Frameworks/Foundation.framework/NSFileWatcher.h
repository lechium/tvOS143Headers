/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:06:47 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, OS_dispatch_source;
#import <Foundation/Foundation-Structs.h>
@class NSObject, NSURL, NSFileWatcherObservations, NSMutableDictionary, NSString;

@interface NSFileWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	SCD_Struct_NS0 _auditToken;
	NSURL* _url;
	/*^block*/id _observer;
	BOOL _isWatching;
	NSObject*<OS_dispatch_source> _eventSource;
	unsigned long long _lastObservedEventID;
	FSEventStreamRef _eventStream;
	BOOL _eventsAreAboutDirectory;
	BOOL _isUnsettled;
	NSFileWatcherObservations* _itemObservations;
	NSMutableDictionary* _subitemObservationsByEventPath;
	NSURL* _fileReferenceURL;
	NSString* _formerPath;
	NSURL* _formerURL;

}
-(void)dealloc;
-(void)setURL:(id)arg1 ;
-(void)start;
-(void)stop;
-(void)setObserver:(/*^block*/id)arg1 ;
-(void)settle;
-(id)initWithQueue:(id)arg1 auditToken:(SCD_Struct_NS0)arg2 ;
-(void)setLastObservedEventID:(unsigned long long)arg1 ;
-(void)watchItem;
-(void)_coalesceSubitemObservations;
-(void)handleFSEventPath:(id)arg1 flags:(unsigned)arg2 id:(unsigned long long)arg3 ;
-(void)unsettle;
@end

