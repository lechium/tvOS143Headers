/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol _UIQueuingScrollViewDelegate <NSObject>
@required
-(void)queuingScrollView:(id)arg1 willManuallyScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 animated:(BOOL)arg5;
-(void)queuingScrollView:(id)arg1 didCommitManualScroll:(BOOL)arg2 toRevealView:(id)arg3 concealView:(id)arg4 direction:(long long)arg5 animated:(BOOL)arg6 canComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 didEndManualScroll:(BOOL)arg2 toRevealView:(id)arg3 direction:(long long)arg4 animated:(BOOL)arg5 didFinish:(BOOL)arg6 didComplete:(BOOL)arg7;
-(void)queuingScrollView:(id)arg1 didBailoutOfScrollAndRevealedView:(id)arg2;
-(void)queuingScrollViewDidFinishScrolling:(id)arg1;
-(BOOL)queuingScrollViewShouldLayoutSubviews:(id)arg1;
-(void)queuingScrollView:(id)arg1 attemptToPageInDirection:(long long)arg2;

@end

