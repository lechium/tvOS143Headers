/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:05 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSLoadingViewController <NSObject>
@property (assign,nonatomic,__weak) id<VSLoadingViewControllerDelegate> delegate; 
@property (assign,getter=isCancellationAllowed,nonatomic) BOOL cancellationAllowed; 
@required
-(id<VSLoadingViewControllerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(BOOL)isCancellationAllowed;
-(void)setCancellationAllowed:(BOOL)arg1;

@end

