/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol MREmulatedGameControllerDelegate;
@class MRGameControllerDaemonProxy, GCController;

@interface MREmulatedGameController : NSObject {

	MRGameControllerDaemonProxy* _remote;
	int _profile;
	double _buttonAUpDelay;
	id<MREmulatedGameControllerDelegate> _delegate;
	GCController* _controller;

}

@property (nonatomic,retain) GCController * controller;                                         //@synthesize controller=_controller - In the implementation block
@property (nonatomic,readonly) int profile;                                                     //@synthesize profile=_profile - In the implementation block
@property (assign,nonatomic) double buttonAUpDelay;                                             //@synthesize buttonAUpDelay=_buttonAUpDelay - In the implementation block
@property (assign,nonatomic,__weak) id<MREmulatedGameControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<MREmulatedGameControllerDelegate>)delegate;
-(void)setDelegate:(id<MREmulatedGameControllerDelegate>)arg1 ;
-(id)initWithProperties:(id)arg1 ;
-(int)profile;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(void)_handleGameControllerDidChange:(id)arg1 ;
-(void)sendGameControllerEvent:(id)arg1 ;
-(double)buttonAUpDelay;
-(void)setButtonAUpDelay:(double)arg1 ;
@end

