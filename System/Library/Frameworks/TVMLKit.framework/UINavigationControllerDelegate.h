/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:38 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol UINavigationControllerDelegate <NSObject>
@optional
-(id)navigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
-(void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(BOOL)arg3;
-(void)navigationController:(id)arg1 didShowViewController:(id)arg2 animated:(BOOL)arg3;
-(unsigned long long)navigationControllerSupportedInterfaceOrientations:(id)arg1;
-(long long)navigationControllerPreferredInterfaceOrientationForPresentation:(id)arg1;
-(id)navigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;

@end

