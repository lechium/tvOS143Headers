/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:17:04 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol VSIdentityProviderRequestManagerDelegate <NSObject>
@optional
-(void)identityProviderRequestManager:(id)arg1 didAuthenticateAccount:(id)arg2 forRequest:(id)arg3;
-(id)identityProviderRequestManager:(id)arg1 applicationControllerWithIdentityProvider:(id)arg2;
-(BOOL)identityProviderRequestManager:(id)arg1 requestsAlert:(id)arg2;

@required
-(void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3;

@end

