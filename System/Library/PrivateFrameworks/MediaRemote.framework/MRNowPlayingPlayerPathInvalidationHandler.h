/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue;
@class MRPlayerPath, NSObject;

@interface MRNowPlayingPlayerPathInvalidationHandler : NSObject {

	MRPlayerPath* _playerPath;
	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _callback;

}

@property (nonatomic,readonly) MRPlayerPath * playerPath;                       //@synthesize playerPath=_playerPath - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,readonly) id callback;                                     //@synthesize callback=_callback - In the implementation block
-(id)description;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)callback;
-(MRPlayerPath *)playerPath;
-(id)initWithPlayerPath:(id)arg1 queue:(id)arg2 invalidationCallback:(/*^block*/id)arg3 ;
@end
