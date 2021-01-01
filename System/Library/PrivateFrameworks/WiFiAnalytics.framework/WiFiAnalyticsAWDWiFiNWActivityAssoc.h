/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:21:52 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/WiFiAnalytics.framework/WiFiAnalytics
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <WiFiAnalytics/WiFiAnalytics-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface WiFiAnalyticsAWDWiFiNWActivityAssoc : PBCodable <NSCopying> {

	unsigned _assocFailed;
	unsigned _assocSuccess;
	unsigned _authFailed;
	unsigned _authSuccess;
	unsigned _linkChanged;
	unsigned _reassocFailed;
	unsigned _reassocSuccess;
	unsigned _roamFailed;
	unsigned _roamSuccess;
	SCD_Struct_Wi5 _has;

}

@property (assign,nonatomic) BOOL hasAuthSuccess; 
@property (assign,nonatomic) unsigned authSuccess;                 //@synthesize authSuccess=_authSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasAuthFailed; 
@property (assign,nonatomic) unsigned authFailed;                  //@synthesize authFailed=_authFailed - In the implementation block
@property (assign,nonatomic) BOOL hasAssocSuccess; 
@property (assign,nonatomic) unsigned assocSuccess;                //@synthesize assocSuccess=_assocSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasAssocFailed; 
@property (assign,nonatomic) unsigned assocFailed;                 //@synthesize assocFailed=_assocFailed - In the implementation block
@property (assign,nonatomic) BOOL hasReassocSuccess; 
@property (assign,nonatomic) unsigned reassocSuccess;              //@synthesize reassocSuccess=_reassocSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasReassocFailed; 
@property (assign,nonatomic) unsigned reassocFailed;               //@synthesize reassocFailed=_reassocFailed - In the implementation block
@property (assign,nonatomic) BOOL hasLinkChanged; 
@property (assign,nonatomic) unsigned linkChanged;                 //@synthesize linkChanged=_linkChanged - In the implementation block
@property (assign,nonatomic) BOOL hasRoamSuccess; 
@property (assign,nonatomic) unsigned roamSuccess;                 //@synthesize roamSuccess=_roamSuccess - In the implementation block
@property (assign,nonatomic) BOOL hasRoamFailed; 
@property (assign,nonatomic) unsigned roamFailed;                  //@synthesize roamFailed=_roamFailed - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setAuthSuccess:(unsigned)arg1 ;
-(void)setHasAuthSuccess:(BOOL)arg1 ;
-(BOOL)hasAuthSuccess;
-(void)setAuthFailed:(unsigned)arg1 ;
-(void)setHasAuthFailed:(BOOL)arg1 ;
-(BOOL)hasAuthFailed;
-(void)setAssocSuccess:(unsigned)arg1 ;
-(void)setHasAssocSuccess:(BOOL)arg1 ;
-(BOOL)hasAssocSuccess;
-(void)setAssocFailed:(unsigned)arg1 ;
-(void)setHasAssocFailed:(BOOL)arg1 ;
-(BOOL)hasAssocFailed;
-(void)setReassocSuccess:(unsigned)arg1 ;
-(void)setHasReassocSuccess:(BOOL)arg1 ;
-(BOOL)hasReassocSuccess;
-(void)setReassocFailed:(unsigned)arg1 ;
-(void)setHasReassocFailed:(BOOL)arg1 ;
-(BOOL)hasReassocFailed;
-(void)setLinkChanged:(unsigned)arg1 ;
-(void)setHasLinkChanged:(BOOL)arg1 ;
-(BOOL)hasLinkChanged;
-(void)setRoamSuccess:(unsigned)arg1 ;
-(void)setHasRoamSuccess:(BOOL)arg1 ;
-(BOOL)hasRoamSuccess;
-(void)setRoamFailed:(unsigned)arg1 ;
-(void)setHasRoamFailed:(BOOL)arg1 ;
-(BOOL)hasRoamFailed;
-(unsigned)authSuccess;
-(unsigned)authFailed;
-(unsigned)assocSuccess;
-(unsigned)assocFailed;
-(unsigned)reassocSuccess;
-(unsigned)reassocFailed;
-(unsigned)linkChanged;
-(unsigned)roamSuccess;
-(unsigned)roamFailed;
@end

