/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:49 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <iTunesCloud/ICURLResponseAuthenticationProvider.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ICStoreURLResponseAuthenticationProvider : ICURLResponseAuthenticationProvider <NSSecureCoding>
+(BOOL)supportsSecureCoding;
-(void)performAuthenticationUsingRequestContext:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)performAuthenticationToHandleResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_performAuthenticationUsingRequestContext:(id)arg1 usingVerificationInteractionLevel:(long long)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)_adjustedAuthenticationPolicyForResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

