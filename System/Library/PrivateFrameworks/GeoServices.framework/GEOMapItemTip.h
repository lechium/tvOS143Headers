/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:46 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class GEOPDTip, NSString;

@interface GEOMapItemTip : NSObject {

	GEOPDTip* _geoTip;

}

@property (nonatomic,retain) GEOPDTip * geoTip;                          //@synthesize geoTip=_geoTip - In the implementation block
@property (nonatomic,readonly) BOOL hasTipTime; 
@property (nonatomic,readonly) double tipTime; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * localizedSnippet; 
@property (nonatomic,readonly) NSString * bestImageURL; 
@property (nonatomic,readonly) BOOL hasTipId; 
@property (nonatomic,readonly) NSString * tipId; 
-(NSString *)name;
-(GEOPDTip *)geoTip;
-(BOOL)hasTipTime;
-(double)tipTime;
-(BOOL)hasTipId;
-(NSString *)tipId;
-(id)initWithGEOPDTip:(id)arg1 ;
-(NSString *)localizedSnippet;
-(NSString *)bestImageURL;
-(void)setGeoTip:(GEOPDTip *)arg1 ;
@end

