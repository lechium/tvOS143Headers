/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MNVoiceEventQueueDelegate;
@class NSMutableArray;

@interface MNVoiceEventQueue : NSObject {

	NSMutableArray* _queue;
	id<MNVoiceEventQueueDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNVoiceEventQueueDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<MNVoiceEventQueueDelegate>)delegate;
-(void)setDelegate:(id<MNVoiceEventQueueDelegate>)arg1 ;
-(void)addEvent:(id)arg1 ;
-(void)removeAllEvents;
-(void)_removeEventsMatching:(id)arg1 includeEventToMatch:(BOOL)arg2 ;
-(BOOL)hasAnotherEvent;
-(id)dequeueNextEvent;
@end

