/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject {

	AKAppleIDAuthenticationContext* _context;

}

@property (nonatomic,retain) AKAppleIDAuthenticationContext * context;              //@synthesize context=_context - In the implementation block
-(AKAppleIDAuthenticationContext *)context;
-(void)setContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1 ;
-(void)_revokeDeviceTrust;
-(void)handleResponseError:(id)arg1 ;
@end
