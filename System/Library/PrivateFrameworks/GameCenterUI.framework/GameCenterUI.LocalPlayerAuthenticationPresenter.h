/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:13 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/GKLocalPlayerAuthenticationUIPersonality.h>

@interface GameCenterUI.LocalPlayerAuthenticationPresenter : NSObject <GKLocalPlayerAuthenticationUIPersonality> {

	 localPlayer;
	 isUpdating;
	 onUpdatePhaseChange;
	 onAuthenticatedPlayerDidChange;
	 onUIRequired;

}
-(id)init;
-(void)authenticateReturnAlertWithTitle:(id)arg1 message:(id)arg2 localPlayer:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(void)tvAuthenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)authenticationShowGreenBuddyUIForLocalPlayer:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)authenticationShowSignInUIForLocalPlayer:(id)arg1 dismiss:(/*^block*/id)arg2 ;
@end

