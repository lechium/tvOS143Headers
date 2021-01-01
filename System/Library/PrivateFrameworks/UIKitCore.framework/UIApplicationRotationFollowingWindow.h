/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:03 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIWindow.h>

@interface UIApplicationRotationFollowingWindow : UIWindow {

	BOOL _limitToWindowLevel;
	long long _priorityLevel;

}

@property (assign,nonatomic) long long priorityLevel;              //@synthesize priorityLevel=_priorityLevel - In the implementation block
@property (assign,nonatomic) BOOL limitToWindowLevel;              //@synthesize limitToWindowLevel=_limitToWindowLevel - In the implementation block
+(BOOL)_isSystemWindow;
-(id)init;
-(void)setPriorityLevel:(long long)arg1 ;
-(long long)priorityLevel;
-(BOOL)isInterfaceAutorotationDisabled;
-(id)initWithWindowScene:(id)arg1 ;
-(BOOL)_shouldAutorotateToInterfaceOrientation:(long long)arg1 ;
-(BOOL)_shouldControlAutorotation;
-(void)applicationWindowRotated:(id)arg1 ;
-(id)__autorotationSanityCheckObjectFromSource:(id)arg1 selector:(SEL)arg2 ;
-(id)_topMostWindow;
-(void)_commonApplicationRotationFollowingWindowInit;
-(id)_initWithFrame:(CGRect)arg1 attached:(BOOL)arg2 ;
-(void)_handleStatusBarOrientationChange:(id)arg1 ;
-(BOOL)limitToWindowLevel;
-(void)setLimitToWindowLevel:(BOOL)arg1 ;
@end

