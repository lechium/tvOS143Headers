/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIResponder.h>
#import <UIKit/UIWindowSceneDelegate.h>

@class UIWindow;

@interface SwiftUI.AppSceneDelegate : UIResponder <UIWindowSceneDelegate> {

	 window;
	 sceneItemID;
	 lastVersion;
	 sceneBridge;
	 scenePhase;
	 sceneDelegateBox;
	 sceneStorageValues;

}

@property (retain,nonatomic) UIWindow * window; 
-(BOOL)respondsToSelector:(SEL)arg1 ;
-(id)forwardingTargetForSelector:(SEL)arg1 ;
-(id)init;
-(UIWindow *)window;
-(void)setWindow:(UIWindow *)arg1 ;
-(void)sceneDidBecomeActive:(id)arg1 ;
-(void)scene:(id)arg1 willConnectToSession:(id)arg2 options:(id)arg3 ;
-(void)sceneDidDisconnect:(id)arg1 ;
-(void)sceneWillResignActive:(id)arg1 ;
-(void)sceneWillEnterForeground:(id)arg1 ;
-(void)sceneDidEnterBackground:(id)arg1 ;
-(void)scene:(id)arg1 openURLContexts:(id)arg2 ;
-(id)stateRestorationActivityForScene:(id)arg1 ;
-(void)scene:(id)arg1 continueUserActivity:(id)arg2 ;
@end

