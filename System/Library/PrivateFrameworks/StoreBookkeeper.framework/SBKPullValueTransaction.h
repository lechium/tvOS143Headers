/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/StoreBookkeeper.framework/StoreBookkeeper
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <StoreBookkeeper/SBKTransaction.h>

@protocol SBKKeyValuePayloadPair;
@class NSString;

@interface SBKPullValueTransaction : SBKTransaction {

	BOOL _success;
	NSString* _requestedKey;
	id<SBKKeyValuePayloadPair> _clientItemPayloadPair;
	NSString* _clientItemVersionAnchor;
	id<SBKKeyValuePayloadPair> _resultItemPayloadPair;
	NSString* _resultItemVersionAnchor;
	NSString* _resultDomainVersion;

}

@property (copy,readonly) NSString * requestedKey;                                  //@synthesize requestedKey=_requestedKey - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> clientItemPayloadPair;              //@synthesize clientItemPayloadPair=_clientItemPayloadPair - In the implementation block
@property (readonly) NSString * clientItemVersionAnchor;                            //@synthesize clientItemVersionAnchor=_clientItemVersionAnchor - In the implementation block
@property (readonly) BOOL success;                                                  //@synthesize success=_success - In the implementation block
@property (readonly) id<SBKKeyValuePayloadPair> resultItemPayloadPair;              //@synthesize resultItemPayloadPair=_resultItemPayloadPair - In the implementation block
@property (readonly) NSString * resultItemVersionAnchor;                            //@synthesize resultItemVersionAnchor=_resultItemVersionAnchor - In the implementation block
@property (readonly) NSString * resultDomainVersion;                                //@synthesize resultDomainVersion=_resultDomainVersion - In the implementation block
-(id)description;
-(BOOL)success;
-(NSString *)clientItemVersionAnchor;
-(NSString *)requestedKey;
-(id)clampsKey;
-(id)newRequest;
-(void)processDataInResponse:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id<SBKKeyValuePayloadPair>)clientItemPayloadPair;
-(id<SBKKeyValuePayloadPair>)resultItemPayloadPair;
-(NSString *)resultItemVersionAnchor;
-(NSString *)resultDomainVersion;
-(id)initWithStoreBagContext:(id)arg1 requestedKey:(id)arg2 clientItemPayloadPair:(id)arg3 clientItemVersionAnchor:(id)arg4 ;
@end

