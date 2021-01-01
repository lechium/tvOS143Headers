/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppStoreOverlays.framework/AppStoreOverlays
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/_UISceneComponentProviding.h>

@class UIScene, ASOOverlayWindow, ASOOverlayViewController, NSString;

@interface ASOOverlayManager : NSObject <_UISceneComponentProviding> {

	UIScene* _scene;
	ASOOverlayWindow* _window;
	ASOOverlayViewController* _viewController;

}

@property (nonatomic,retain,readonly) ASOOverlayWindow * window;                                   //@synthesize window=_window - In the implementation block
@property (nonatomic,retain) ASOOverlayViewController * viewController;                            //@synthesize viewController=_viewController - In the implementation block
@property (assign,setter=_setScene:,getter=_scene,nonatomic,__weak) UIScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIScene *)_scene;
-(ASOOverlayWindow *)window;
-(void)setViewController:(ASOOverlayViewController *)arg1 ;
-(ASOOverlayViewController *)viewController;
-(id)initWithWindowScene:(id)arg1 ;
-(id)initWithScene:(id)arg1 ;
-(void)presentOverlay:(id)arg1 ;
-(void)dismissOverlay;
-(id)makeViewControllerIfNeeded;
-(void)_setScene:(id)arg1 ;
@end

