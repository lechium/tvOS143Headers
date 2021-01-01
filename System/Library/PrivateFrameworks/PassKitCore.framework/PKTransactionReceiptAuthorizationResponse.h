/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:37 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PKPaymentWebServiceResponse.h>

@class NSString, NSData;

@interface PKTransactionReceiptAuthorizationResponse : PKPaymentWebServiceResponse {

	NSString* _authorizationToken;
	NSData* _signature;
	NSString* _conversationIdentifier;

}

@property (nonatomic,readonly) NSString * authorizationToken;              //@synthesize authorizationToken=_authorizationToken - In the implementation block
@property (nonatomic,readonly) NSData * signature;                         //@synthesize signature=_signature - In the implementation block
@property (nonatomic,copy) NSString * conversationIdentifier;              //@synthesize conversationIdentifier=_conversationIdentifier - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSData *)signature;
-(NSString *)conversationIdentifier;
-(void)setConversationIdentifier:(NSString *)arg1 ;
-(NSString *)authorizationToken;
@end

