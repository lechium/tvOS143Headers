/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:12:33 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString;

@interface AXIPCMessage : NSObject <NSSecureCoding> {

	int _key;
	unsigned _clientPort;
	NSDictionary* _payload;
	SCD_Struct_AX4 _auditToken;

}

@property (assign,nonatomic) int key;                                       //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSDictionary * payload;                          //@synthesize payload=_payload - In the implementation block
@property (assign,nonatomic) unsigned clientPort;                           //@synthesize clientPort=_clientPort - In the implementation block
@property (assign,nonatomic) SCD_Struct_AX4 auditToken;                     //@synthesize auditToken=_auditToken - In the implementation block
@property (nonatomic,copy,readonly) NSString * senderBundleId; 
+(BOOL)supportsSecureCoding;
+(id)archivedMessageFromData:(id)arg1 ;
-(id)description;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(int)key;
-(SCD_Struct_AX4)auditToken;
-(id)initWithKey:(int)arg1 ;
-(void)setKey:(int)arg1 ;
-(NSDictionary *)payload;
-(void)setPayload:(NSDictionary *)arg1 ;
-(void)setClientPort:(unsigned)arg1 ;
-(void)setAuditToken:(SCD_Struct_AX4)arg1 ;
-(id)initWithKey:(int)arg1 payload:(id)arg2 ;
-(NSString *)senderBundleId;
-(unsigned)clientPort;
-(id)initWithKey:(int)arg1 payload:(id)arg2 keyDebugInfo:(id)arg3 ;
@end

