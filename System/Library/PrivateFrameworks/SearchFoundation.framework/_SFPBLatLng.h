/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:11:59 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBLatLng.h>
@class NSData;


@protocol _SFPBLatLng <NSObject>
@property (assign,nonatomic) double lat; 
@property (assign,nonatomic) double lng; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(id)initWithDictionary:(id)arg1;
-(void)setLat:(double)arg1;
-(double)lat;
-(id)initWithJSON:(id)arg1;
-(double)lng;
-(void)setLng:(double)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBLatLng : PBCodable <_SFPBLatLng, NSSecureCoding> {

	double _lat;
	double _lng;

}

@property (assign,nonatomic) double lat;                            //@synthesize lat=_lat - In the implementation block
@property (assign,nonatomic) double lng;                            //@synthesize lng=_lng - In the implementation block
@property (nonatomic,readonly) NSData * jsonData; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setLat:(double)arg1 ;
-(double)lat;
-(id)initWithJSON:(id)arg1 ;
-(double)lng;
-(void)setLng:(double)arg1 ;
-(NSData *)jsonData;
-(id)initWithFacade:(id)arg1 ;
@end

