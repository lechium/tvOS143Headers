/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:54 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@protocol NSURLAuthenticationChallengeSender <NSObject>
@optional
-(void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
-(void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;

@required
-(void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;
-(void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
-(void)cancelAuthenticationChallenge:(id)arg1;

@end

