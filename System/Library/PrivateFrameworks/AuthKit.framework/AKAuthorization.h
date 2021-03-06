/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:10:25 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol AKCredentialRequestProtocol, AKCredential;
@interface AKAuthorization : NSObject <NSSecureCoding> {

	id<AKCredentialRequestProtocol> _authorizedRequest;
	id<AKCredential> _credential;

}

@property (nonatomic,retain) id<AKCredentialRequestProtocol> authorizedRequest;              //@synthesize authorizedRequest=_authorizedRequest - In the implementation block
@property (nonatomic,retain) id<AKCredential> credential;                                    //@synthesize credential=_credential - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<AKCredential>)credential;
-(void)setCredential:(id<AKCredential>)arg1 ;
-(id<AKCredentialRequestProtocol>)authorizedRequest;
-(void)setAuthorizedRequest:(id<AKCredentialRequestProtocol>)arg1 ;
@end

