/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:20 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class BRQueryItem, NSObject, NSProgress;

@interface BRQueryItemProgressObserver : NSObject {

	BRQueryItem* _item;
	NSObject*<OS_dispatch_queue> _queue;
	id _subscriber;
	NSProgress* _progress;
	BOOL _started;
	BOOL _isUpload;
	/*^block*/id _progressHandler;

}

@property (nonatomic,copy) id progressHandler;                  //@synthesize progressHandler=_progressHandler - In the implementation block
@property (nonatomic,readonly) BRQueryItem * item;              //@synthesize item=_item - In the implementation block
-(id)description;
-(void)dealloc;
-(void)start;
-(void)stop;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BRQueryItem *)item;
-(void)setQueue:(id)arg1 ;
-(id)progressHandler;
-(void)setProgressHandler:(id)arg1 ;
-(id)initWithItem:(id)arg1 ;
-(void)_stopObserving;
-(void)_subscribe;
@end

