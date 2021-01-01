/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:19:15 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <libobjc.A.dylib/MTID.h>

@class NSString, NSNumber, NSDate, NSDictionary, MTIDScheme, MTIDSecret;

@interface MTIDInfo : NSObject <MTID> {

	BOOL _isSynchronized;
	MTIDScheme* _scheme;
	MTIDSecret* _secret;
	NSString* _idString;
	NSNumber* _dsId;
	NSDate* _effectiveDate;
	NSDate* _expirationDate;
	NSDate* _computedDate;

}

@property (nonatomic,retain) MTIDScheme * scheme;                              //@synthesize scheme=_scheme - In the implementation block
@property (nonatomic,retain) MTIDSecret * secret;                              //@synthesize secret=_secret - In the implementation block
@property (nonatomic,copy) NSString * idString;                                //@synthesize idString=_idString - In the implementation block
@property (nonatomic,copy) NSNumber * dsId;                                    //@synthesize dsId=_dsId - In the implementation block
@property (nonatomic,copy) NSDate * effectiveDate;                             //@synthesize effectiveDate=_effectiveDate - In the implementation block
@property (nonatomic,copy) NSDate * expirationDate;                            //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) BOOL isSynchronized;                              //@synthesize isSynchronized=_isSynchronized - In the implementation block
@property (nonatomic,retain) NSDate * computedDate;                            //@synthesize computedDate=_computedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * idNamespace; 
@property (nonatomic,readonly) long long idType; 
@property (nonatomic,readonly) double lifespan; 
@property (nonatomic,copy,readonly) NSDictionary * metricsFields; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(MTIDScheme *)scheme;
-(void)setScheme:(MTIDScheme *)arg1 ;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSDate *)expirationDate;
-(id)debugInfo;
-(NSDate *)effectiveDate;
-(void)setEffectiveDate:(NSDate *)arg1 ;
-(MTIDSecret *)secret;
-(void)setSecret:(MTIDSecret *)arg1 ;
-(NSString *)idString;
-(NSNumber *)dsId;
-(BOOL)isSynchronized;
-(void)setIsSynchronized:(BOOL)arg1 ;
-(NSString *)idNamespace;
-(long long)idType;
-(double)lifespan;
-(NSDictionary *)metricsFields;
-(id)initWithScheme:(id)arg1 secret:(id)arg2 idString:(id)arg3 dsId:(id)arg4 effectiveDate:(id)arg5 expirationDate:(id)arg6 ;
-(void)setDsId:(NSNumber *)arg1 ;
-(void)setIdString:(NSString *)arg1 ;
-(void)setComputedDate:(NSDate *)arg1 ;
-(BOOL)isValueExpired;
-(NSDate *)computedDate;
@end

