/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:20:22 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/TVContentPartnerKitUI.framework/TVContentPartnerKitUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class SSAuthenticationContext, SSAccount;

@interface ATVAuthenticationContext : NSObject {

	SSAuthenticationContext* _authenticationContext;
	SSAccount* _account;
	/*^block*/id _completion;

}

@property (nonatomic,copy) SSAuthenticationContext * authenticationContext;              //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) SSAccount * account;                                        //@synthesize account=_account - In the implementation block
@property (nonatomic,copy) id completion;                                                //@synthesize completion=_completion - In the implementation block
-(id)completion;
-(void)setCompletion:(id)arg1 ;
-(SSAccount *)account;
-(void)setAccount:(SSAccount *)arg1 ;
-(void)setAuthenticationContext:(SSAuthenticationContext *)arg1 ;
-(SSAuthenticationContext *)authenticationContext;
@end

