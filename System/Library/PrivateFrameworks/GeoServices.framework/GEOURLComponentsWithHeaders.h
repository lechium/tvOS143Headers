/*
                       * This header is generated by classdump-dyld 1.5
                       * on Friday, January 1, 2021 at 5:09:55 AM Mountain Standard Time
                       * Operating System: Version 14.3 (Build 18K561)
                       * Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


@class NSURLComponents, NSMutableDictionary, NSURL, GEOURLWithHeaders;

@interface GEOURLComponentsWithHeaders : NSObject {

	NSURLComponents* _URLComponents;
	NSMutableDictionary* _headerFields;

}

@property (nonatomic,readonly) NSURLComponents * URLComponents;                 //@synthesize URLComponents=_URLComponents - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * headerFields;              //@synthesize headerFields=_headerFields - In the implementation block
@property (nonatomic,readonly) NSURL * URL; 
@property (nonatomic,readonly) GEOURLWithHeaders * URLWithHeaders; 
-(id)init;
-(id)initWithURL:(id)arg1 ;
-(id)initWithString:(id)arg1 ;
-(NSURL *)URL;
-(NSMutableDictionary *)headerFields;
-(id)initWithURLComponents:(id)arg1 ;
-(NSURLComponents *)URLComponents;
-(void)updateQueryItemsWithBlock:(/*^block*/id)arg1 ;
-(GEOURLWithHeaders *)URLWithHeaders;
@end
