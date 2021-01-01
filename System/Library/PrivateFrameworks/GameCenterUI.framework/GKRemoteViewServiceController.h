/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/GKExtensionHostProtocol.h>

@class GKGame, NSMutableDictionary, GKHostedViewController, UIColor, NSString;

@interface GKRemoteViewServiceController : _UIRemoteViewController <GKExtensionHostProtocol> {

	BOOL _didSetRemoteGame;
	BOOL _viewDidAppear;
	GKGame* _game;
	NSMutableDictionary* _dirtyProperties;
	GKHostedViewController* _managingViewController;
	UIColor* _previousStatusBarColor;
	/*^block*/id _blockToPerformAfterViewDidAppear;

}

@property (nonatomic,retain) NSMutableDictionary * dirtyProperties;                               //@synthesize dirtyProperties=_dirtyProperties - In the implementation block
@property (assign,nonatomic,__weak) GKHostedViewController * managingViewController;              //@synthesize managingViewController=_managingViewController - In the implementation block
@property (nonatomic,retain) UIColor * previousStatusBarColor;                                    //@synthesize previousStatusBarColor=_previousStatusBarColor - In the implementation block
@property (nonatomic,copy) id blockToPerformAfterViewDidAppear;                                   //@synthesize blockToPerformAfterViewDidAppear=_blockToPerformAfterViewDidAppear - In the implementation block
@property (assign,nonatomic) BOOL didSetRemoteGame;                                               //@synthesize didSetRemoteGame=_didSetRemoteGame - In the implementation block
@property (assign,nonatomic) BOOL viewDidAppear;                                                  //@synthesize viewDidAppear=_viewDidAppear - In the implementation block
@property (nonatomic,readonly) BOOL serviceNeedsCurrentGame; 
@property (nonatomic,readonly) BOOL serviceNeedsLocalPlayer; 
@property (nonatomic,retain) GKGame * game;                                                       //@synthesize game=_game - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(BOOL)shouldPropagateAppearanceCustomizations;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setValue:(id)arg1 forKeyPath:(id)arg2 ;
-(unsigned long long)supportedInterfaceOrientations;
-(NSMutableDictionary *)dirtyProperties;
-(void)setDirtyProperties:(NSMutableDictionary *)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)viewDidAppear;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(GKGame *)game;
-(void)setGame:(GKGame *)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)remoteViewControllerIsCanceling;
-(void)remoteViewControllerIsFinishing;
-(void)nudge;
-(void)setManagingViewController:(GKHostedViewController *)arg1 ;
-(void)setupRemoteView;
-(BOOL)didSetRemoteGame;
-(long long)_desiredStatusBarStyle;
-(id)observedKeyPaths;
-(BOOL)serviceNeedsCurrentGame;
-(BOOL)serviceNeedsLocalPlayer;
-(GKHostedViewController *)managingViewController;
-(void)populateInitialStateForRemoteView:(id)arg1 ;
-(void)setDidSetRemoteGame:(BOOL)arg1 ;
-(void)setViewDidAppear:(BOOL)arg1 ;
-(void)_performBlockAfterViewDidAppearIfNeeded;
-(id)blockToPerformAfterViewDidAppear;
-(void)setBlockToPerformAfterViewDidAppear:(id)arg1 ;
-(BOOL)_dismissSelfAfterGettingShouldFinish;
-(void)_performSelectorAfterAppearingOrTimeOut:(SEL)arg1 ;
-(BOOL)_dismissSelfAfterGettingShouldCancel;
-(void)readyToPresentInController:(id)arg1 ;
-(UIColor *)previousStatusBarColor;
-(void)setPreviousStatusBarColor:(UIColor *)arg1 ;
@end
