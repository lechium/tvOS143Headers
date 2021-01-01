/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:16:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol OS_dispatch_queue, CSRemoteControlClientDelegate;
@class NSObject;

@interface CSRemoteControlClient : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<CSRemoteControlClientDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CSRemoteControlClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(void)dealloc;
-(id<CSRemoteControlClientDelegate>)delegate;
-(void)setDelegate:(id<CSRemoteControlClientDelegate>)arg1 ;
-(BOOL)isConnected;
-(BOOL)waitingForConnection:(double)arg1 error:(id*)arg2 ;
@end

