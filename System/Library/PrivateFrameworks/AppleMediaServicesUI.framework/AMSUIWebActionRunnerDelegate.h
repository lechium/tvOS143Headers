/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AppleMediaServicesUI.framework/AppleMediaServicesUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol AMSUIWebActionRunnerDelegate <NSObject>
@required
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleAuthenticateRequest:(id)arg3;
-(id)action:(id)arg1 pauseTimeouts:(BOOL)arg2 handleDialogRequest:(id)arg3;
-(void)actionDidFinishPurchaseWithResult:(id)arg1 error:(id)arg2;
-(id)action:(id)arg1 handleActionObject:(id)arg2;
-(void)action:(id)arg1 didEncodeNetworkRequest:(id)arg2;

@end
