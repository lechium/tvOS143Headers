/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:10 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIKeyboardAnimatorState.h>

@protocol UIInputViewAnimationHost;
@class UIView, UIInputViewSetPlacement, NSString;

@interface _UIKeyboardAnimatorAnimationStyleControllerContext : NSObject <_UIKeyboardAnimatorState> {

	id<UIInputViewAnimationHost> _host;
	UIInputViewSetPlacement* _start;
	UIInputViewSetPlacement* _end;
	CGRect _startFrame;
	CGRect _endFrame;
	BOOL _hidden;

}

@property (nonatomic,retain,readonly) UIView * animatingView; 
@property (assign,nonatomic) BOOL inputViewsHidden;                        //@synthesize hidden=_hidden - In the implementation block
@property (nonatomic,readonly) CGRect startFrame;                          //@synthesize startFrame=_startFrame - In the implementation block
@property (nonatomic,readonly) CGRect endFrame;                            //@synthesize endFrame=_endFrame - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)complete;
-(CGRect)endFrame;
-(CGRect)startFrame;
-(void)setInputViewsHidden:(BOOL)arg1 ;
-(UIView *)animatingView;
-(id)initWithHost:(id)arg1 startPlacement:(id)arg2 endPlacement:(id)arg3 ;
-(BOOL)inputViewsHidden;
@end

