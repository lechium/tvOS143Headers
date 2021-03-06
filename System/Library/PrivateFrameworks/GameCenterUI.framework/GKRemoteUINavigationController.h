/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:09 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UINavigationController.h>

@class GKRemoteUIController;

@interface GKRemoteUINavigationController : UINavigationController {

	GKRemoteUIController* _remoteUIController;

}

@property (nonatomic,readonly) GKRemoteUIController * remoteUIController;              //@synthesize remoteUIController=_remoteUIController - In the implementation block
-(unsigned long long)supportedInterfaceOrientations;
-(void)loadView;
-(GKRemoteUIController *)remoteUIController;
-(id)initWithRemoteUIController:(id)arg1 ;
@end

