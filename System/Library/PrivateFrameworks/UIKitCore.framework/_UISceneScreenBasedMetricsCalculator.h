/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:50 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/_UISceneMetricsCalculating.h>

@class UIWindowScene, NSString;

@interface _UISceneScreenBasedMetricsCalculator : NSObject <_UISceneMetricsCalculating> {

	UIWindowScene* _scene;

}

@property (assign,setter=_setScene:,nonatomic,__weak) UIWindowScene * _scene;              //@synthesize scene=_scene - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIWindowScene *)_scene;
-(void)_setScene:(id)arg1 ;
-(void)_updateMetricsOnWindows:(id)arg1 animated:(BOOL)arg2 ;
@end

