/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:18:24 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/AutoBugCaptureCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AutoBugCaptureCore/AutoBugCaptureCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface ABCPbSigRequest : PBRequest <NSCopying> {

	NSString* _build;
	NSString* _buildVariant;
	NSString* _caseGroupIdentifier;
	NSString* _caseIdentifier;
	NSString* _domain;
	unsigned _logSizeTotal;
	NSString* _process;
	NSString* _subtype;
	NSString* _subtypeContext;
	NSString* _type;
	SCD_Struct_AB4 _has;

}

@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                           //@synthesize domain=_domain - In the implementation block
@property (nonatomic,readonly) BOOL hasType; 
@property (nonatomic,retain) NSString * type;                             //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtype; 
@property (nonatomic,retain) NSString * subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (nonatomic,readonly) BOOL hasSubtypeContext; 
@property (nonatomic,retain) NSString * subtypeContext;                   //@synthesize subtypeContext=_subtypeContext - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseIdentifier; 
@property (nonatomic,retain) NSString * caseIdentifier;                   //@synthesize caseIdentifier=_caseIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL hasProcess; 
@property (nonatomic,retain) NSString * process;                          //@synthesize process=_process - In the implementation block
@property (nonatomic,readonly) BOOL hasBuild; 
@property (nonatomic,retain) NSString * build;                            //@synthesize build=_build - In the implementation block
@property (nonatomic,readonly) BOOL hasBuildVariant; 
@property (nonatomic,retain) NSString * buildVariant;                     //@synthesize buildVariant=_buildVariant - In the implementation block
@property (nonatomic,readonly) BOOL hasCaseGroupIdentifier; 
@property (nonatomic,retain) NSString * caseGroupIdentifier;              //@synthesize caseGroupIdentifier=_caseGroupIdentifier - In the implementation block
@property (assign,nonatomic) BOOL hasLogSizeTotal; 
@property (assign,nonatomic) unsigned logSizeTotal;                       //@synthesize logSizeTotal=_logSizeTotal - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(void)setType:(NSString *)arg1 ;
-(NSString *)domain;
-(NSString *)type;
-(void)setDomain:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)subtype;
-(NSString *)build;
-(NSString *)process;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setProcess:(NSString *)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasType;
-(BOOL)hasDomain;
-(BOOL)hasProcess;
-(void)setSubtype:(NSString *)arg1 ;
-(BOOL)hasBuild;
-(void)setBuild:(NSString *)arg1 ;
-(void)setSubtypeContext:(NSString *)arg1 ;
-(NSString *)subtypeContext;
-(NSString *)buildVariant;
-(BOOL)hasSubtype;
-(void)setCaseIdentifier:(NSString *)arg1 ;
-(BOOL)hasCaseIdentifier;
-(NSString *)caseIdentifier;
-(BOOL)hasSubtypeContext;
-(void)setBuildVariant:(NSString *)arg1 ;
-(void)setCaseGroupIdentifier:(NSString *)arg1 ;
-(BOOL)hasBuildVariant;
-(BOOL)hasCaseGroupIdentifier;
-(void)setLogSizeTotal:(unsigned)arg1 ;
-(void)setHasLogSizeTotal:(BOOL)arg1 ;
-(BOOL)hasLogSizeTotal;
-(NSString *)caseGroupIdentifier;
-(unsigned)logSizeTotal;
@end

