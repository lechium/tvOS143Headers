/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol FBSUIApplicationWorkspaceDelegate <FBSWorkspaceDelegate>
@optional
-(void)workspaceNoteAssertionExpirationImminent:(id)arg1;
-(void)workspaceShouldExit:(id)arg1 withTransitionContext:(id)arg2;

@required
-(void)workspace:(id)arg1 didLaunchWithCompletion:(/*^block*/id)arg2;
-(void)workspaceShouldExit:(id)arg1;

@end

