/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Catalyst/CATSessionMessage.h>

@class NSUUID, NSDictionary;

@interface CATSessionMessageResume : CATSessionMessage {

	NSUUID* _sessionUUID;
	NSDictionary* _clientUserInfo;

}

@property (nonatomic,copy) NSUUID * sessionUUID;                       //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (nonatomic,copy) NSDictionary * clientUserInfo;              //@synthesize clientUserInfo=_clientUserInfo - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSessionUUID:(NSUUID *)arg1 ;
-(NSUUID *)sessionUUID;
-(NSDictionary *)clientUserInfo;
-(id)initWithSessionUUID:(id)arg1 ;
-(void)setClientUserInfo:(NSDictionary *)arg1 ;
@end

