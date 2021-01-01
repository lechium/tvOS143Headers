/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/CloudMediaServicesQueueController.framework/CloudMediaServicesQueueController
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MSMRMediaRemoteCommandHandlerDelegate;
@interface CMSMRMediaRemoteCommandHandler : NSObject {

	void* _commandHandlerIdentifier;
	id<MSMRMediaRemoteCommandHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MSMRMediaRemoteCommandHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(id<MSMRMediaRemoteCommandHandlerDelegate>)delegate;
-(void)setDelegate:(id<MSMRMediaRemoteCommandHandlerDelegate>)arg1 ;
-(void)_setupMRCommandHandlers;
-(unsigned)_handleRemoteCommand:(unsigned)arg1 options:(id)arg2 ;
-(void)setRemoteHandlerDelegate:(id)arg1 ;
-(void)setupAgoraCanbeNowPlayingApp;
@end

