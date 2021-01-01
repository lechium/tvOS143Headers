/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:13:34 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSUUID;

@interface PKAppletSubcredentialSharingInvitation : NSObject <NSSecureCoding, NSCopying> {

	BOOL _forWatch;
	NSString* _identifier;
	NSString* _originatorIDSHandle;
	NSString* _partnerIdentifier;
	NSString* _pairedReaderIdentifier;
	NSString* _recipientName;
	NSUUID* _sharingSessionIdentifier;
	unsigned long long _entitlement;
	NSString* _issuer;
	NSString* _deviceModel;

}

@property (nonatomic,copy) NSString * identifier;                            //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * originatorIDSHandle;                   //@synthesize originatorIDSHandle=_originatorIDSHandle - In the implementation block
@property (nonatomic,copy) NSString * partnerIdentifier;                     //@synthesize partnerIdentifier=_partnerIdentifier - In the implementation block
@property (nonatomic,copy) NSString * pairedReaderIdentifier;                //@synthesize pairedReaderIdentifier=_pairedReaderIdentifier - In the implementation block
@property (nonatomic,copy) NSString * recipientName;                         //@synthesize recipientName=_recipientName - In the implementation block
@property (nonatomic,retain) NSUUID * sharingSessionIdentifier;              //@synthesize sharingSessionIdentifier=_sharingSessionIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long entitlement;                 //@synthesize entitlement=_entitlement - In the implementation block
@property (nonatomic,copy) NSString * issuer;                                //@synthesize issuer=_issuer - In the implementation block
@property (nonatomic,copy) NSString * deviceModel;                           //@synthesize deviceModel=_deviceModel - In the implementation block
@property (assign,getter=isForWatch,nonatomic) BOOL forWatch;                //@synthesize forWatch=_forWatch - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)invitationFromSharedCredential:(id)arg1 withCredential:(id)arg2 pass:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)dataRepresentation;
-(NSString *)issuer;
-(NSString *)deviceModel;
-(void)setDeviceModel:(NSString *)arg1 ;
-(unsigned long long)entitlement;
-(void)setEntitlement:(unsigned long long)arg1 ;
-(BOOL)isSameInvitationAsInvitation:(id)arg1 ;
-(NSString *)partnerIdentifier;
-(NSUUID *)sharingSessionIdentifier;
-(void)setSharingSessionIdentifier:(NSUUID *)arg1 ;
-(NSString *)recipientName;
-(NSString *)pairedReaderIdentifier;
-(id)initWithPartnerIdentifier:(id)arg1 pairedReaderIdentifier:(id)arg2 recipientName:(id)arg3 entitlement:(unsigned long long)arg4 ;
-(void)setIssuer:(NSString *)arg1 ;
-(void)setForWatch:(BOOL)arg1 ;
-(void)setRecipientName:(NSString *)arg1 ;
-(BOOL)isForWatch;
-(void)setPartnerIdentifier:(NSString *)arg1 ;
-(void)setPairedReaderIdentifier:(NSString *)arg1 ;
-(NSString *)originatorIDSHandle;
-(void)setOriginatorIDSHandle:(NSString *)arg1 ;
-(BOOL)isEqualToInvitation:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 sharingSessionIdentifier:(id)arg2 originatorIDSHandle:(id)arg3 invitationData:(id)arg4 ;
-(id)sharingConfigurationRepresentation;
-(id)invitationRequestRepresentation;
-(BOOL)canBeSent;
@end

