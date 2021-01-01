/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:14:45 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationFaceTimeSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _linkProbingCapabilityVersion;
	unsigned _mediaControlInfoSubVersion;
	unsigned _switches;
	BOOL _oneToOneModeSupported;
	SCD_Struct_VC102 _has;

}

@property (assign,nonatomic) BOOL hasCapabilities; 
@property (assign,nonatomic) unsigned capabilities;                              //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) BOOL hasSwitches; 
@property (assign,nonatomic) unsigned switches;                                  //@synthesize switches=_switches - In the implementation block
@property (assign,nonatomic) BOOL hasOneToOneModeSupported; 
@property (assign,nonatomic) BOOL oneToOneModeSupported;                         //@synthesize oneToOneModeSupported=_oneToOneModeSupported - In the implementation block
@property (assign,nonatomic) BOOL hasMediaControlInfoSubVersion; 
@property (assign,nonatomic) unsigned mediaControlInfoSubVersion;                //@synthesize mediaControlInfoSubVersion=_mediaControlInfoSubVersion - In the implementation block
@property (assign,nonatomic) BOOL hasLinkProbingCapabilityVersion; 
@property (assign,nonatomic) unsigned linkProbingCapabilityVersion;              //@synthesize linkProbingCapabilityVersion=_linkProbingCapabilityVersion - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(unsigned)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(void)setHasCapabilities:(BOOL)arg1 ;
-(BOOL)hasCapabilities;
-(unsigned char)mediaControlInfoFECFeedbackVersion;
-(void)setOneToOneModeSupported:(BOOL)arg1 ;
-(void)setLinkProbingCapabilityVersion:(unsigned)arg1 ;
-(BOOL)SIPDisabled;
-(BOOL)secureMessagingRequired;
-(BOOL)oneToOneModeSupported;
-(unsigned)linkProbingCapabilityVersion;
-(unsigned)switches;
-(void)setSwitches:(unsigned)arg1 ;
-(void)setMediaControlInfoSubVersion:(unsigned)arg1 ;
-(BOOL)hasSwitches;
-(BOOL)hasOneToOneModeSupported;
-(BOOL)hasMediaControlInfoSubVersion;
-(BOOL)hasLinkProbingCapabilityVersion;
-(void)setHasSwitches:(BOOL)arg1 ;
-(void)setHasOneToOneModeSupported:(BOOL)arg1 ;
-(unsigned)mediaControlInfoSubVersion;
-(void)setHasMediaControlInfoSubVersion:(BOOL)arg1 ;
-(void)setHasLinkProbingCapabilityVersion:(BOOL)arg1 ;
@end

