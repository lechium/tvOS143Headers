/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:15:17 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/AdCore.framework/AdCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <AdCore/AdCore-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData;

@interface ADAttributionRequest : PBRequest <NSCopying> {

	double _downloadClickTimestamp;
	double _iAdConversionTimestamp;
	double _iAdImpressionTimestamp;
	double _purchaseTimestamp;
	double _searchAdClickTimestamp;
	NSString* _adMetadata;
	NSData* _anonymousDemandiAdID;
	NSString* _bundleID;
	NSData* _dPID;
	int _downloadType;
	NSData* _iAdID;
	int _runState;
	NSData* _tiltID;
	NSData* _toroID;
	BOOL _attributedByiTunes;
	SCD_Struct_AD1 _has;

}

@property (nonatomic,readonly) BOOL hasIAdID; 
@property (nonatomic,retain) NSData * iAdID;                              //@synthesize iAdID=_iAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasTiltID; 
@property (nonatomic,retain) NSData * tiltID;                             //@synthesize tiltID=_tiltID - In the implementation block
@property (nonatomic,readonly) BOOL hasAnonymousDemandiAdID; 
@property (nonatomic,retain) NSData * anonymousDemandiAdID;               //@synthesize anonymousDemandiAdID=_anonymousDemandiAdID - In the implementation block
@property (nonatomic,readonly) BOOL hasBundleID; 
@property (nonatomic,retain) NSString * bundleID;                         //@synthesize bundleID=_bundleID - In the implementation block
@property (assign,nonatomic) BOOL hasPurchaseTimestamp; 
@property (assign,nonatomic) double purchaseTimestamp;                    //@synthesize purchaseTimestamp=_purchaseTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIAdConversionTimestamp; 
@property (assign,nonatomic) double iAdConversionTimestamp;               //@synthesize iAdConversionTimestamp=_iAdConversionTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasIAdImpressionTimestamp; 
@property (assign,nonatomic) double iAdImpressionTimestamp;               //@synthesize iAdImpressionTimestamp=_iAdImpressionTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasAttributedByiTunes; 
@property (assign,nonatomic) BOOL attributedByiTunes;                     //@synthesize attributedByiTunes=_attributedByiTunes - In the implementation block
@property (assign,nonatomic) BOOL hasRunState; 
@property (assign,nonatomic) int runState;                                //@synthesize runState=_runState - In the implementation block
@property (nonatomic,readonly) BOOL hasToroID; 
@property (nonatomic,retain) NSData * toroID;                             //@synthesize toroID=_toroID - In the implementation block
@property (nonatomic,readonly) BOOL hasDPID; 
@property (nonatomic,retain) NSData * dPID;                               //@synthesize dPID=_dPID - In the implementation block
@property (assign,nonatomic) BOOL hasSearchAdClickTimestamp; 
@property (assign,nonatomic) double searchAdClickTimestamp;               //@synthesize searchAdClickTimestamp=_searchAdClickTimestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasAdMetadata; 
@property (nonatomic,retain) NSString * adMetadata;                       //@synthesize adMetadata=_adMetadata - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadClickTimestamp; 
@property (assign,nonatomic) double downloadClickTimestamp;               //@synthesize downloadClickTimestamp=_downloadClickTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDownloadType; 
@property (assign,nonatomic) int downloadType;                            //@synthesize downloadType=_downloadType - In the implementation block
+(id)options;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(NSString *)bundleID;
-(void)setBundleID:(NSString *)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(BOOL)hasBundleID;
-(double)purchaseTimestamp;
-(void)setPurchaseTimestamp:(double)arg1 ;
-(void)setIAdID:(NSData *)arg1 ;
-(void)setTiltID:(NSData *)arg1 ;
-(void)setAnonymousDemandiAdID:(NSData *)arg1 ;
-(void)setToroID:(NSData *)arg1 ;
-(void)setDPID:(NSData *)arg1 ;
-(void)setAdMetadata:(NSString *)arg1 ;
-(BOOL)hasIAdID;
-(BOOL)hasTiltID;
-(BOOL)hasAnonymousDemandiAdID;
-(void)setHasPurchaseTimestamp:(BOOL)arg1 ;
-(BOOL)hasPurchaseTimestamp;
-(void)setIAdConversionTimestamp:(double)arg1 ;
-(void)setHasIAdConversionTimestamp:(BOOL)arg1 ;
-(BOOL)hasIAdConversionTimestamp;
-(void)setIAdImpressionTimestamp:(double)arg1 ;
-(void)setHasIAdImpressionTimestamp:(BOOL)arg1 ;
-(BOOL)hasIAdImpressionTimestamp;
-(void)setAttributedByiTunes:(BOOL)arg1 ;
-(void)setHasAttributedByiTunes:(BOOL)arg1 ;
-(BOOL)hasAttributedByiTunes;
-(int)runState;
-(void)setRunState:(int)arg1 ;
-(void)setHasRunState:(BOOL)arg1 ;
-(BOOL)hasRunState;
-(id)runStateAsString:(int)arg1 ;
-(int)StringAsRunState:(id)arg1 ;
-(BOOL)hasToroID;
-(BOOL)hasDPID;
-(void)setSearchAdClickTimestamp:(double)arg1 ;
-(void)setHasSearchAdClickTimestamp:(BOOL)arg1 ;
-(BOOL)hasSearchAdClickTimestamp;
-(BOOL)hasAdMetadata;
-(void)setDownloadClickTimestamp:(double)arg1 ;
-(void)setHasDownloadClickTimestamp:(BOOL)arg1 ;
-(BOOL)hasDownloadClickTimestamp;
-(int)downloadType;
-(void)setDownloadType:(int)arg1 ;
-(void)setHasDownloadType:(BOOL)arg1 ;
-(BOOL)hasDownloadType;
-(id)downloadTypeAsString:(int)arg1 ;
-(int)StringAsDownloadType:(id)arg1 ;
-(NSData *)iAdID;
-(NSData *)tiltID;
-(NSData *)anonymousDemandiAdID;
-(double)iAdConversionTimestamp;
-(double)iAdImpressionTimestamp;
-(BOOL)attributedByiTunes;
-(NSData *)toroID;
-(NSData *)dPID;
-(double)searchAdClickTimestamp;
-(NSString *)adMetadata;
-(double)downloadClickTimestamp;
@end

