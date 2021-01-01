/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:32 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _TSKAnimatorDelegate <NSObject>
@required
-(void)animatorWillBeginTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
-(void)animatorDidCompleteTransition:(id)arg1 fromViewController:(id)arg2 toViewController:(id)arg3;
-(id)animator:(id)arg1 previewViewControllerForViewController:(id)arg2;
-(void)animator:(id)arg1 transitionToPreview:(id)arg2 animated:(BOOL)arg3;

@end
