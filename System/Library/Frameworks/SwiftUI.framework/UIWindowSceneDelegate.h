/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:36 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

@class UIWindow;


@protocol UIWindowSceneDelegate <UISceneDelegate>
@property (nonatomic,retain) UIWindow * window; 
@optional
-(UIWindow *)window;
-(void)setWindow:(id)arg1;
-(void)windowScene:(id)arg1 didUpdateCoordinateSpace:(id)arg2 interfaceOrientation:(long long)arg3 traitCollection:(id)arg4;
-(void)windowScene:(id)arg1 performActionForShortcutItem:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)windowScene:(id)arg1 userDidAcceptCloudKitShareWithMetadata:(id)arg2;

@end

