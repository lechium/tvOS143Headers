/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Foundation/NSOperation.h>

@class ASORemoteOverlay;

@interface ASOPresentRemoteOverlayOperation : NSOperation {

	BOOL _isExecuting;
	BOOL _isFinished;
	ASORemoteOverlay* _remoteOverlay;

}

@property (assign) BOOL isExecuting;                                        //@synthesize isExecuting=_isExecuting - In the implementation block
@property (assign) BOOL isFinished;                                         //@synthesize isFinished=_isFinished - In the implementation block
@property (nonatomic,retain) ASORemoteOverlay * remoteOverlay;              //@synthesize remoteOverlay=_remoteOverlay - In the implementation block
-(void)cancel;
-(void)start;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(void)setIsExecuting:(BOOL)arg1 ;
-(void)setIsFinished:(BOOL)arg1 ;
-(ASORemoteOverlay *)remoteOverlay;
-(void)finishExecuting;
-(id)initWithRemoteOverlay:(id)arg1 ;
-(void)setRemoteOverlay:(ASORemoteOverlay *)arg1 ;
@end

