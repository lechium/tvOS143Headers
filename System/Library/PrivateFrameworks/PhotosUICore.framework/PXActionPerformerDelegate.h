/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:43 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol PXActionPerformerDelegate <NSObject>
@optional
-(void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
-(BOOL)actionPerformer:(id)arg1 transitionToViewController:(id)arg2 transitionType:(long long)arg3;
-(BOOL)actionPerformer:(id)arg1 dismissViewController:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(BOOL)actionPerformer:(id)arg1 presentViewController:(id)arg2;
-(id)hostViewControllerForActionPerformer:(id)arg1;

@end
