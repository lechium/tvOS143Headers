/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:11 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <GameCenterUI/GKExtensionRemoteViewController.h>
#import <libobjc.A.dylib/GKAuthenticateHostProtocol.h>

@class GKHostedAuthenticateViewController, GKGame, NSString;

@interface GKAuthenticateHostViewController : GKExtensionRemoteViewController <GKAuthenticateHostProtocol> {

	GKHostedAuthenticateViewController* _delegate;

}

@property (assign,nonatomic,__weak) GKHostedAuthenticateViewController * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) GKGame * game; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)dismissAutomaticallyAfterExtensionCompletion;
+(id)authenticateExtension;
-(GKHostedAuthenticateViewController *)delegate;
-(void)setDelegate:(GKHostedAuthenticateViewController *)arg1 ;
-(void)viewDidLoad;
-(void)applicationWillTerminate:(id)arg1 ;
-(void)messageFromExtension:(id)arg1 ;
-(void)extensionIsCanceling;
-(void)extensionIsFinishing;
@end
