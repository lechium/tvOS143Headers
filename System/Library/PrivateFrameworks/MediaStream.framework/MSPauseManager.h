/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:48 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSPauseManagerDelegate;
@class NSMutableDictionary;

@interface MSPauseManager : NSObject {

	NSMutableDictionary* _UUIDToTimerMap;
	id<MSPauseManagerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSPauseManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id<MSPauseManagerDelegate>)delegate;
-(void)setDelegate:(id<MSPauseManagerDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)_addPauseUUID:(id)arg1 ;
-(void)pingPauseUUID:(id)arg1 ;
-(void)_removeTimerUUID:(id)arg1 ;
-(void)_timerDidFire:(id)arg1 ;
-(void)unpauseUUID:(id)arg1 ;
@end
